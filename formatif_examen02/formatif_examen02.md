# Formatif (pratique pour examen 2)

- Ce formatif montre les divers types de questions et le niveau des questions pouvant se trouver dans l'examen 2. 
- Dans l'examen 2, certaines questions demanderont de faire du code, d'autres de répondre sur une feuille ou en commentaire. 
- Vous devez être capable de créer un projet, y ajouter une feuille .cpp et l'enregistrer à un endroit particulier.
- Les exercices ci-dessous ne sont PAS SUFFISANTS pour être prêt à l'examen. Vous devez faire les exercices des semaines 6 à 9. La matière vue avant peut aussi se trouver à l'examen(structure de if, opérateurs booléens, déclaration de variable, nomenclature).
- Portez attention aux endroits où le code est demandé (dans le main() versus dans les fonctions)
- Les noms de fonctions doivent être significatifs, en camelCase.

## Question 1  (code)

Dans le main(), appeler une fonction qui n'a pas de retour, qui ne prend pas de paramètre et qui fait ceci:
- Faire 5 fois le traitement suivant:
    - Demander un nombre entier à l'utilisateur. Si le nombre n'est pas entre 10 et 50, lui mettre un message d'erreur et lui redemander un nombre.
    - Après avoir demandé les 5 nombres, conserver le nombre le plus grand et l'afficher.

Important: l'utilisation de boucles est obligatoire. Aucune restriction sur le type de boucle.


## Question 2 (théorique)

Est-ce que le nombre de tours de boucles sera différent dans les 2 boucles suivantes? Pourquoi?

```cpp
for (int i = 0; i < 8; i++){
    //instructions quelqconques
}

for (int i = 1; i < 9; i++){
    //instructions quelqconques
}
```

## Question 3 (code)

a) Créer une fonction qui prend en paramètre un nombre à virgule (une température en degrés Fahrenheit) et qui retourne la conversion de celui-ci en degrés Celsius. La formule pour la conversion d'un nombre de Fahrenheit `x` en Celsius `y` est: 

$$
y = (x-32) * 5/9
$$

Appeler la fonction avec la température 100 dans le main() et afficher la réponse obtenue.

b) Faire une autre fonction qui elle, prend un nombre et un char en paramètres. Le char indique si la température entrée est en Fahrenheit ('F') ou en Celsius ('C'). Le retour est la conversion appropriée d'une température vers l'autre. Si le char entré est autre chose que 'C' ou 'F', afficher un message qui informe l'utilisateur puis retourner 0.

Appeler la fonction avec la température de 100 Celsius dans le main() et afficher la réponse obtenue.
Appeler ensuite la fonction avec la température de 50 Fahrenheit dans le main() et afficher la réponse obtenue.


## Question 4 (compréhension)

Dans le code ci-dessous, Remplacer les ... dans le while pour que la boucle fasse son travail.

```cpp
	float prix;
	cout << "Veuillez entrer le prix d'un article: ";
	cin >> prix;
	while (   ...   ) {
		cout << "Erreur, le prix doit être positif, veuillez recommencer:";
		cin >> prix;
		if (prix >= 0) {
			cout << "Merci d'avoir corrigé le prix!";
		}
	}
```

## Question 5 (modifier code) 

```cpp

int nombrePatients=0;

void demanderNom(string& leNom) {
	cout << "Entrer le nom du patient: ";
	cin >> leNom;

	//code pour ajouter 1 au nombre de patients totaux

}

void question5(){

    string nom;
    
    demanderNom(nom);

}
```

a) Modifier la fonction `demanderNom` pour incrémenter le nombre de patients à chaque fois qu'on demande le nom.

b) ajouter le code pour demander la question un nombre n de fois, disons 3 pour l'exemple. Afficher le nom à chaque fois.

c) Pourquoi je ne peux pas afficher le contenu de la variable `leNom` dans la fonction `question5` ?

d) Est-ce que la variable nombrePatients est accessible de la fonction `question5` ?


## Question 6 (explications)

a) Nommez au moins 1 avantage à utiliser des fonctions dans son code.

b) Est-ce que c'est possible de retourner une valeur quand on a une fonction qui prend des paramètres en référence?

c) Est-ce que c'est possible d'avoir le même nom de paramètre que la variable qu'on passe en argument à une fonction?

d) Est-ce qu'une fonction peut retourner 2 valeurs distinctes (sans utiliser un tableau ou une structure de données)?



# Informations importantes:

Voici les exercices à REFAIRE pour se pratiquer adéquatement:<br>
semaine06, 2-Exercices_for: Questions 1-3<br>
semaine06, 2-Exercices_for_classe: Questions 1-2<br>
semaine07, 2-Exercices_while: Questions 1-2-5<br>
semaine07, 4-Exercices_do_while: Question 3<br>
semaine08, 2_Exercices_sans_parametres: Question 1 (pas le défi)<br>
semaine08, 4_Exercices_locales_globales: Toutes les questions<br>
semaine08, 6_Exercices_param_par_valeur: Questions 1-2-3-5-6b)c)d)e)<br>
Comprendre votre TP2

## Ce qu'il n'y aura PAS à l'examen:
- pas de boucles imbriquées (pas de dessins d'étoiles en pyramide)<br>
- pas de manipulation de positions de caractères comme dans l'exemple du code postal (code[0], code[1]...)<br>
- pas de sorte boucle forcée lors du code. Vous pouvez être obligé de prendre une boucle, mais vous choisissez le type. Vous devez par contre comprendre le fonctionnement des 3 types si un code est déjà écrit avec un type de boucle.

