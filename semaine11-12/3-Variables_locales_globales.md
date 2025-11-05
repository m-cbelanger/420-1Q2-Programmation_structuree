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

## Exemple concret variable globale:

Disons qu'on veuille compter combien de fois, dans un programme, la lettre Z a été entrée:

```cpp
#include <iostream>
#include <string>   // pour utiliser getline
using namespace std;

int nombreDeMotsAvecZ = 0; //variable GLOBALE

void demanderNom() {
    string nom; //variable locale qui existe seulement dans demanderNom()
    cout << "Entrez votre nom: "; 
    getline(cin, nom);

    if (nom.find('Z') != string::npos  || nom.find('z') != string::npos) { //voir note 1
        nombreDeMotsAvecZ++;
    }
} 
void demanderPrenom() {
    string prenom; //variable locale qui existe seulement dans demanderPrenom()
    cout << "Entrez votre prenom: ";
    getline(cin, prenom);

    if (prenom.find('Z') != string::npos || prenom.find('z') != string::npos) { //voir note 1
        nombreDeMotsAvecZ++;
    }
}

int main() {

    char continuer; //variable locale qui existe seulement dans le main()
    do {
        demanderNom(); 
        demanderPrenom();
        
        cout << "Nombre de mots avec au moins la lettre z: " << nombreDeMotsAvecZ << endl;
        cout << "Voulez-vous continuer? (o ou n): ";
        cin >> continuer;
        cin.ignore(); //voir note 2

    } while (continuer == 'o' || continuer == 'O');


    return 0;
}
```

> **Note 1**: À titre indicatif, la fonction prenom.find() renvoie la position (chiffre de 0 à ...) de la première lettre trouvée dans la chaîne de caractères. Si la lettre recherchée n'est pas trouvée, il renverra string::npos (une constante statique définie dans std::string). Par exemple, si le prenom contient la valeur "Enzo", prenom.find('z') renverra 2, qui est différent de string::npos. En résumé, cette condition veut dire: si la variable contient la lettre 'z' ou la lettre 'Z'.

> **Note 2**: lorsqu'on fait la lecture de divers types de données dans le même programme (ici string et char), on se retrouve avec un caractère de nouvelle ligne (\n) qui reste dans le buffer après une entrée de char ('o' ou 'n'). Cela fait en sorte que lors du getline, le buffer contient le caractère '\n' et ne prendra pas de nouvelle entrée. Pour éviter ce problème, on met cin.ignore entre les entrées de type char et une entrée de type getline. Ici, on en a besoin d'un seul

## En résumé
Dans le main, on peut accéder :
- aux variables locales du main
- aux constantes globales

Dans une fonction, on peut accéder
- aux paramètres de la fonction
- aux constantes globales

Il est déconseillé de définir des variables globales non constantes ou des compteurs.

Les échanges entre les environnements se font :
- par les returns
- par les passages de paramètres par référence (à voir très bientôt)

Si une variable locale a le même nom qu'une variable globale, c'est la variable locale qui sera utilisée. Si on veut faire référence à la variable globale, il faut mettre l'opérateur de portée `::` devant la variable.