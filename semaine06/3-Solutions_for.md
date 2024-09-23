# Solutions (Validation de condition)

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

## Question 4b) boucles imbriquées


## Question 4c) boucle simple

## Question 4c) boucles imbriquées

## Question 4d) boucle simple

## Question 4d) boucles imbriquées

## Question 4e) boucle au choix

