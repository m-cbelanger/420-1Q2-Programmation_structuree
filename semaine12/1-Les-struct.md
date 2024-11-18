# Les struct

Les structures, ou struct, sont un moyen pratique de regrouper plusieurs variables sous un même nom, ce qui permet de mieux organiser et structurer les données en C++. Elles sont utiles quand on a besoin de représenter un objet ou une entité qui possède plusieurs attributs, comme un étudiant, une voiture, ou un livre, par exemple.

## Objectif des struct

Avec une struct, on peut regrouper plusieurs variables de types différents sous un même nom. Par exemple, imaginons que l’on souhaite représenter un étudiant. Un étudiant a plusieurs informations, telles que :

un nom,
un âge,
une moyenne générale.

Sans struct, il faudrait créer chaque variable séparément. Mais avec struct, on peut les regrouper. 

## Déclaration d'une struct

On doit déclarer une struct comme un modèle de la structure de données. On déclare le mot réservé `struct`, suivi du nom de la structure avec une lettre majuscule. Il est fréquent dans vos cours subséquent que la struct aura un nom précédé d'un T_. On réservera le nom sans T_ pour les classes. Il est avisé de placer les struct dans la zone des variables globales pour que le type inventé soit utilisé dans tout le programme.

**On n'initialise PAS les valeurs dans une struct.**

```cpp
//Dans la zone en haut, avant le main() et les autres fonctions.
struct T_Etudiant { //accolades pour déterminer le début et la fin de la structure.
	string nom;
	int age;
	float moyenne;
};
```

## Créer et utiliser une struct

On déclare une `variable` de type T_Etudiant qu'on nomme unEtudiant.

Pour instaurer les champs de la struct, on utilise le nom de la variable suivi d'un point (.) et du nom du champ dans lequel on affecte la valeur.

```cpp
void utilisationStruct(){

    T_Etudiant unEtudiant; //création d'une variable de type T_Etudiant

    unEtudiant.nom = "Alice"; // on met la string Alexis dans le champ nom de la struct unEtudiant
    unEtudiant.age = 18;// on met l'entier 18 dans le champ age de la struct unEtudiant
    unEtudiant.moyenne = 82.1; // on met le float 82.1 dans le champ moyenne de la struct unEtudiant
}
```

## Exercice 1

a) déclarer un étudiant qui dans lequel vous mettez votre nom, votre age et la moyenne des évaluations. <br>
b) déclarer un autre étudiant pour lequel on remplit les 3 champs en posant 3 questions à l'utilisateur. <br>
c) afficher les 2 moyennes dans une phrase. <br>
d) faire le code qui décide laquelle des 2 personnes est la plus vieille.<br>
e) faire le code qui calcule la moyenne entre les 2 étudiants et qui l'affiche. <br>

## Tableau dans une struct

On peut placer un tableau comme champ d'une struct, au même titre que les autres champs.

## Exercice 2

a) déclarer une struct nommée T_Cours qui contient un nom de cours et un tableau de notes qui pourra accueillir 6 notes d'évaluation. 

b) créer une variable resultatsEtu1 de type T_Cours. Ajouter un nom de cours "programmation structurée" et un tableau de 6 notes d'évaluations au choix.

c) afficher la 3e note de resultatsEtu1 obtenue

d) changer la note de resultatsEtu1 de 56.5 à 60

e) calculer et afficher la moyenne de ce cours, en supposant que la pondération de toutes les évaluation est la même. 

## Struct dans une fonction

Une struct peut être passée en paramètre à une fonction et peut aussi être retournée. 

## Exemple 1

Faire la fonction `calculerMoyenne` qui prend un T_Cours en paramètre et retourne le résultat de la moyenne des notes.

## Exemple 2

Faire la fonction `creerEtudiant` qui prend en paramètre un nom, un age et une moyenne et qui retourne une struct T_Etudiant. 

## Struct dans un tableau

Une struct peut être le type d'un tableau aussi! Si on veut un tableau d'étudiants avec leur nom, leur  et leur moyenne, on le fait comme ceci:

## Exemple 3

```cpp
void structDansTableau() {
    //Utilisation de la struct
	T_Etudiant etu1 = {"Nazim", 21, 78.5 };
	T_Etudiant etu2 = {"Florence", 19, 81.4 };
	T_Etudiant etu3 = {"Jonathan", 34, 67.1 };
	T_Etudiant etu4 = {"Sandrine", 23, 77.4 };

    //Déclaration du tableau de struc (conteneur de struct)
	T_Etudiant etudiants[4];
    //Remplissage du tableau case par case
	etudiants[0] = etu1;
	etudiants[1] = etu2;
	etudiants[2] = etu3;
	etudiants[3] = etu4;

	// parcourir le tableau et afficher que les noms:
	for (int i = 0; i < 4; i++) {
		cout << etudiants[i].nom << " ";
	}
	cout << endl;

	// Calculer la moyenne d'âge:
	int sommeAge = 0;
	int moyenne = 0;
	for (int i = 0; i < 4; i++) {
		sommeAge += etudiants[i].age;
	}
	moyenne = sommeAge / 4;
	cout << moyenne << "ans" << endl;
}
```

## Struct dans une struct

Il est également possible d'avoir une struct dans une autre struct. Une struct n'est en fait qu'un type de variable qu'on invente et manipule à notre guise! Il peut donc être mis dans une autre struct, au même titre que les types primaires comme les int, char, string, etc.


### Exemple 4

Un étudiant peut avoir des cours! 

Créer un 2e type d'étudiant, T_Etudiant2, qui aura un nom, un age et un T_Cours 

```cpp
//à faire ensemble
```






