# Les fonctions avec paramètres

Dans une fonction, un paramètre est une variable que la fonction utilise pour recevoir des valeurs lors de son appel. Ces valeurs, appelées `arguments`, sont passées à la fonction depuis l'extérieur pour que celle-ci puisse les utiliser pour effectuer ses instructions.

# Passage par *valeurs*

## Exemple

La fonction *afficherMessage* ci-dessous ne retourne rien (void) et prend un paramètre de type string pour faire ses instructions.

```cpp
#include <iostream>
using namespace std;

void afficherMessage(string nom) {
    cout << "Bonjour " << nom << " !" << endl;
}

int main() {
    afficherMessage("Marie"); // Appel de la fonction avec l'argument "Marie"
    return 0;
}
```

![paramètres](img/param1.png) <br>


Il est possible d'avoir plusieurs paramètres définit dans une fonction. Il faut définir leurs types respectifs séparés par une virgule. Ici, on a une fonction nommée *somme* qui a comme paramètre un entier et un float et qui retourne un float.

```cpp
#include <iostream>
using namespace std;

float somme(int nombre1, float nombre2) {
    float resultat = nombre1 + nombre2;
    return resultat;
}

int main() {
    float doubleSomme = somme(3, 5.0)*2;
    cout << doubleSomme;
    return 0;

}
```

## Exercice

Modifier le code ci-dessous pour passer la variable *n* en paramètre à la fonction pigerNombreOrdi(). N'oubliez pas de l'inclure dans les calculs!

```cpp
int pigerNombreOrdi() {
	srand(time(0));
	int nombrePige = rand() % (6); 
	return nombrePige;
}

void question3() {
	int n = 5;
	int nombreChoisi;
	char continuer;

	do {
		cout << "Veuillez choisir un nombre au hasard, de 0 à " << n << " : ";
		cin >> nombreChoisi;

        int nombreAleatoire = pigerNombreOrdi(); 

		if (nombreAleatoire == nombreChoisi) {
			cout << "WOW, vous avez gagné!!!" << endl;
		}
		else {
			cout << "Pas le bon nombre" << endl;
		}

		cout << "Voulez-vous rejouer?(o ou n)";
		cin >> continuer;

	} while (continuer == 'o' || continuer == 'O');
	cout << "Aurevoir!" << endl;
}

int main() {
    ...
}
```

## Exercice

Vérification de code postale

Dans le main(), demandez un code postal à l'utilisateur. Stockez le résultat dans une chaine de caractère (string).

On passe ensuite le résultat à une fonction nommée `verifierCodePostal` qui prend en paramètre le code et qui retourne un booléen vrai ou faux, selon si le code est valide.

Pour valider un code postal, il faut que le format respecte l'alternance lettre-chiffre-lettre-espace-lettre-chiffre-lettre. Selon le retour de la fonction dans le `main`, informer l'utilisateur que son code est valide ou non. Lui demander de recommencer tant que ça n'est pas valide.

Truc: si on a une chaîne de caractères nommée `maChaine`, pour accéder au premier élément de cette chaîne, on fait `maChaine[0]` pour le premier élément, `maChaine[1]` pour le 2e, `maChaine[2]` pour le 3e, etc. Pour savoir si un caractère est un nombre, on mets isdigit(...), qui retourne vrai si c'est un nombre. Pour les lettre, on utilise isalpha(...). Pour la longueur de la chaine, on fait maChaine.length(). Il faut la librairie string d'inclus.



# Bon à savoir...

- Ce qu'on a fait ci-haut, c'est de passer des paramètres par *valeur*. Les paramètres sont donc des variables qui copient les arguments passés et dont la portée est la fonction seulement. 

- Il est possible de mettre des paramètres **par défaut**, au cas où un paramètre est manquant.

- Si on veut retourner un résultat, on ne peut retourner qu'une seule valeur à la fois. Si on souhaite modifier plusieurs variables avec une fonction, on peut utiliser des structures de données (tableau, vecteur, autre) ou bien utiliser le passage par référence.



# Passage par *référence*

Le passage par référence permet à une fonction de modifier la valeur d'une variable passée en paramètre. Au lieu de copier la valeur du paramètre, la fonction reçoit une "référence" à la variable originale, ce qui lui permet de travailler directement dessus, de l'utiliser, mais aussi de la **modifier**.

Pour passer un paramètre par référence, il suffit d'ajouter le symbole & (éperluette) entre le type du paramètre et son nom dans la déclaration de la fonction.

Exemple simple:

```cpp
#include <iostream>
using namespace std;
void doubler(int& nombre) {
    nombre = nombre * 2;  // Double la valeur de 'nombre', mais ne retourne rien... 
}

int main() {
    int valeur = 5;
    cout << "Avant : " << valeur << endl;
    
    doubler(valeur);  // Appel de la fonction, 'valeur' est passé par référence
    
    cout << "Après : " << valeur << endl;  // La valeur est maintenant 10
    return 0;
}
```

# Exercices en classe



## 1. Quel type de fonction utiliser?

Dans le code ci-dessous, on souhaite encapsuler le traitement de l'attribution du message de réussite ou d'échec à une ou plusieurs fonctions. Est-ce qu'on prend une fonction avec ou sans paramètres (passage par référence ou par valeur?)? Avec return ou pas? Il manque plusieurs éléments, dont certaines déclarations de variables.

```cpp
cout << "Veuillez entrer le nom de l'étudiant" << endl;
cin >> nomEtudiant;

cout << "Veuillez entrez la note de l'examen 1" << endl;
cin >> noteExamen1;

cout << "Veuillez entrez la note de l'examen 2" << endl;
cin >> noteExamen2;

cout << "Veuillez entrez la note du TP" << endl;
cin >> noteTP;

moyennePonderee = noteExamen1 * 0.35 + noteExamen2 * 0.40 + noteTP * 0.25;

if (moyennePonderee > 0 && moyennePonderee < 60 ) {
	message = "un échec";
}
else if (noteExamen1 < 60 || noteExamen2 < 60 || noteTP < 60) {
	message = "une réussite partielle";
}
else {
	message = "une réussite totale";
}

cout << "L'étudiant " << nomEtudiant << " a eu la note de " << moyennePonderee << ". Il a donc " << message << endl;

```
- Faire une fonction qui s'occupe de demander le nom de l'étudiant. Par valeur ou par référence?
- Faire une fonction qui s'occupe de demander la note à une évaluation. Par valeur ou par référence?
- Faire une fonction qui s'occupe de calculer la moyenne pondérée des évaluations. Par valeur ou par référence?
- Faire une fonction qui s'occupe de déterminer le message de réussite ou d'échec. Par valeur ou par référence?

Suivre ce [lien](https://www.google.com/search?q=id%C3%A9e+illustration+fonction+passage+par+valeur+vs+par+r%C3%A9f%C3%A9rence&oq=id%C3%A9e+illustration+fonction+passage+par+valeur+vs+par+r%C3%A9f%C3%A9rence&gs_lcrp=EgZjaHJvbWUyBggAEEUYOdIBCzI3NzU2MWowajE1qAIIsAIB8QXDbWF1C69WO_EFw21hdQuvVjs&sourceid=chrome&source=chrome.rb&ie=UTF-8#fpstate=ive&vld=cid:7e321a9e,vid:EL1Z4yuD_xQ,st:0) pour une courte vidéo de moins de 5 min pour illustrer la différence entre le passage par valeur et le passage par référence.