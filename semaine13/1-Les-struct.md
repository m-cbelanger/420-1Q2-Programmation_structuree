# Les struct

Les structures, ou struct, sont un conteneur pratique de regrouper plusieurs variables sous un même nom, ce qui permet de mieux organiser et structurer les données en C++. Elles sont utiles quand on a besoin de représenter un objet ou une entité qui possède plusieurs attributs, comme un étudiant, une voiture, ou un livre, par exemple.

## Objectif des struct

Avec une struct, on peut regrouper plusieurs variables de types différents sous un même nom. Par exemple, imaginons que l’on souhaite représenter un étudiant. Un étudiant a plusieurs informations, telles que :

un nom,
un âge,
une moyenne générale.

Sans struct, il faudrait créer chaque variable séparément. Mais avec struct, on peut les regrouper. 

## Déclaration d'une struct

On doit déclarer une struct comme un modèle de la structure de données. On déclare le mot réservé `struct`, suivi (pas obligatoire, mais plus utile) du nom de la structure avec une lettre majuscule. Il est avisé de placer les struct dans la zone des variables globales ou dans le fichier .h pour que le type inventé soit utilisé dans tout le programme.

**On n'initialise PAS les valeurs dans une struct sauf si on veut des valeurs par défaut**

```cpp
//Dans la zone en haut, avant le main() et les autres fonctions ou dans le .h si on en a un.
struct Etudiant { //accolades pour déterminer le début et la fin de la structure.
	string nom;
	int age;
	float moyenne;
};
```

## Créer et utiliser une struct

On déclare une `variable` de type Etudiant qu'on nomme unEtudiant.

Pour instaurer les champs de la struct, on utilise le nom de la variable suivi d'un point (.) et du nom du champ dans lequel on affecte la valeur.

```cpp
void utilisationStruct(){

    Etudiant unEtudiant; //création d'une variable de type Etudiant

    unEtudiant.nom = "Alice"; // on met la string Alexis dans le champ nom de la struct unEtudiant
    unEtudiant.age = 18;// on met l'entier 18 dans le champ age de la struct unEtudiant
    unEtudiant.moyenne = 82.1; // on met le float 82.1 dans le champ moyenne de la struct unEtudiant
}
```

## Exercice 1

a) déclarer un étudiant dans lequel vous mettez votre nom, votre age et la moyenne des évaluations. <br>
b) déclarer un autre étudiant pour lequel on remplit les 3 champs en posant 3 questions à l'utilisateur. <br>
c) afficher les 2 moyennes dans une phrase. <br>
d) faire le code qui décide laquelle des 2 personnes est la plus vieille.<br>
e) faire le code qui calcule la moyenne entre les 2 étudiants et qui l'affiche. <br>


## Solution:

```cpp
void exercice1() {

	//a)
	Etudiant etu1 = { "Marie", 37, 87.5 };
	
	//b)
	Etudiant etu2;
	cout << "Quel est votre nom? ";
	cin >> etu2.nom;
	cout << "Quel est votre âge? ";
	cin >> etu2.age;
	cout << "Quel est votre moyenne? ";
	cin >> etu2.moyenne;

	//c)
	cout << "La moyenne de " << etu1.nom << " est " << etu1.moyenne << " tandis que la moyenne de " << etu2.nom << " est " << etu2.moyenne << endl;

	//d)
	if (etu1.age > etu2.age) {
		cout << "La personne la plus vieille est " << etu1.nom << endl;
	}
	else {
		cout << "La personne la plus vieille est " << etu2.nom << endl;
	}

	//e)

	float moyenne = (etu1.moyenne + etu2.moyenne) / 2.0;
	cout << "La moyenne des 2 est: " << moyenne;

}
```

## Tableau dans une struct

On peut placer un tableau comme champ d'une struct, au même titre que les autres champs.

## Exercice 2

a) déclarer une struct nommée Cours qui contient un nom de cours et un tableau de notes qui pourra accueillir 6 notes d'évaluation. 

b) créer une variable resultatsEtu1 de type Cours. Ajouter un nom de cours "programmation structurée" et un tableau de 6 notes d'évaluations au choix.

c) afficher la 3e note de resultatsEtu1 obtenue

d) changer la note de resultatsEtu1 de 56.5 à 60

e) calculer et afficher la moyenne de ce cours, en supposant que la pondération de toutes les évaluation est la même. 

## Solution:

```cpp
//a)
struct Cours {
	string nomCours;
	float notes[6];
};
void exercice2() {
	//b)
	Cours resultatsEtu1;
	
	resultatsEtu1.nomCours = "Programmation structurée";
	resultatsEtu1.notes[0] = 56.5;
	resultatsEtu1.notes[1] = 89;
	resultatsEtu1.notes[2] = 66;
	resultatsEtu1.notes[3] = 100;
	resultatsEtu1.notes[4] = 99;
	resultatsEtu1.notes[5] = 77;
	//c)
	cout << "La 3e note est: " << resultatsEtu1.notes[2] << endl;
	//d)
	resultatsEtu1.notes[0] = 60;

	//e)
	float moyenne = 0;
	for (int i = 0; i < size(resultatsEtu1.notes); i++) {
		moyenne = moyenne + resultatsEtu1.notes[i];
	}
	moyenne = moyenne / size(resultatsEtu1.notes);

	cout << "La moyenne de ce cours est " << moyenne;
}
```


## Struct dans une fonction

Une struct peut être passée en paramètre à une fonction et peut aussi être retournée. 

## Exemple 1

Faire la fonction `calculerMoyenne` qui prend un Cours en paramètre et retourne le résultat de la moyenne des notes.

```cpp
float calculerMoyenne(Cours cours) {
	float moyenne = 0;
	for (int i = 0; i < size(cours.notes); i++) {
		moyenne += cours.notes[i];
	}
	moyenne = moyenne / size(cours.notes);
	return moyenne;
}
```


## Exemple 2

Faire la fonction `creerEtudiant` qui prend en paramètre un nom, un age et une moyenne et qui retourne une struct T_Etudiant. 

```cpp
Etudiant creerEtudiant(string nom, int age, float moyenne) {
	Etudiant etu;
	etu.nom = nom;
	etu.age = age;
	etu.moyenne = moyenne;
	return etu;
}
```


## Struct dans un tableau

Une struct peut être le type d'un tableau aussi! Si on veut un tableau d'étudiants avec leur nom, leur  et leur moyenne, on le fait comme ceci:

## Exemple 3

```cpp
void structDansTableau() {
    //Utilisation de la struct
	Etudiant etu1 = {"Albert", 21, 78.5 };
	Etudiant etu2 = {"Florence", 19, 81.4 };
	Etudiant etu3 = {"Jonathan", 34, 67.1 };
	Etudiant etu4 = {"Sandrine", 23, 77.4 };

    //Déclaration du tableau de struc (conteneur de struct)
	Etudiant etudiants[4];
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

Créer un 2e type d'étudiant, Etudiant2, qui aura un nom, un age et un Cours 

```cpp
struct Etudiant2 {
	string nom;
	int age;
	Cours cours;
};
```






