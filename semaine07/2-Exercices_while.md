# Exercices while

Pour les exercices ci-dessous, 
- NE PAS utiliser de break. 
- NE PAS faire de return 0 pour terminer un if else ou une boucle


## Question 1

a) Faire le code suivant:
Dans une boucle while, demandez 3 nombres. À chaque nombre, afficher si le nombre est plus petit, égal ou plus grand que 100. La boucle ne doit pas demander plus de 3 nombres, un à la fois.

b) Prendre le code de la question a) et bonifiez-la: Ajouter la somme des 3 nombres dans l'affichage.

c) Prendre le code de la question b) et ajouter la moyenne des nombre au fur et à mesure qu'on en ajoute. Chercher une solution pour que la moyenne soit exacte, c'est-à-dire qu'elle affiche les décimales. (Google est votre ami)

## Question 2

Faire un code qui, dans une boucle while, valide si un nombre entré par un utilisateur est entre 1 et 10 inclusivement. Redemander à nouveau si le nombre n'est pas entre 1 et 10. Le message initial doit être "entrer un nombre entre 1 et 10" et le message subséquent s'il se trompe, doit être "Erreur! Essayez de nouveau, entrez un nombre entre 1 et 10:


## Question 3

Faire un code qui demande a l'utilisateur d'entrer une lettre de A à Z. Si la lettre est une voyelle (A, E, I, O, U, Y), l'entrée est valide, dites-lui que c'est valide. S'il n'entre pas une lettre valide, redemandez-lui une lettre.
 
> Pour gérer la possibilité que l'utilisateur entre une lettre minuscule, utilisez la fonction to upper:

```cpp
// exemple d'utilisation de toupper
char lettre = 'a';
lettre = toupper(lettre); //lettre sera maintenant 'A'
```

## Question 4

Trouver le premier de la liste alphabétique! 
Faire le programme qui demande des prénoms. Utilisez la boucle while pour y arriver.
- Pour arrêter d'entrer des prénoms, on écrit "fin". 
- À chaque nouveau prénom, on vérifie si oui ou non, le nom est le premier de la liste alphabétique. 
- On affiche toujours le prénom qui est en premier dans la liste après chaque nouvelle entrée

> Note: Il est possible de comparer des chaîne de caractères avec les opérateurs <, >, <=, >=. Exemple de comparaison:

"aaa" < "aba" est vrai

Les caractères sont comparés 1 par 1 à partir de la gauche.
- "a" == "a"
- "a" < "b" à cause de leur numéro dans la table ASCII

Donc "aaa" < "aba"


## Question 5

Laquelle ou lesquelles de ces boucles est **assurément** une boucle infinie? **Pourquoi**? 

```cpp
int compteur = 0;
while (compteur >= 0) {
	cout << "continuer";
	compteur++;
}

compteur = 10;
while (compteur >= 0) {
	cout << "continuer";
	compteur--;
}

int somme = 0;
int chiffre = 10;
while (chiffre == 11) {
	cout << "bon matin!";
	somme = somme + chiffre;
}

string nom = "Jane";
compteur = 0;
while (nom != "fin") {
	for (int i = 1; i <= 6; i++) {
		compteur++;
	}
}

nom = "Marc";
while (nom != "fin") {
	for (int i = 1; i < 6; i--) {
		compteur++;
	}
	cout << "Entrer un autre nom: ";
	cin >> nom;
}

char choix; 
cout << "Faire un choix: ";
cin >> choix;
while (choix != 'D') {
	cout << "Mauvais choix, refaire un choix: ";
	cin >> choix;
}
```
