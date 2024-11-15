# Solutions

Pour éviter la répétition, je me suis fait une fonction d'affichage pour afficher n'importe quel tableau:
```cpp
void afficher(int tab[], int taille) {
    for (int i = 0; i < taille; i++) {
        cout << tab[i] << " ";
    }
}
```

### Question 1

```cpp
void question1() {
    //Les nombres peuvent être autre chose
    int tableauNombres[10] = { 3,5,7,6,7,1,0,9,9,9 };
    int nombre;
    int taille = size(tableauNombres);
    cout << "Quel nombre voulez-vous chercher?" << endl;
    cin >> nombre;
    for (int i = 0; i < taille; i++) {
        if (tableauNombres[i] == nombre) {
            cout << "Nombre trouvé à la position " << i << endl;
        }
        else {
            cout << "Nombre non trouvé " << endl;
        }
    }
}
```

### Question 2
 
```cpp
void question2() {
    int lesNombres[6] = { 1,2,3,4,5,6 };
    int taille = size(lesNombres);
    cout << "Avant l'inversion: " << endl;
    afficher(lesNombres, taille);
    for (int i = 0; i < taille/2; i++) {
        int temporaire = lesNombres[i];
        lesNombres[i] = lesNombres[taille - 1 - i];
        lesNombres[taille - 1 - i] = temporaire;
    }
    cout << endl;
    cout << "Après l'inversion: " << endl;
    afficher(lesNombres, taille);
}
```

### Question 3

```cpp
void question3() {
    int lesNombrePairs[100];
    int taille = size(lesNombrePairs);
    for (int i = 0; i < taille; i++) {
        lesNombrePairs[i] = 2 * i;
    }
    afficher(lesNombrePairs, taille);
    cout << endl;
}
```

```cpp
void question3Sans0() {
    int lesNombrePairs[100];
    int taille = size(lesNombrePairs);
    for (int i = 0; i < taille; i++) {
        lesNombrePairs[i] = 2 * (i+1);
    }
    afficher(lesNombrePairs, taille);
    cout << endl;
}
```

### Question 4

```cpp
void question4() {
    float evaluations[6];
    int taille = size(evaluations);
    float note;
    //remplir le tableau
    for (int i = 0; i < taille; i++) {
        cout << "Entrer la note d'évaluation #" << i + 1 << ": ";
        cin >> note;
        evaluations[i] = note;
        cout << endl;
    }

    float moyenne = evaluations[0] * 5 / 100 + evaluations[1] * 7 / 100 + evaluations[2] * 8 / 100 + evaluations[3] * 15 / 100 + evaluations[4] * 25 / 100 + evaluations[5] * 40 / 100;
    cout << "La moyenne est: " << moyenne <<"%"<< endl;
}
```

### Question 5

```cpp
void question5() {
    int tableau[] = { 1,2,3,4,5 };
    
    int taille = size(tableau);
    afficher(tableau, taille);
    int temp = tableau[taille -1];
    for (int i = taille - 1; i > 0; i--) {
        tableau[i] = tableau[i-1];
    }
    tableau[0] = temp;

    cout << endl;
    afficher(tableau, taille);
}
```

```cpp
void question5b() {
    int tableau[] = { 1,2,3,4,5 };

    int taille = size(tableau);
    afficher(tableau, taille);
    cout << endl;
    int temp = tableau[taille - 1];
    int nombreRotations;
    cout << "Combien de rotation effectuer? ";
    cin >> nombreRotations;
    cout << endl;
    for (int j = 0; j < nombreRotations; j++) {
        for (int i = taille - 1; i > 0; i--) {
            tableau[i] = tableau[i - 1];
        }
        tableau[0] = temp;
        temp = tableau[taille - 1];
    }

    cout << endl;
    afficher(tableau, taille);
}
```

### Question 6

```cpp
void question6() {
    int NOMBRE_FACES = 6;
    int resultatsLancers[6] = { 0,0,0,0,0,0 };
    srand(time(0));
    int pige;
    int nombre;
    cout << "Combien de lancers? ";
    cin >> nombre;
    for (int i = 0; i < nombre; i++) {
        pige = rand() % 6 + 1;
        resultatsLancers[pige - 1] += 1;
    }

    cout << "***************" << endl;
    cout << "*  RESULTATS  *" << endl;
    cout << "***************" << endl;
    for (int i = 0; i < 6; i++) {
        cout << "*   " << i+1 << ":    " << resultatsLancers[i] << " *" << endl;
    }
    cout << "***************" << endl;

}
```

### Question 7

```cpp
void question7() {
    //On n'a pas le choix avec les tableaux classiques de mettre la "variable" dans une constante
    //En effet, lors de la compilation, la taille du tableau doit être connue, donc impossible de mettre une taille variable.
    const int NOMBRE_FACES = 9;
    int resultatsLancers[NOMBRE_FACES] = { 0 };
    srand(time(0));
    int pige;
    int nombre;
    cout << "Combien de lancers? ";
    cin >> nombre;
    for (int i = 0; i < nombre; i++) {
        pige = rand() % NOMBRE_FACES + 1;
        resultatsLancers[pige - 1] += 1;
    }

    //pour utiliser setw pour la largeur, on a besoin de la librairie #include <iomanip>
    //setw est une commande pour set width (ajuster largeur). Ça ajoute le nombre d'espaces nécessaires pour que la largeur totale soit 9 
    cout << "****************" << endl;
    cout << "*  RESULTATS   *" << endl;
    cout << "****************" << endl;
    for (int i = 0; i < NOMBRE_FACES; i++) {
        cout << "*"<<setw(3) << i + 1 << ":" << setw(9)<< resultatsLancers[i] << " *" << endl;
    }
    cout << "****************" << endl;
}
```

### Question 8

```cpp
void question8() {
    std::string texte;
    int voyelles = 0, consonnes = 0;

    std::cout << "Entrez une chaîne de caractères : ";
    std::getline(std::cin, texte);

    for (char c : texte) {
        c = tolower(c);
        if (c >= 'a' && c <= 'z') { // Vérifie si c'est une lettre
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y') {
                ++voyelles;
            }
            else {
                ++consonnes;
            }
        }
    }

    std::cout << "Voyelles : " << voyelles << ", Consonnes : " << consonnes << "\n";
}
```

### Question 9

```cpp
void question9() {
    std::string texte;
    int mots = 0;

    std::cout << "Entrez une phrase : ";
    std::getline(std::cin, texte);

    for (int i = 0; i < texte.size(); ++i) {
        if (texte[i] == ' ' && i > 0 && texte[i - 1] != ' ') {
            mots++;
        }
    }
    mots++; // Pour compter le dernier mot s'il n'est pas suivi d'un espace

    std::cout << "Nombre de mots : " << mots << "\n";
}
```