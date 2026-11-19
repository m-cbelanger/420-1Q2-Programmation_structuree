# Exercice paramètre par référence

## Question 1
Écrire une fonction `faireEchange` ayant en paramètres 2 entiers a et b et qui échange les contenus de a et de b. Tester cette fonction. Faire cette fonction en utilisant des paramètres par référence.

## Question 2
Faire une fonction `mettreMajuscule` qui prend une chaîne de caractères et qui met chaque première lettre des mots en majuscule et le reste des lettres en minuscule. Faire cette fonction en utilisant un paramètre par référence.

## Question 3 
Le jeu du hasard contre l'ordi!

On souhaite créer un jeu qui vous fait piger au hasard un nombre entre 1 et n (je suggère de ne pas dépasser 5) et de comparer avec l'ordi. Si vous avez la même réponse, vous gagner 1 point. Sinon vous perdez 1 point. Si vous tombez en bas de 0, vous perdez la partie. Si vous atteignez le nombre de points choisi au début (par exemple 10 points pour la victoire), vous gagnez.

Pour y arriver, voici un guide: 
- dans la fonction jeu, c'est le départ du jeu. les variables nomJoueur, pointsJoueur, n (pour la limite du nombre tiré), numeroJoueur (pour le numéro pigé au hasard par le joueur) et pointsPourGagner s'y trouvent. (Les variables doivent obligatoirement être dans le jeu())

Voici le découpage des fonctions et des traitements. Pour chacune d'entre elles, utiliser le passage par référence ou par valeur, comprenez la différence entre les 2.
- Dans une fonction, demandez le nom du joueur qui sera modifié selon la réponse de l'utilisateur. 
- Dans une autre fonction, faire déterminer le nombre de points pour gagner.
- Affecter le nombre de points initiaux au joueur dans le jeu() selon le nombre de points pour gagner choisis. Ce nombre de points initiaux est le nombre de point pour gagner divisé par 2 (division entière).
- Faire une fonction qui fait choisir le numéro que le joueur veut comparer avec l'ordi. Combien de paramètres sont nécessaires?
- Faire une fonction qui pige le numéro de l'ordi de 1 à n.
- Faire une fonction qui déterminer si oui ou non le joueur est gagnant pour cette joute
- Faire une fonction qui ajoute un point au joueur si celui-ci à gagné et qui enlève un point au joueur s'il a perdu. La fonction doit s'assurer de ne pas dépasser le nombre de point pour gagner et de ne pas tomber sous 0.


Vous êtes libres des affichages, variables supplémentaires et découpage supplémentaires en fonctions. Vous pouvez modifier le jeu pour mettre des points à l'ordi si désiré. 


