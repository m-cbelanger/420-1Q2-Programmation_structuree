# Exercices tableaux

Faire chaque question dans une fonction qui ne retourne rien et qui ne prend rien en paramètre. Nommez la fonction avec le nom de la question. 

### Question 1

Déclarez un tableau de 10 entiers initialisé avec des valeurs de votre choix. Demandez à l’utilisateur d’entrer un nombre à chercher. Parcourez le tableau pour vérifier si ce nombre y est présent.
Affichez un message indiquant si le nombre a été trouvé ou non, et donnez l’indice (index) où il a été trouvé.

### Question 2
 
Inverser un tableau.
Déclarez un tableau de 6 entiers et initialisez-le avec des valeurs au choix. Affichez le tableau original. Inversez l’ordre des éléments dans le tableau. Affichez le tableau inversé. Est-ce que le code fonctionne pour des tableaux d'autres dimensions?

### Question 3

Déclarez un tableau de taille 100 et remplissez-le avec les 100 premiers nombres pairs. Affichez-le. Comment pourrait-on exclure 0 des nombres?

### Question 4

Initialiser un tableaux pour entrer les 6 notes des évaluations du cours de programmation structurée en demandant à l'utilisateur. Parcourez ensuite le tableau et calculez la moyenne pondérée d'un étudiant selon ses notes. Voici la pondération:

- TP1: 5%
- TP2: 7%
- TP3: 8%
- Examen1: 15%
- Examen2: 25%
- Examen3: 40%

Donc, si un étudiant obtient respectivement 68  90.5  89  78.5  81.25  80, on fera le calcul de la moyenne comme suit:


moyenne = 68 x 5/100 + 90.5 x 7/100 + 89 x 8/100 + 78.5 x 15/100 + 81.25 x 25/100 + 80 x 40/100


Afficher le résultat dans une phrase. 

### Question 5

Rotation des éléments dans le tableau. <br>
a) Déclarez un tableau d'entiers et initialisez-le avec des valeurs au choix. Choisissez le nombre de valeurs que vous mettez dedans.
Avec un algorithme (boucle), déplacez chaque élément du tableau d’une position vers la droite, en faisant en sorte que le dernier élément devienne le premier.
Affichez le tableau après rotation.

Par exemple, si la taille est 5 et que le tableau contient 1 2 3 4 5, alors tous les éléments doivent avancer d'une place et le dernier élément devient le premier.

```cpp
Le tableau original est : 1 2 3 4 5
Le tableau après rotation est : 5 1 2 3 4
```

b) Ajouter la possibilité de choisir le nombre de rotations à faire (défi)


### Question 6

Lancer de dés.

On souhait simuler le lancé de dés à 6 faces et compter le nombre de fois que le dé à tombé sur une face. On veut donc piger au sort un chiffre et compter le nombre de fois qu'on a obtenu la face 1,2,3,4,5 ou 6. On veut ensuite afficher le résultat. L'utilisateur a le choix du nombre de lancers de dés qu'il souhaite faire. Cet exercice doit être fait avec des tableaux!

```cpp
Voici un exemple de résultat pour 10 lancers d'un dé de 6 faces.

***************
*  RÉSULTATS  *
***************
*   1 :     2 *
*   2 :     0 *
*   3 :     1 *
*   4 :     0 *
*   5 :     4 *
*   6 :     3 *
***************

Voici un exemple de résultat pour 100 000 lancers d'un dé de 6 faces.

***************
*  RÉSULTATS  *
***************
*   1 : 16628 *
*   2 : 16719 *
*   3 : 16458 *
*   4 : 16752 *
*   5 : 16769 *
*   6 : 16674 *
***************
```

### Question 7

Faire la même chose qu'à la question 6 en permettant de modifier le nombre de faces à son dé. Vous devez modifier la taille dans une constante ou bien utiliser un vecteur ici.


# Exercices chaînes de caractères

### Question 8

Demandez une chaîne de caractères à l'usager et comptez le nombre de voyelles et de consonnes présentes. Affichez le résultat à la fin.

### Question 9

Demandez une chaîne de caractère à l'usager (une phrase) et compter le nombre de mots qu'elle contient (on simplifie en considérant que les mots sont séparés par des espaces seulement et donc que "j'aime" est un seul mot).

### Question 10 (vecteur seulement, facultatif)

Demandez une chaîne de caractères à l'usager (une phrase) et mettez chaque mot dans une nouvelle case de tableau. Par exemple: "J'aime la programmation" serait placé dans un tableau nommé motsSepares qui contiendrait 3 cases (on simplifie en considérant que les mots sont séparés par des espaces seulement et donc que "j'aime" est un seul mot).

indice: il faut d'abord connaître la taille du tableau pour l'initialiser! 