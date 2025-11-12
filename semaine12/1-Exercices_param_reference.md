# Exercice paramètre par référence

## Question 1
Écrire une fonction `echange` ayant en paramètres 2 entiers a et b et qui échange les contenus de a et de b. Tester cette fonction.


## Question 2 
Le jeu du hasard contre l'ordi!

On souhaite créer un jeu qui vous fait piger au hasard un nombre entre 1 et n (je suggère de ne pas dépasser 5) et de comparer avec l'ordi. Si vous avez la même réponse, vous gagner 1 point. Sinon vous perdez 1 point. Si vous tombez en bas de 0, vous perdez la partie. Si vous atteignez le nombre de points choisi au début (par exemple 10 points pour la victoire), vous gagnez.

Pour y arriver, voici un guide: 
- dans le main, c'est le départ du jeu. les variables nomJoueur, pointsJoueur, n (pour la limite du nombre tiré), numeroJoueur (pour le numéro pigé au hasard par le joueur) et pointsPourGagner s'y trouvent. (Les variables doivent obligatoirement être dans le main())

Voici le découpage des fonctions et des traitements. Pour chacune d'entre elles, utiliser le passage par référence ou par valeur, comprenez la différence entre les 2.
- Dans une fonction, demandez le nom du joueur qui sera modifié selon la réponse de l'utilisateur. 
- Dans une autre fonction, faire déterminer le nombre de points pour gagner au joueur. 
- Affecter le nombre de points initiaux dans le main() selon le nombre d'essais choisis. Ce nombre de points initiaux est le nombre d'essais divisé par 2 (division entière).
- Faire une fonction qui fait choisir le numéro que le joueur veut comparer avec l'ordi. Combien de paramètres sont nécessaires?
- Faire une fonction qui pige le numéro de l'ordi de 1 à n.
- Faire une fonction qui déterminer si oui ou non le joueur est gagnant pour cette joute
- Faire une fonction qui ajoute un point au joueur si celui-ci à gagné. La fonction doit s'assurer de ne pas dépasser le nombre de point pour gagner.
- Faire une fonction qui enlève un point au joueur s'il a perdu. Si ce retranchement de points le fait passer à un nombre de points négatif, le joueur perd.

Assurez-vous de pouvoir jouer plusieurs parties jusqu'à ce que le joueur gagne ou perde ou entre une valeur pour arrêter le jeu prématurément.

Vous êtes libres des affichages, découpage supplémentaires en fonctions. Vous pouvez modifier le jeu pour mettre des points à l'ordi si désiré. 


