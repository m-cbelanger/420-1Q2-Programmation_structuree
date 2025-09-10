# Logique booléenne pour valider les entrées

Lorsque l'utilisateur saisit des entrées, il ne faut pas prendre pour acquis que les entrées seront valides. Même si on explique à l'utilisateur comment utiliser son application, on n'est pas à l'abri d'une erreur.

## Valider une entrée numérique

Si on reprend l'application qui calcule le salaire brut d'une personne, on peut vouloir vérifier que les heures entrées sont valides ou plausibles. On peut estimer à l'extrême. Une personne peut faire entre 0 et 168 heures dans une semaine (il y a 168 heures dans une semaine). Donc, après l'entrée de la valeur par le cin, on peut valider que l'entrée est bonne et donner de la rétroaction à l'utilisateur.

```cpp
    float nbHeures = 0;
    cout << "Combien d'heures avez-vous faites cette semaine?" << endl;
    cin >> nbHeures;

    if (nbHeures < 0 || nbHeures >168) {
        cout << "Le nombre d'heures entré est non valide";
    }
```

> Question! Est-ce qu'on peut mettre && à la place de | | ? Pourquoi?

Si on veut ensuite procéder au calcul quand la valeur entrée est valide, on ajoute ce calcul dans `else`. Cette méthode sera adaptée lorsqu'on fera des boucles, mais pour le moment, si on a un passage unique, on procède ainsi:

```cpp
    float nbHeures = 0;
    float salaire = 0;
    const float tauxHoraire = 43.67;

    cout << "combien d'heure avez-vous faites cette semaine?" << endl;
    cin >> nbHeures;

    if (nbHeures < 0 || nbHeures >168) {
        cout << "Le nombre d'heures entrées est non valide";
    }
    else {
        salaire = tauxHoraire * nbHeures;
        cout << "En faisant " << nbHeures << " à " << tauxHoraire << " $ de l'heure, on a un salaire de " << salaire << "$" <<endl;
    }
```

> Question: pourquoi ne pas mettre le cout d'affichage à l'extérieur de la condition? Comme ceci:

```cpp
    float nbHeures = 0;
    float salaire = 0;
    const float tauxHoraire = 43.67;

    cout << "combien d'heure avez-vous faites cette semaine?" << endl;
    cin >> nbHeures;

    if (nbHeures < 0 || nbHeures >168) {
        cout << "Le nombre d'heures entrées est non valide";
    }
    else {
        salaire = tauxHoraire * nbHeures;
    }

    cout << "En faisant " << nbHeures << " à " << tauxHoraire << " $ de l'heure, on a un salaire de " << salaire << "$" <<endl;
```

L'exemple ci-haut est très simplifié, on pourrait ajouter des niveaux de vérification ou des alertes aussi pour des valeurs suspectes!




## Exemple: la date de naissance

Si on demande à l'utilisateur d'entrer son année de naissance suivie de son mois et son jour de naissance, on voudra vérifier quelques détails:

- Est-ce que l'année de naissance est plausible? (L'humain ayant vécu le plus vieux a vécu 122 ans... On peut donc supposer que les humains ne vivent pas plus de 130 ans.)

On peut vouloir vérifier que la date entrée est valide. Si on prend le temps d'y réfléchir, on a plusieurs choses à vérifier:
- Les années doivent être entre 1900 (environ) et aujourd'hui.
- Les mois doivent être entre 1 et 12 inclusivement.
- Si on a un petit mois (mois de 30 jours), on doit s'assurer qu'on n'a pas 31 comme journée
- Si on a le mois de février, on doit s'assurer que les jours soient de 28 ou moins sauf si on a une année bissextile.
- Une année est bissextile si elle est divisible par 4, mais pas par 100, sauf si elle est divisible par 400. Les années 2000, 2400, 2800 sont bissextiles, mais pas 1900, 2100, 2300.

### Exercice: 

Décortiquons le problème pour faire la tâche suivante: Demander les 3 informations à l'usager (son année de naissance, son mois de naissance et son jour de naissance) et renvoyer le message si oui ou non, la date entrée est valide. Pensez aussi dans quel ordre demander les informations et à quel moment les valider.

*défi*: fouillez comment obtenir l'année en cours au lieu d'hard coder l'année la plus lointaine (1900 dans mon exemple) et l'année courante (pour ne pas changer le code chaque année).


## Principe DRY (don't repeat yourself)

Pour essayer de minimiser les erreurs, la clarté, la lisibilité, et la maintenance, on tente de ne pas répéter des bouts de codes inutilement.

Plus tard, on verra comment optimiser avec des fonctions, des classes, et des fichiers, mais pour débuter, on peut optimiser des bouts de code.

Exemple de code NON-OPTIMISÉ. Comment éviter les répétitions?

```cpp
	float temperature;

	if (temperature < -30) {
		cout << "Le thermomètre est bleu" << endl;
	}
	else if (temperature >= -30 && temperature < 0) {
		cout << "Le thermomètre est jaune" << endl;
	}
	else if (temperature >= 0 && temperature < 20) {
		cout << "Le thermomètre est vert" << endl;
	}
	else {
		cout << "Le thermomètre est rouge" << endl;
	}
```

## REGEX (Expressions régulières)

Les expressions régulières (regex) sont des motifs utilisés pour rechercher, valider ou manipuler des chaînes de caractères. Elles sont très puissantes pour effectuer des tâches comme la validation de formats d'entrée, la recherche de motifs, ou le remplacement de texte.

Voici quelques éléments de base des expressions régulières :

Littéraux : Caractères normaux qui correspondent eux-mêmes. Par exemple, a correspond à la lettre a, A, etc.

Métacaractères : Caractères ayant une signification spéciale dans une expression régulière. Voici quelques exemples :

`.` : Correspond à n'importe quel caractère sauf une nouvelle ligne.<br>
`^` : Correspond au début d'une chaîne.<br>
`$` : Correspond à la fin d'une chaîne.<br>
`*` : Correspond à zéro ou plusieurs occurrences du caractère qui précède.<br>
`+` : Correspond à une ou plusieurs occurrences du caractère qui précède.<br>
`?` : Correspond à zéro ou une occurrence du caractère qui précède.<br>
`[]` : Définit une classe de caractères. Par exemple, [a-z] correspond à une lettre minuscule.<br>
`|` : Correspond à une alternative. Par exemple, cat|dog correspond à "cat" ou "dog".<br>
`()` : Regroupe des motifs. Par exemple, (ab)+ correspond à "ab", "abab", "ababab", etc.<br>
`{}`: Quantificateur. {n} correspond à exactement n occurrence du caractère ou groupe qui le précède. Par exemple a{3} correspond à "aaa", mais pas à "aaaa" ni "aa". On peut avoir un quantificateur {n,}, qui signifie qu'il doit y avoir au moins n occurrence du caractère du groupe qui le précède. Par exemple, a{3,} correspond à "aaa", "aaaa", "aaaaa"... etc. On peut aussi mettre une borne maximale: a{3,5} inclut "aaa", "aaaa" et "aaaaa" seulement.<br>
`\.` : Correspond au caractère point (.), car le point seul signifie n'importe quel caractère.

### Utilisation 

1. Inclure la librairie

```cpp
#include <regex>
```

2. Définir une expression régulière

```cpp
regex monPattern("^[A-Za-z123]{2}"); // Regex pour exactement 2 lettres ou chiffres 1, 2 ou 3. 
```

3. Vérifier une correspondance exacte avec regex_match

```cpp
string input = "AB"; //remarquez qu'il s'agit d'un string
if (regex_match(input, monPattern)) {
    cout << "Correspondance trouvée." << endl;
} else {
    cout << "Pas de correspondance." << endl;
}
```

### Conversion de types

Pour réussir à valider l'entrée d'un utilisateur, une stratégie qui peut être adoptée est de mettre l'input dans une variable de type string et de faire la conversion vers un nombre si le pattern est respecté.

- `stoi`: String TO Int
- `stod`: String TO Double
- `stof`: ... vous devinez?


Écrire le code qui demande à l'utilisateur d'entrer un entier négatif.

réponse:
```cpp
void entierNegatif(){
    string saisie; // en string ici
    regex pattern("-[0-9]+");

    cout << "Entrez une valeur: ";
    cin >> saisie;

    if (regex_match(saisie, pattern)) {
        cout << "Valide!" << endl;
        int saisieNombre = stoi(saisie); //conversion en nombre seulement SI le pattern correspond
        cout << "nombre: "<< saisieNombre;

    } else {
        cout << "Invalide!" << endl;
    }

}
```
- Pourquoi ne pas mettre la conversion après la structure if?
- quelles entrées tester pour valider que le code fait bien ce qu'il a à faire?

### Attention si la saisie contient des espaces

Si vous prévoyez entrer une phrase ou un code qui contient un espace, l'outil `cin` ne sera plus suffisant. Il faudra modifier un peut pour mettre la commande `getline(cin,saisie)`:

```cpp
    string ligne;
    cout << "Entrez une phrase : ";
    getline(cin, ligne); // lit la ligne entière jusqu’à Enter
    cout << "Vous avez écrit : " << ligne << endl;
```

Si on souhaite alterner entre des cin et des getline dans une même portée (scope ), il faut être prudent. Le saut de ligne laissé par cin reste dans le tampon (buffer) et getline lit une ligne vide:

```cpp
int age;
string nom;

cout << "Entrez votre âge : ";
cin >> age; // l’utilisateur tape 25 + ENTER

cout << "Entrez votre nom : ";
getline(cin, nom); // -> lit juste ENTER, résultat = chaîne vide
```

Pour palier à ce problème, il faut effacer le contenu du tampon après avoir utilisé cin:
```cpp
int age;
string nom;

cout << "Entrez votre âge : ";
cin >> age; // l’utilisateur tape 25 + ENTER
cin.ignore(numeric_limits<streamsize>::max(), '\n'); //cin.ignore ici

cout << "Entrez votre nom : ";
getline(cin, nom); // -> lit juste ENTER, résultat = chaîne vide
```

Avec getline, on peut personnaliser le symbole de fin d'entrée (par défaut c'est ENTER). 

```cpp
string texte;
getline(cin, texte, ';'); // lit jusqu’au point-virgule
```

### Exercices en classe

Écrire le code qui demande à l'utilisateur d'entrer les patterns suivants. Pensez aux valeurs à passer en test pour valider que le code fait bien ce qu'il devrait faire.

- un mot de 5 lettres
- un mot entre 2 et 6 lettres
- un code postal
- un mot qui contient un et un seul chiffre, mais pas en première position
- une chaine qui contient au moins un tiret (-) et exactement un espace (pas au début)
- un nombre décimal plus petit ou égal à 100 avec 0 à 2 décimales
- une date (chiffres disposés entre tirets: JJ-MM-AAAA)
- inventez un pattern à respecter et codez-le!


### Autre source

- Pour utiliser les regex pour les recherches et le remplacement de caractères, suivez https://cplusplus.com/reference/regex/ 

- https://www.geeksforgeeks.org/how-to-validate-user-input-in-cpp/  