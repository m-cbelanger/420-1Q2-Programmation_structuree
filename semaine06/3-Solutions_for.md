# Solutions 

## Question 1

Copier le code et le faire rouler

## Question 2

Copier le code et le faire rouler

## Question 3
 
Plusieurs façons de faire. Voici les 2 façons montrées en classe:

```cpp

//factorielle
int nombre;
double reponse = 1; // Si on met un int, la plus grand nombre admissible est 16.
cout << "Entrez un nombre entier: ";
cin >> nombre;
for (int i = 1; i <= nombre;i++) {
    reponse = reponse * i;
}

cout << "Incrémentation:" << reponse <<endl;
reponse = 1; // réinitialiser la variable reponse à 1
for (int i = nombre; i>=1; i--) {
    reponse = reponse * i;
}

cout <<"Décrémentation:" << reponse;
reponse = 1; // réinitialiser la variable reponse à 1
for (int i = nombre - 1; i > 0; i--) {
    nombre = nombre * i;
}
```

## Question 4a) boucle simple

```cpp
int nombre;

cout << "Entrer un nombre entier: ";
cin >> nombre;
string ligne = "";

//triangle boucle simple (exemple)
cout << "triangle décroissant boucle simple" << endl; // pour garder une trace dans la console.
ligne = string(nombre, '*');
for (int i = 1; i <= nombre;i++) {
    cout << ligne << endl;
    ligne.pop_back();
}
```


## Question 4b) boucle simple

```cpp
cout << "triangle b) boucle simple" << endl;
for (int i = 1; i <= nombre; i++) {
    ligne = "";
    ligne += string(nombre-i, ' ');
    ligne += string(i*2-1, '*');
    cout << ligne << endl;
}
```

## Question 4b) boucles imbriquées

```cpp
cout << "triangle b) boucle imbriquée" << endl;

for (int i = 1; i <= nombre; i++) {
    for (int j = i; j < nombre; j++) {
        cout << " " ;
    }
    for (int k = 1; k <= (2 * i - 1); k++) {
        cout << "*";
    }
    cout<< endl;
}
```


## Question 4c) boucle simple

```cpp
ligne = "";
cout << "triangle c) boucle simple" << endl;
for (int i = 1; i <=nombre; i++) {
    ligne += to_string(i) + " ";
    cout << ligne << endl;
}
```

## Question 4c) boucles imbriquées

```cpp
cout << "triangle c) boucle imbriquée" << endl;
for (int i = 1; i <= nombre; i++) {
    for (int j = 1; j <= i; j++) {
        cout << j << " ";
    }
    cout << endl;
}
```

## Question 4d) boucle simple

```cpp
cout << "triangle d) boucle simple" << endl;
for (int i = nombre; i >= 1; i--) {
    ligne = string(i, char(i + '0'));
    cout << ligne << endl;
}
```

## Question 4d) boucles imbriquées

```cpp
cout << "triangle d) boucle imbriquée" << endl;
for (int i = nombre; i >=1; i--) {
	for (int j = 1; j <= i; j++) {
		cout << i;
	}
	cout << endl;
}
```

## Question 4e) boucle au choix

```cpp
cout << "triangle e) boucle imbriquée" << endl;
// Pyramide ascendante
for (int i = 1; i <= nombre; i++) {
    for (int j = i; j < nombre; j++) {
        cout << " ";
    }
    for (int k = 1; k <= (2 * i - 1); k++) {
        cout << "*";
    }
    cout << endl;
}

// Pyramide descendante
for (int i = nombre - 1; i >= 1; i--) {
    for (int j = nombre; j > i; j--) {
        cout << " ";
    }
    for (int k = 1; k <= (2 * i - 1); k++) {
        cout << "*";
    }
    cout << endl;
}
```
