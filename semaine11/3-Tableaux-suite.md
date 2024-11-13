
# Passer un tableau en paramètre à une fonction

En C++, lorsqu’on veut transmettre un tableau à une fonction, il faut savoir que le tableau est en fait passé sous forme de *pointeur* vers le premier élément du tableau. Cela signifie que la fonction peut accéder directement aux éléments du tableau d'origine, ce qui est différent des types de base (comme int, float, etc.) qui sont généralement passés par valeur. 

## Exemple 1

On peut vouloir se faire une fonction qu'on réutilisera très souvent: L'affichage d'un tableau. Pour passer un tableau en paramètre à une fonction, on doit aussi passer sa taille puisque le paramètre passé ne retient que l'adresse de la première case du tableau, pas la taille de ce tableau.


```cpp
void afficherTableauDecimal(float tableau[], int taille) {
	for (int i = 0; i < taille; i++) {
		cout << tableau[i] << " ";
	}
	cout << endl;
}

void exemple1(){
    int monTableau[6] = {12.1, 56.3, 22.9, 18.0, 69.2, 83.4};
    int taille = sizeof(tableau) / sizeof(tableau[0]);
    afficherTableauDecimal(monTableau, taille);
}
```

## Exemple 2

On souhaite passer un tableau à une fonction sans que ce tableau d'entiers soit modifié. On veut que cette fonction retourne la somme des entiers du tableau.

```cpp
//à faire en groupe
```

## Exercice 2

Dans cet exercice, on veux parcourir un tableau de prix d'articles de magasin et augmenter tous les prix de x %. On déclarera le tableau dans la fonction exercice2() et on appellera la fonction modifierPrix pour effectuer le travail. La fonction doit être fonctionnelle pour les augmentations et les réductions de prix.

----------------------------

# Section facultative

# Array (facultatif)

Il existe l'array qui est un conteneur très semblable avec quelques ajouts de vérification modernes. Son fonctionnement est le même malgré une syntaxe légèrement plus complexe, mais il aide à mieux prévenir les accès hors limite avec .at(). Il faut la librairie sur les Array pour pouvoir l'utiliser.

```cpp
#include <array>
```
Les array offrent la fonctionnalité .size() qui renvoie la taille (nombre d'éléments) du tableau.

```cpp
std::array<int, 5> monArray = { 3,5,90,56,23 };
cout << monArray.at(2) << endl;
cout << monArray[2] << endl;
cout << monArray.size() <<endl;
```

### Diverses fonctionnalités de std::array

```cpp
array <string, 8>  nomsProfs = { "Marie-Christine", "Maude-Amélie", "Marco", "Lyne", "Mathieu", "James", "Nicolas", "Frédéric" };

cout << nomsProfs.size() << endl;
cout << nomsProfs.front() << endl;
cout << nomsProfs.back() << endl;
cout << nomsProfs.front() << endl;
```
et plus encore!

# Vecteurs (facultatif)

Les vecteurs sont comme des tableaux dynamiques, qui offrent une gestion de la taille automatique, des méthodes pratiques pour l’ajout et la suppression d’éléments, et une gestion sécurisée des limites avec at(). Ils sont particulièrement utiles lorsqu'on a besoin de tableaux flexibles, dont la taille peut varier en fonction des besoins du programme.

### Principales caractéristiques des vecteurs

#### Déclaration et utilisation :

Un vecteur est déclaré en spécifiant le type des éléments qu’il contiendra : 

```cpp
std::vector<int> monVecteur;
```

On doit préalablement inclure 
```cpp 
#include <vector>.
```
#### Redimensionnement automatique :

Les vecteurs peuvent grandir ou rétrécir automatiquement. En ajoutant un élément avec push_back, le vecteur redimensionne sa capacité si nécessaire.
Cela permet de ne pas fixer la taille au moment de la déclaration, contrairement aux tableaux.
Méthodes courantes :

```cpp
push_back(valeur) // Ajoute une valeur à la fin du vecteur.
pop_back() // Supprime le dernier élément du vecteur.
size() // Retourne le nombre d’éléments présents dans le vecteur.
clear() //Supprime tous les éléments du vecteur.
```

#### Accès aux éléments :

Les éléments peuvent être accédés avec la syntaxe des crochets [] (comme pour les tableaux) ou avec *at(index)*, qui est plus sécurisée car elle vérifie les limites du vecteur.

```cpp
// Déclaration d'un vecteur d'entiers
vector<int> nombres;

// Ajout d'éléments au vecteur
nombres.push_back(10);
nombres.push_back(20);
nombres.push_back(30);

// Affichage des éléments
for (int i = 0; i < nombres.size(); i++) {
	cout << "nombres[" << i << "] = " << nombres.at(i) << endl;
}

// Supprimer le dernier élément
nombres.pop_back();

// Afficher la nouvelle taille du vecteur
cout << "Taille du vecteur après suppression : " << nombres.size() << endl;
```