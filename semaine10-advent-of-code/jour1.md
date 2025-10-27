
Advent of code 2024 jour 1: https://adventofcode.com/2024/day/1 


--- Jour 1 : L’hystérie des historiens ---

Le Chef historien est toujours présent pour le grand lancement du traîneau de Noël, mais personne ne l’a vu depuis des mois !
La dernière fois qu’on a eu de ses nouvelles, il visitait des endroits historiquement importants du Pôle Nord.
Un groupe d’historiens principaux vous a demandé de les accompagner afin de vérifier les lieux où il aurait le plus probablement pu se rendre.

À mesure qu’ils inspectent chaque lieu, ils le marquent d’une étoile sur leur liste.
Ils pensent que le Chef historien doit se trouver dans l’un des cinquante premiers endroits qu’ils visiteront.
Pour sauver Noël, vous devez donc les aider à obtenir cinquante étoiles sur leur liste avant le décollage du Père Noël le 25 décembre.

Vous gagnez des étoiles en résolvant des casse-têtes.
Deux casse-têtes seront disponibles chaque jour dans le calendrier de l’Avent; le second sera débloqué une fois le premier complété.
Chaque casse-tête rapporte une étoile. Bonne chance !


Vous n’êtes même pas encore parti que le groupe d’historiens elfes chevronnés rencontre déjà un problème :
leur liste de lieux à vérifier est vide !

Finalement, quelqu’un propose que le premier endroit à examiner soit tout simplement le bureau du Chef historien.

En entrant dans le bureau, tout le monde constate que le Chef historien est effectivement introuvable.
À la place, les elfes découvrent un tas de notes et de listes d’endroits historiquement importants !
Cela semble correspondre à la planification que le Chef historien faisait avant son départ.
Peut-être que ces notes peuvent aider à déterminer quels lieux fouiller ?


__________________________________________________________________________________________________________



Partout dans le bureau du Chef, les emplacements historiques importants ne sont pas identifiés par leur nom, mais par un numéro unique appelé identifiant de lieu (location ID).
Pour s’assurer de ne rien oublier, les Historiens se sont divisés en deux groupes : chacun explore le bureau et tente de dresser sa propre liste complète des identifiants de lieu.

Mais un problème se pose : en comparant côte à côte les deux listes (votre entrée du casse-tête), on se rend vite compte qu’elles ne se ressemblent pas beaucoup. Peut-être pouvez-vous aider les Historiens à concilier leurs listes ?

Par exemple :

3   4 </br>
4   3 </br>
2   5 </br>
1   3 </br>
3   9 </br>
3   3 </br>


Peut-être que les listes ne diffèrent que légèrement ! Pour le vérifier, il suffit d’associer les nombres et de mesurer leur écart.
Associez le plus petit nombre de la liste de gauche avec le plus petit nombre de la liste de droite, puis le deuxième plus petit à gauche avec le deuxième plus petit à droite, et ainsi de suite.

Dans chaque paire, déterminez l’écart entre les deux nombres; il faudra ensuite additionner tous ces écarts.
Par exemple, si vous associez un 3 (à gauche) avec un 7 (à droite), l’écart est de 4; si vous associez un 9 avec un 3, l’écart est de 6.

Dans la liste d’exemple ci-dessus, les paires et leurs écarts seraient les suivants :

- Le plus petit nombre à gauche est 1, et le plus petit nombre à droite est 3 → écart de 2

- Le deuxième plus petit nombre à gauche est 2, et le deuxième plus petit à droite est 3 → écart de 1

- Le troisième plus petit nombre dans les deux listes est 3 → écart de 0

- Les nombres suivants à associer sont 3 et 4 → écart de 1

- Le cinquième plus petit nombre à gauche est 3, et à droite 5 → écart de 2

- Enfin, le plus grand nombre à gauche est 4, et à droite 9 → écart de 5

Pour trouver la distance totale entre la liste de gauche et celle de droite, additionnez tous les écarts obtenus :
2 + 1 + 0 + 1 + 2 + 5 = 11

Vos véritables listes de gauche et de droite contiennent de nombreux identifiants de lieu.
Quelle est la distance totale entre vos deux listes ?


**La réponse à ce problème est un chiffre entier. Vient confirmer que tu as le bon chiffre auprès de moi!**


------- partie 2 ----------------


Ton analyse n’a fait que confirmer ce que tout le monde craignait : les deux listes d’identifiants de lieux sont bel et bien très différentes.

Ou le sont-elles vraiment ?

Les historiens ne s’entendent pas sur le groupe qui aurait fait les erreurs, ni sur la façon d’interpréter la majorité de l’écriture du Chef. Mais, au milieu de toute cette confusion, tu remarques un détail intéressant : plusieurs identifiants de lieux apparaissent dans les deux listes ! Peut-être que les autres nombres ne sont pas des identifiants de lieux, mais simplement des erreurs de lecture.

Cette fois, tu dois déterminer combien de fois chaque nombre de la liste de gauche apparaît dans la liste de droite.
Calcule ensuite un score de similarité total en additionnant chaque nombre de la liste de gauche multiplié par le nombre de fois qu’il apparaît dans la liste de droite.

Voici les mêmes listes d’exemple :

3   4
4   3
2   5
1   3
3   9
3   3


Voici le processus pour calculer le score de similarité :

- Le premier nombre de la liste de gauche est 3. Il apparaît trois fois dans la liste de droite, donc le score augmente de 3 × 3 = 9.

- Le deuxième nombre est 4. Il apparaît une fois dans la liste de droite, donc le score augmente de 4 × 1 = 4.

- Le troisième nombre est 2. Il n’apparaît pas dans la liste de droite, donc le score n’augmente pas (2 × 0 = 0).

- Le quatrième nombre, 1, n’apparaît pas non plus dans la liste de droite.

- Le cinquième nombre, 3, apparaît trois fois dans la liste de droite ; le score augmente donc de 9.

- Le dernier nombre, 3, apparaît encore trois fois dans la liste de droite ; le score augmente encore de 9.

Ainsi, pour ces listes d’exemple, le score de similarité final est 31 (9 + 4 + 0 + 0 + 9 + 9).

À nouveau, considère tes deux listes (celle de gauche et celle de droite).
Quel est leur score de similarité ?