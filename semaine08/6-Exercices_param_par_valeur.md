# Exercices de fonctions avec paramètres (par valeur)

Document de référence pour les exercices: https://www.fresnel.fr/perso/stout/langage_C/Chap_7_Les%20fonctions.pdf 

## Question 1
Écrire une fonction distance ayant comme paramètres 4 doubles xa,ya et xb,yb qui représentent les coordonnées de deux points A et B et qui renvoie la distance AB. Tester cette fonction. Trouvez vous-même la formule de distance entre 2 points.

## Question 2
Écrire une fonction *estPremier* ayant en paramètre un entier et qui renvoie un booléen : true si l'entier est premier et false sinon. Tester cette fonction.

## Question 3
Écrire une fonction *nombrePremierN* ayant comme paramètre un entier *n* et qui renvoie le n-ième nombre premier : cette fonction utilisera la fonction de la question 2. Tester cette fonction.

## Question 4
Dans le fichier, avant le main(), 
- déclarez 3 constantes: le diamètre de la terre, le diamètre de Jupiter et le diamètre de mars.
- déclarez 3 constantes: le nom de la terre, le nom de Jupiter et le nom de mars.

Appeler les fonctions suivantes dans le main(). Il faut les définir d'abord.
- obtenirRayon( ) en passant le nom en paramètre et en retournant le rayon associé
- calculerVolume( ...) en utilisant la fonction calculée précédemment et en passant le nom en paramètre
- calculerAire( ...) en utilisant le rayon calculé précédemment comme argument (paramètre)


## Question 5
Corriger le code ci-dessous pour que le code soit fonctionnel. Trouvez l'erreur et expliquer ce qui ne fonctionne pas et pourquoi. 

a) 
```cpp
float somme(int nombre1, float nombre2) {
    float resultat = monNombre1 + monNombre2;
    return resultat;
}

int main() {

    int monNombre1 = 1;
    float monNombre2 = 4.0;
    cout << "La somme de " << monNombre1 << " et " << monNombre2 << " est: " << somme(monNombre1, monNombre2) << endl;
    
}
```

b) ici, pourquoi l'affichage du message de bienvenue ne se fait pas (même si les données entrées sont cohérentes)? 

```cpp
void afficherInformations(string nom, int age, char groupeSanguin) {
    cout << "Bonjour " << nom << endl;
    if(age < 18) {
        cout << "Vous êtes trop jeune pour le don de sang" << endl;
    }
    else {
        if (groupeSanguin == 'O') {
            cout << "Merci de venir donner, vous êtes un donneur universel" << endl;
        }
        else {
            cout << "Merci de venir donner!" << endl;
        }
    }
}

int main() {
    setlocale(LC_ALL, "");

    int agePatient;
    string nomPatient;
    char groupeSanguinPatient;

    cout << "Entrer le nom du patient: ";
    cin >> nomPatient;
    cout << endl;

    cout << "Entrer l'âge du patient: ";
    cin >> agePatient;
    cout << endl;

    cout << "Entrer le groupe sanguin du patient: ";
    cin >> groupeSanguinPatient;
    cout << endl;

}
```

c) ici quelle est l'erreur?

```cpp
void afficherInformations(string nom, int age, char groupeSanguin) {
    cout << "Bonjour " << nom << endl;
    if(age < 18) {
        cout << "Vous êtes trop jeune pour le don de sang" << endl;
    }
    else {
        if (groupeSanguin == 'O') {
            cout << "Merci de venir donner, vous êtes un donneur universel" << endl;
        }
        else {
            cout << "Merci de venir donner!" << endl;
        }
    }
}

int main() {
    setlocale(LC_ALL, "");

    int agePatient;
    string nomPatient;
    char groupeSanguinPatient;

    cout << "Entrer le nom du patient: ";
    cin >> nomPatient;
    cout << endl;

    cout << "Entrer l'âge du patient: ";
    cin >> agePatient;
    cout << endl;

    cout << "Entrer le groupe sanguin du patient: ";
    cin >> agePatient;
    cout << endl;

    afficherInformations(agePatient, nomPatient, groupeSanguinPatient);

}
```

d) Quelle est l'erreur ici?

```cpp
void afficherInformations(string nom, int age, char groupeSanguin) {
    cout << "Bonjour " << nom << endl;
    if(age < 18) {
        cout << "Vous êtes trop jeune pour le don de sang" << endl;
    }
    else {
        if (groupeSanguin == 'O') {
            cout << "Merci de venir donner, vous êtes un donneur universel" << endl;
        }
        else {
            cout << "Merci de venir donner!" << endl;
        }
    }
}

int main() {
    setlocale(LC_ALL, "");

    int agePatient;
    string nomPatient;
    char groupeSanguinPatient;

    cout << "Entrer le nom du patient: ";
    cin >> nomPatient;
    cout << endl;

    cout << "Entrer l'âge du patient: ";
    cin >> agePatient;
    cout << endl;

    cout << "Entrer le groupe sanguin du patient: ";
    cin >> agePatient;
    cout << endl;

    afficherInformations(agePatient, groupeSanguinPatient);

}

```

## Question 6

a) Est-ce qu'il y a une erreur dans le code ci-dessous?

```cpp
void afficherInformations(string nom = "John", int age = 0, char groupeSanguin = 'A') {
    cout << "Bonjour " << nom << endl;
    if(age < 18) {
        cout << "Vous êtes trop jeune pour le don de sang" << endl;
    }
    else {
        if (groupeSanguin == 'O') {
            cout << "Merci de venir donner, vous êtes un donneur universel" << endl;
        }
        else {
            cout << "Merci de venir donner!" << endl;
        }
    }
}

int main() {
    setlocale(LC_ALL, "");

    int agePatient;
    string nomPatient;
    char groupeSanguinPatient;

    cout << "Entrer le nom du patient: ";
    cin >> nomPatient;
    cout << endl;

    cout << "Entrer l'âge du patient: ";
    cin >> agePatient;
    cout << endl;

    cout << "Entrer le groupe sanguin du patient: ";
    cin >> agePatient;
    cout << endl;

    afficherInformations();

}

```

b) Dans le code-ci-haut, est-ce qu'on peut afficher/utiliser le nom de variable groupeSanguin dans le main? <br>
c) Dans le code ci-haut, est-ce qu'on peut afficher/utiliser le nom de variable groupeSanguinPatient dans le main?<br>
d) Dans le code ci-haut, est-ce qu'on peut afficher/utiliser le nom de variable groupeSanguinPatient dans la fonction afficherInformation?<br>
e) Dans le code ci-haut, est-ce qu'on peut afficher/utiliser le nom de variable groupeSanguin dans la fonction afficherInformation?<br>
f) dans le code ci-haut, que se passe-t-il si on fait l'appel de la fonction dans le main de cette façon:

```cpp
afficherInformation("Jordan", 22);
```

g) dans le code ci-haut, que se passe-t-il si on fait l'appel de la fonction dans le main de cette façon:

```cpp
afficherInformation("Jordan", 'A');
```

