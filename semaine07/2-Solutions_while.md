# Solutions 

## Question 1

```cpp
int nombre;
int compteur = 1;
int somme = 0;
float moyenne = 0;

while (compteur <= 3) {
    
    cout << "Entrer un nombre entier: ";
    cin >> nombre;

    
    somme = somme + nombre;

    if (nombre < 100) {
        cout << "Le nombre est inférieur à 100" << endl;
    }
    else if (nombre == 100) {
        cout << "Le nombre est égal à 100" << endl;
    }
    else {
        cout << "Le nombre est supérieur à 100" << endl;
    }
    cout << "La somme actuelle est: " << somme<<endl;
    moyenne = somme / static_cast<float>(compteur);
    cout << "La moyenne actuelle est: " << moyenne << endl;
    compteur++;
}
cout << "La somme finale est: " << somme;

```

## Question 2

```cpp
cout << "Entrez un nombre entre 1 et 10" << endl;
cin >> nombre;

while (nombre < 1 || nombre >10) {
    cout << "Erreur! Entrez un nombre entre 1 et 10" << endl;
    cin >> nombre;
}
cout << "bravo" << endl;
```

## Question 3

```cpp
char lettre;
cout << "Entrez une lettre de A à Z" << endl;
cin >> lettre;
lettre = toupper(lettre);
while (lettre != 'A' && lettre != 'E' && lettre != 'I' && lettre != 'O' && lettre != 'U' && lettre != 'Y') {
    cout << "Ce n'est pas la lettre qu'on cherche! Entrez une lettre de A à Z" << endl;
    cin >> lettre;
}
cout << "Entrée valide! Merci!" << endl;
```

## Question 4

```cpp
string prenom;
cout << "Entrez un prénom. Écrire fin pour arrêter: ";
cin >> prenom;
string premierListe = prenom;


while (prenom != "fin"){
    if (prenom <= premierListe) {
        premierListe = prenom;
    }
    cout << "Le premier de la liste est " << premierListe << endl;
    cout << "Entrez un prénom. Écrire fin pour arrêter: ";
    cin >> prenom;
}
```


## Question 5

Les boucles infinies sont:

```cpp

// compteur augment toujours et sera toujours >= 0
int compteur = 0;
while (compteur >= 0) {
	cout << "continuer";
	compteur++;
}


// On ne change jamais la variable de la boucle externe, et nom != "fin" est vrai toujours.
string nom = "Jane";
compteur = 0;
while (nom != "fin") {
	for (int i = 1; i <= 6; i++) {
		compteur++;
	}
}


// La boucle interne est infinie. On débute i à 1 et on le décrémente toujours. Il sera toujours <6
nom = "Marc";
while (nom != "fin") {
	for (int i = 1; i < 6; i--) {
		compteur++;
	}
	cout << "Entrer un autre nom: ";
	cin >> nom;
}

```