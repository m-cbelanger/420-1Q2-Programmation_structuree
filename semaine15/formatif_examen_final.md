# Formatif (pratique pour examen final)


# L'inventaire

Inventez un type de variable T_Article qui contient l'ID d'un produit (un code numérique qui vaut -1 par défaut), le nom du produit, sa quantité restante et son prix unitaire. Vous devez choisir le type de ces champs judicieusement.

Faire les fonctions suivantes:

- Faire une fonction pour afficher les articles, peu importe la taille du tableau d'article. Les articles doivent afficher toutes les informations avec un peut de texte comme ceci (exemple):<br>
**********************<br>
Liste d'articles:<br>
1 télévision, 567.56$, il en reste 5 en inventaire <br>
2 micro-onde, 123,54$, il en reste 1 en inventaire <br>
3 tablette, 459.99$, il en reste 0 en inventaire<br>
... <br>
**********************<br>

Attention de ne pas afficher des articles vides!

- Faire une fonction creerArticle, qui ne prend rien en paramètre et qui retourne un article. Assurez-vous que l'utilisateur entre un prix plus grand que 0, un nom non-vide et une quantité plus grande ou égale à 0. Question supplémentaire: vérifier que le numéro ID n'existe pas déjà.

- Ajouter un article au tableau s'il reste de la place dans le tableau. Faire une fonction ajouterArticle qui vérifie s'il reste de la place dans le tableau et y ajoute un article si oui, à la première case non-remplie. 

- Faire une fonction calculerValeurStock qui prend un tableau d'articles en paramètres et retourne le total d'argent possédé en inventaire. Pour calculer cela, on multiplie le montant unitaire par le nombre en inventaire.

- Faire la fonction rechercherArticle, qui prend un tableau d'articles en paramètres ainsi qu'un mot et qui cherche si ce mot fait partie des articles. La fonction retourne le nombre de cet article en inventaire (0 si on ne l'a pas trouvé).

- Faire à nouveau la fonction rechercherArticle, qui prend cette fois-ci un tableau et un numéro d'article (ID). Le comportement de la fonction est le même que la fonction précédente, en cherchant par ID plutôt que nom.

- Faire la fonction vendreArticle, qui prend un tableau d'articles, un nom et une quantité en paramètre. Ensuite, la quantité de l'article vendu doit être modifiée. Si la quantité présente est insuffisante, la fonction retourne false. Si elle est suffisante, on modifie l'article et on retourne true.

- Faire la fonction creerRapport, qui prend un tableau et qui imprime un rapport de l'inventaire dans un fichier externe nommé inventaire.txt. Le visuel dans le fichier txt devrait ressembler à celui de la fonction afficherArticles. On remplace le contenu du fichier à chaque fois.

- Faire un fichier texte articles.txt qui contient des articles séparés par des espaces comme ceci:

```
15 grille-pain 4 76.34
16 casque_ecoute 10 89.67
17 mandoline 12 13.76
18 divan_cuir_sectionnel 2 1902.22
```

ensuite faire une fonction qui lit ce fichier et crée une struct avec chaque ligne. À chaque ligne, l'article doit être ajouté dans le tableau sans écraser le contenu précédent. NE PAS utiliser push_back et les vecteurs ici, faire la réflexion pour manipuler les tableaux et trouver une solution.

Quand ces fonctions seront implémentées, faire une fonction inventaire() qui ne prend pas de paramètres et qui ne retourne rien. Ce sera votre endroit pour appeler les autres fonctions et faire plusieurs tests. Ces tests vous permettront de vérifier que la fonction fait ce qu'elle doit faire, lors d'une bonne et aussi d'une mauvaise utilisation. N'oubliez-pas d'appeler inventaire() du main().

- Faire un tableau de 10 articles nommé inventaire, dans lequel vous devez mettre au moins 3 articles initialement. Testez les fonctions créées ensuite.
