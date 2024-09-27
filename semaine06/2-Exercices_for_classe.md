# Question 1

Faire le code pour poser 10 fois la question à un utilisateur d'entrer un nombre entre 1 et 100. Compter le nombre de fois où le nombre entré est entre 20 et 60 inclusivement. Afficher le résultat entier et afficher le résultat en %.

### Solution:

```cpp
	int nombre = 0;
	int compteur = 0;
	for (int i = 1; i <= 10; i++) {
		cout << "entrer un nombre entre 1 et 100: ";
		cin >> nombre;
		if (nombre >= 20 && nombre <= 60) {
			compteur = compteur + 1;
		}
	}
	cout << endl;
	cout << "L'utilisateur a choisi " << compteur << " fois un nombre entre 20 et 60" << endl;
	float pourcentage = compteur / 10.0 * 100;
	cout << "Cela correspond à " << pourcentage << "%"<<endl;
```

# Question 2

Écrivez un programme qui boucle sur tous les nombres de 1 à 50. Si le nombre est divisible par 5, affichez "FIZZ". Si le nombre se divise par 3, affichez "BUZZ". Si le nombre est divisible par 3 et 5, écrire "FIZZBUZZ". Sinon, écrire le nombre. Mettre les résultats un par dessus l'autre.

## Solution:

```cpp
for (int i = 1; i <= 50; i++) {
    if (i % 5 == 0 && i % 3 ==0) {
        cout << "FIZZBUZZ"<<endl;
    }
    else if (i % 5 == 0) {
        cout << "BUZZ" << endl;
    }
    else if (i % 3 == 0) {
        cout << "FIZZ" << endl;
    }
    else {
        cout << i << endl;
    }
}
```

# Question 3

Faire une boucle qui additionne tous les nombre de 1 à n, n étant choisi par l'utilisateur. Afficher le résultat final. Par exemple, si l'utilisateur entre 9, on calcule 1+2+3+4+5+6+7+8+9.

### Solution:

```cpp
int nombre = 0;
cout << "entrer un nombre: ";
cin >> nombre;
int somme = 0;
for (int i = 1; i <= nombre; i++) {
    somme = somme + i;
}
cout << "La somme donne " << somme;
cout << endl;
```


# Question 4 (défi)

La suite de Fibonacci: >La suite de Fibonacci est définie comme suit: en débutant par les nombres 0 et 1, chaque nouveau nombre est défini comme la somme des deux précédents. Les 7 premiers termes sont donc 0, 1, 1, 2, 3, 5, 8. Écrire un programme qui imprime les 30 premiers nombres de la suite sur la même ligne avec une virgule entre chaque.


### Solution:

```cpp
int a = 0;
int b = 1;
cout << a << ", " << b << ", ";
for (int i = 1; i <= 28; i++) {
    cout << a + b << ", ";
    int temp = a;
    a = b;
    b = temp + b;
}
```