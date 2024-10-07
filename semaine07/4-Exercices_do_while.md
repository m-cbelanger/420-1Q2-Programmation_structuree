# Exercices do..while

Pour les exercices ci-dessous, 
- NE PAS utiliser de break. 
- NE PAS faire de return 0 pour terminer un if else ou une boucle


## Question 1

À l'aide de la boucle do..while, faire une mini-calculatrice à 2 nombres. Voici quelques étapes pour survoler la marche à suivre proposée:

- déclarer les variables ci-dessous: 
```cpp
char choix;
double num1, num2, resultat;
char continuer;
``` 
- Faites la boucle do..while dans laquelle on commence par présenter les options (voir image du texte à écrire, de "choisissez une opération à "entrer votre choix")

![q11](img/Q11.png)

- Ensuite, demandez d'entrer les 2 nombres. 

- Toujours dans la boucle do..while, faites la structure `switch` pour guider le choix de l'utilisateur vers le bon traitement. Ne pas oublier le message pour l'entrée d'un choix invalide.

-  Selon le cas dans lequel vous codez, faire le calcul avec les nombres reçus et mettre le résultat dans la variable resultat. Afficher ensuite le contenu de la variable résultat. 

- Toujours dans la boucle, après la structure de switch, demandez à l'utilisateur s'il veut recommencer. il doit entrer O pour oui ou N pour non.


Voici une image d'un des comportements attendus:

![q1](img/Q1.png)

- testez vos calculs. Ne pas oublier les cas limite! (positif, négatif, zéro...)

## Question 2

Faire les exercices 1 à 4 de la boucle `while`, mais en modifiant le code pour utiliser la boucle `do..while`.

## Question 3

Le tirage au sort! À l'aide de la boucle do..while, faites un programme qui demande un nombre à un usager, entre 0 et n, et qui dit à l'usager s'il a bien deviner le nombre aléatoire généré à chaque jeu.

Voici un exemple d'exécution:

![q2](img/Q2.png)

## Question 4 

Roche papier ciseau.

À l'aide de la boucle do..while, faite un programme qui joue à Roche, papier, ciseau. Trouvez une façon d'utiliser la fonction de nombre aléatoire pour associer un nombre à un mot.

Exemple d'exécution

![q3](img/Q3.png)

N'hésitez pas à le bonifier, à ajouter un "tableau du nombre de victoires" ou à afficher le choix aléatoire de l'ordinateur aussi!