# Exercices (struct)

Faire un fichier main() dans lequel vous appellerez chaque fonction selon sa question. (question1(), question2(), etc.)

## Question 1

Dans la zone globale, 

a) Déclarer une struct appelée Voiture dans laquelle on a les champs suivants:
- un string pour le constructeur
- un string pour le modèle
- un int pour l'année
- un float pour le prix au détail

Dans la fonction question1(),

b) Ensuite, créer une instance de Voiture et remplissez les champs avec les informations suivantes:
- Honda, accord, 2012, 10500
- Mitsubishi, lancer, 2015, 5905
- Porsche, 911 Carrera, 1984, 179000

c) Dans une variable, additionnez le prix des 3 voitures en allant chercher le champ de chacune. 

d) Afficher le modèle de la 2e voiture en utilisant le champ.

e) Ensuite, mettre les 3 Voitures dans un tableau.

f) Modifier le prix de la Porsche pour 189000 dollars pour que le changement soit effectif dans le tableau.

g) Dans une fonction nommer *afficher*, prendre un tableau de Voiture, le parcourir afficher chaque élément un en dessous de l'autre, avec un espace entre chaque voiture. Faire le code comme si le nombre de voiture était inconnu d'avance, que le tableau rempli est le seul outil que vous avez.

![voitures](img/voitures.png);


h) Faire une fonction *ajouterTaxes* qui prend une Voiture et qui retourne le prix de celle-ci, taxe incluse.

i) Faire une fonction *moyenne* qui prend un tableau de Voiture et qui retourne la moyenne de prix des voitures à l'intérieur.

j) Faire une fonction *inflation* qui prend un tableau de Voiture et qui applique le pourcentage d'inflation fourni à la fonction à tous les prix des voitures. Par exemple, si l'inflation est de 4%, on augmente chaque prix de 4% (faire *1.04)

k) Faire une fonction *afficherSelonAnnee* qui prend un tableau de struct et qui affiche seulement le constructeur et le modèle des voitures qui ont un prix en-dessous de la moyenne.

![voitures2](img/voitures2.png)