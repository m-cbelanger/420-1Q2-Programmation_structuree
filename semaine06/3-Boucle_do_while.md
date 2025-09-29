# La boucle `do..while`

Une boucle do..while est une structure de contrôle en C++ qui permet d'exécuter un bloc de code au moins une fois, puis de répéter cette exécution tant qu'une condition est vraie. Contrairement à la boucle `while`, la condition est testée après chaque exécution du bloc, garantissant ainsi qu'il s'exécute **au moins une fois**.

On utilise souvent cette boucle dans la gestion de menus (choix pour l'utilisateur), entre autres.

## Syntaxe de base

```cpp
do {
    // Instructions à exécuter
} while (condition);
```

- `condition` : une expression booléenne qui est évaluée après chaque itération de la boucle.
- Si la condition est vraie (true), le bloc d'instructions est exécuté à nouveau.
- Si la condition est fausse (false), la boucle ne se répète pas.

## Exemple:

```cpp
int compteur = 1;
do {
    cout << "Compteur = " << compteur << endl;
    compteur++;
} while (compteur <= 5); //la condition est à la fin
```

## Menu

Pour offrir plusieurs choix à un utilisateur, on peut lui offrir d'entrer son choix d'action selon une liste proposée dans un `menu`.

```cpp
char choix;
do {

    cout << "=== Menu ===" << endl;
    cout << "1. Option 1" << endl;
    cout << "2. Option 2" << endl;
    cout << "3. Quitter" << endl;
    cout << "Entrez votre choix (1-3) : ";
    cin >> choix;
    cout << endl;

    switch (choix) {
    case '1':
        cout << "Vous avez choisi l'option 1" << endl;
        break;
    case '2':
        cout << "Vous avez choisi l'option 2" << endl;
        break;
    case '3':
        cout << "Au revoir!" << endl;
        break;
    default:
        cout << "Choix invalide..." << endl;
        break;
    }
    cout << endl;
    system("cls"); //commande pour effacer la console à chaque boucle
} while (choix != '3');
```

## Exercice

Faire un petit programme qui demande à l'utilisateur 2 nombres et qui lui offre ensuite un menu de choix à faire avec ces 2 nombres: 
- choix 1: faire la somme des nombres
- choix 2: faire le produit des nombres
- choix 3: remplacer les 2 nombres
- choix 4: quitter

Spécification: en plus d'afficher le résultat choisi, il faut que le résultat de la somme ou du produit soit mis dans une variable.

Note importante: la variables de contrôle dans les `switch` n'est fonctionnelle qu'avec les `int` et les `char` (et les `enum`, non traitées dans ce cours).

## Rendre le code plus lisible

Lorsqu'on fera des menu avec des traitements possibles, on peut être surchargés par la quantité de code et d'indentation. C'est pourquoi on va introduire `l'appel de fonctions` pour clarifier le code. On va donc déplacer le code dans des fonctions placées `avant le main()`.

## Exemple:

```cpp
#include <iostream>
#include <locale.h>

using namespace std;

void option1() {
	cout << "Vous avez atteint le code de l'option 1 ici"<<endl;
	//system("pause");
}


void option2() {
	cout << "Vous avez atteint le code de l'option 2 ici"<<endl;
	//system("pause");
}


int main() {
	setlocale(LC_ALL, "");
	char choix;

	do {
		cout << "=== Menu ===" << endl;
		cout << "1. Option 1" << endl;
		cout << "2. Option 2" << endl;
		cout << "3. Quitter" << endl;
		cout << "Entrez votre choix (1-3) : ";
		cin >> choix;
		cout << endl;

		switch (choix) {
		case '1':
			option1();
			break;
		case '2':
			option2();
			break;
		case '3':
			cout << "Au revoir!" << endl;
			break;
		default:
			cout << "Choix invalide..." << endl;
			break;
		}
		cout << endl;
		//system("cls");
	} while (choix != '3');

}
```
> Note: en Linux, on doit utiliser system("clear") pour effacer l'écran et <br> 
> system("read -p 'Appuyez sur Entrée pour continuer...' var");




# La fonction `aléatoire` (rand)

Dans plusieurs exercices, il peut être amusant et intéressant de piger certains items au hasard. Il faut d'abord importer les librairies suivantes:

```cpp
#include <cstdlib> 
#include <time.h>
```

La fonction rand( ) retourne un nombre aléatoire entre 0 et RAND_MAX (minimalement 32767, peut varier). Pour avoir un nombre aléatoire entre 0 et 5 inclusivement par exemple, on fera ceci:

```cpp
srand(time(0)); //Pour utiliser le temps actuel pour générer le seed 
int n = 5; //le nombre max inclus dans le tirage au sort
int nombreAleatoire = rand() % (n+1); 
```

