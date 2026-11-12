# Variables et leur accessibilité

## Portée (scope)

La portée d'une variable est son accessibilité et sa durée de vie. Certaine variables existent seulement le temps d'une fonction ou d'une boucle, tandis que d'autres vivront pendant tout le programme. 

## Variables locales

Une variable locale est une variable qui est déclarée à l'intérieur d'une fonction ou d'un bloc de code, et qui n'est accessible **qu'à l'intérieur de cette fonction ou ce bloc**. Dès que l'exécution sort de cette fonction, la variable est détruite et sa mémoire est libérée.

## Variables globales

Une variable globale est déclarée en dehors de toute fonction (y compris main()), généralement au début du programme. Elle est accessible depuis toutes les fonctions du programme. Leur portée (accessibilité) est globale, donc accessible et modifiable depuis toutes les fonctions.

### Exemple 1 (distinction des portées des 2 types):

```cpp
#include <iostream>
using namespace std;
// Déclaration d'une variable globale avant les fonctions et le main()
int varGlobale = 10;

void afficherVariables() {
    // Déclaration d'une variable locale DANS une fonction
    int varLocale = 5;

    cout << "Variable locale : " << varLocale << endl;
    cout << "Variable globale : " << varGlobale << endl;
} //fin de l'existence de varLocale

int main() {
    
    afficherVariables();

    // La variable locale n'est pas accessible ici, donc cela provoquerait une erreur si on décommente la ligne suivante
    // cout << "Variable locale : " << locale << endl;

    // La variable globale est accessible partout
    cout << "Variable globale (dans main) : " << varGlobale << endl;

    return 0;
}
```

Les variables globales peuvent être intéressantes, mais ne sont pas à prioriser si on peut les éviter. Il s'agit d'une mauvaise pratique de les utiliser lorsque ce n'est pas nécessaire.

- Le risque de changer la valeur accidentellement et de modifier le comportement d'autres bouts de codes qui en dépendent est grand. Risque d'effet de bord https://fr.wikipedia.org/wiki/Effet_de_bord_(informatique)#Exemple_d'un_programme_utilisant_un_effet_de_bord_en_C++ 
- Ça crée une dépendance envers cette variable qui est à la merci des modifications non-désirées.
- C'est difficile à débugger quand le programme grossit
- Vont à l'encontre d'un principe en programmation: l'encapsulation des traitements.


La meilleure pratique est d'utiliser des variables locales tant qu'on le peut et d'utiliser des variables globales si on n'a pas d'autres options. Les situation où on a besoin d'une variable globale sont, entre autres:

- Pour des valeurs **constantes** (tout le programme doit utiliser la même valeur)
- pour le partage de ressources (compteur commun ou multithreading)


## Exemple (utilisation d'une variable globale):

```cpp
#include <iostream>

// Déclaration d'une variable globale
int score = 0;

void incrementerScore() {
    score++;  // On modifie la variable globale
}

int main() {
    cout << "Score initial : " << score << endl;
    incrementerScore(); //appel à la fonction qui modifie
    cout << "Score après incrementation : " << score << endl;

    return 0;
}
```

## Exemple variable globale:

Disons qu'on veuille compter combien de fois, dans un programme, la lettre Z a été entrée:

```cpp
#include <iostream>
#include <limits>
using namespace std;

int nombreDeZ = 0; //variable GLOBALE

void demanderNom() {
    string nom; //variable locale qui existe seulement dans demanderNom()
    cout << "Entrez votre nom: ";
    getline(cin, nom);

    for (int i = 0; i < nom.size(); i++){
        if (nom[i] == 'z'){
            nombreDeZ++; //incrémentation de la variable globale
        }
    }
}
void demanderPrenom() {
    string prenom; //variable locale qui existe seulement dans demanderPrenom()
    cout << "Entrez votre prenom: ";
    getline(cin, prenom);

    for (int i = 0; i < prenom.size(); i++){
        if (prenom[i] == 'z'){
            nombreDeZ++; //incrémentation de la variable globale
        }
    }
}

int main() {

    char continuer; //variable locale qui existe seulement dans le main()
    do {

        demanderNom(); 
        demanderPrenom();

        cout << "Nombre de lettres z: " << nombreDeZ << endl;
        cout << "Voulez-vous continuer? (o ou n): ";
        cin >> continuer;
        cin.clear(); // enlever l'état d'erreur, utile si on entre du texte dans un int
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');


    } while (continuer == 'o' || continuer == 'O');


    return 0;
}

```

## En résumé
Dans le main, on peut accéder :
- aux variables locales du main
- aux constantes et variables globales

Dans une fonction, on peut accéder
- aux paramètres de la fonction
- aux constantes et variables globales

Il est déconseillé de définir des variables globales non constantes ou des compteurs dans de gros projets.

Les échanges entre les environnements se font :
- par les returns
- par les passages de paramètres (à voir très bientôt)

Si une variable locale a le même nom qu'une variable globale, c'est la variable locale qui sera utilisée. Si on veuchanger la priorité et la donner à la variable globale, il faut mettre l'opérateur de portée `::` devant la variable.