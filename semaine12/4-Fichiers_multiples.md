# Projets aux fichiers multiples

Quand un programme devient de plus en plus long, il devient difficile de tout mettre dans un seul .cpp.

Pour faciliter la lisibilité et l'accessibilité, on sépare :

- le code (implémentation) dans des fichiers .cpp
- les déclarations (signatures, constantes, etc.) dans des fichiers .h

Cela rend le projet plus organisé, plus facile à maintenir, et permet la réutilisation du code.

## Rôle du fichier .h (header file)

Le fichier .h sert à déclarer :

- les signatures de fonctions
- les struct (on les voit la semaine prochaine)
- les constantes #define ou const
- les variables globales externes (si nécessaires)

Ex : fonction.h dans nos projets personnalisés

```cpp
// dans fonction.h
#pragma once  // évite les inclusions multiples

// signatures (annonce des fonctions qui seront disponibles)
int addition(int a, int b); 
int soustraction(int a, int b);
int multiplication(int a, int b);
int divisionEntiere(int a, int b);
```

Ici ce sont des signatures de fonctions
→ ce ne sont PAS les fonctions complètes… juste ce que le compilateur doit savoir.

## Rôle des fichiers .cpp

Le fichier (ou les multiples fichiers) .cpp implémente réellement les fonctions déclarées dans le .h.

```cpp
// dans un fichier fonction.cpp
#include "fonction.h"

int addition(int a, int b) {
    return a + b;
}

int soustraction(int a, int b) {
    return a - b;
}

int multiplication(int a, int b) {
    return a * b;
}

int divisionEntiere(int a, int b) {
    return a / b;
}

```

## Rôle du main.cpp

C’est le fichier qui utilise les fonctions.

```cpp
// main.cpp
#include <iostream>
#include "fonction.h"
using namespace std;

int main() {
    int resultat = addition(5, 3);
    cout << resultat << endl;
    return 0;
}
```

## Résumé

| Fichier  | Contenu                                  | Exemple                                    |
| -------- | ---------------------------------------- | ------------------------------------------ |
| `.h`     | déclarations (signatures)                | `int addition(int a,int b);`               |
| `.cpp`   | définitions (code complet des fonctions) | `int addition(int a,int b){ return a+b; }` |
| main.cpp | utilise ces fonctions                    | `addition(5,3);`                           |


## Pourquoi mettre les signatures dans un .h ?

Parce que quand on inclus le .h, le compilateur sait quelles fonctions existent avant d’arriver au moment de les appeler.
En mettant les fonctions dans des fichiers .cpp séparés, on permet une meilleure segmentation des fonctions à implémenter.

## Exercice

Faisons un projet à 3 fichiers. Un fichier main.cpp, un autre math.cpp et un dernier fonction.h

On implémente les fonctions pour calculer la distance entre 2 coordonnées de points et la pente entre ces 2 points.
