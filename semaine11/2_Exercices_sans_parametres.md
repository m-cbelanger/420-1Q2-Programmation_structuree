# Exercices fonctions sans paramètres


## Question 1

Le questionnaire. On souhaite faire remplir un formulaire à un utilisateur. Vous devez trouver des noms significatifs à vos fonctions s'il n'y en a pas d'imposé. Vous pouvez optimiser pour éviter de répéter du code.

- Dans le main(), appeler une fonction nommée formulaire() dont le contenu sera défini dans les étapes suivantes. Cette fonction n'a pas de retour.

- Dans la fonction formulaire(), on appellera plusieurs autres fonctions:

1. Une fonction qui demandera à l'utilisateur de donner son prénom. Cette fonction fera:
    - la demande à l'utilisateur
    - la vérification que la réponse contient:
        - minimalement 2 caractères
        - peut contenir des lettres, des espaces, des traits d'union ou des apostrophes.
        - Ne peut pas contenir de chiffres
    - la demande tant et aussi longtemps que le prénom ne respecte pas les critères ci-haut
    - le retour du prénom.

Note: pour permettre d'entrer des noms avec des espaces, utilisez getline() en mettant un include <string> au tout début du fichier.

```cpp
#include <string>
...
string nomVariable;
getline(cin, nomVariable);
```

2. Une fonction qui demandera à l'utilisateur de donner son nom de famille. Cette fonction fera:    
    - la demande à l'utilisateur
    - la vérification que la réponse contient:
        - minimalement 2 caractères
        - peut contenir des lettres, des espaces, des traits d'union ou des apostrophes.
        - Ne peut pas contenir de chiffres
    - la demande tant et aussi longtemps que le prénom ne respecte pas les critères ci-haut
    - le retour du nom de famille.
  
> Est-ce qu'on aurait pu reprendre la même fonction qu'à l'étape 1?


3. Une fonction qui demandera à l'utilisateur de donner son âge. Cette fonction fera:
    - la demande l'âge à l'utilisateur
    - s'assure que l'âge est un nombre plausible (entre 0 et 120 inclusivement)
    - retourne l'âge

4. Une fonction qui demandera le groupe sanguin
    - demander la lettre du groupe suivi du rhésus. 
    - Vérifier si la lettre est valide (A, B ou O seulement, c'est un défi supplémentaire de vérifier AB, amusez-vous!) et redemander une nouvelle entrée au besoin.
    - vérifier si le rhésus est valide (+ ou -) et redemander au besoin.
    - Retourner le groupe sanguin complet avec une lettre majuscule (A- par exemple). 
    - Penser à gérer les minuscules!
    - Pour convertir un char en string, on peut utiliser la fonction string(1, caractere), où 1 est la longueur du caractère et caractere est la variable qu'on veut convertir.
    


> Pour aller plus loin: mettre la première lettre d'un prénom ou d'un 2e prénom en majuscule et le reste en minuscule. Par exemple, Marie-christine deviendrait Marie-Christine, anna maria deviendrait Anna Maria.

Ensuite, la fonction formulaire() appelle ces 4 fonctions, stocke le résultat de chacune dans des variables et affiche une phrase complète avec les 4 informations.