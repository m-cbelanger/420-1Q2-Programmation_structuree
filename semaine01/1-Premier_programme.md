# Écriture du premier programme

Il faut que l'installation de Visual Studio 2022 soit complétée ou bien que vous utilisiez les ordinaturs de l'école.

# Étapes à suivre (programme Hello World)

1. Ouvrir Visual Studio.

2. Créer un nouveau projet qu'on appellera Hello_World <br><br>
    - Fichier, nouveau:
![nouveau projet](img\nouv_projet.png)
<br><br>
    - Choisir un projet vide:
![nouveau projet2](img\nouv_projet2.png)
    - Appuyer sur Suivant
<br><br>
    - Nommer le projet:
![nouveau projet3](img\nouv_projet3.png)

    - Appuyer sur Créer

<br><br>
3. Créer un fichier source dans lequel on va écrire le code
<br><br>
- Nouvel élément en faisant clic droit, Ajouter, Nouvel élément
![fichier source](img\fichier_source.png)
- Lui donner un nom. Ici, HelloWorld.cpp


<br><br>
4. Écrire du code

Le code s'écrit dans la fenêtre vide quand on choisit l'onglet de notre fichier source: 
![zone_code](img\ecrire_code.png)

Écrire le code ci-dessous dans la zone d'écriture:
```cpp
#include <iostream>
using namespace std;
int main(){
    cout <<"Salut le monde!";
    return 0;
}
```
- Portez attention aux symboles utilisés! Un guillemet double n'est pas équivalent à un apostrophe ni à un guillemet 'back-tick (`)'.
- Pour connaître l'emplacement de vos touches de clavier, chercher "clavier visuel" dans le menu démarrer de Windows.


![Clavier visuel](img\clavier_visuel1.png)
<br><br>
On peut voir les guillemets double en gris pâle, cela signifie qu'on doit peser sur Maj (shift) pour y accéder. 
![Clavier visuel2](img\clavier_visuel2.png)

