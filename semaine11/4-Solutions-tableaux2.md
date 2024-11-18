# Solutions tableaux

## Question 1

```cpp
void afficher(int tableau[], int taille) {
    for (int i = 0; i < taille; i++) {
        cout << tableau[i] << " ";
    }
    cout << endl;
}
void afficher(char tableau[], int taille) {
    for (int i = 0; i < taille; i++) {
        cout << tableau[i] << " ";
    }
    cout << endl;
}

void afficher(string tableau[], int taille) {
    for (int i = 0; i < taille; i++) {
        cout << tableau[i] << " ";
    }
    cout << endl;
}

void afficher(double tableau[], int taille) {
    for (int i = 0; i < taille; i++) {
        cout << tableau[i] << " ";
    }
    cout << endl;
}
```

## Question 2

```cpp
double minTableau(const double tab[], int taille) {
    double minimum = DBL_MAX; //équivalent du plus gros nombre possible
    for (int i = 0; i < taille; i++) {
        if (tab[i] < minimum) {
            minimum = tab[i];
        }
    }
    return minimum;
}

void question2() {
    //tableau de mesures de température moyenne par jour
    double monTableau[] = { 15.2, 14.8, 16.1, 15.5, 13.9, 12.3, 11.4, 12.0, 13.1, 14.2, 15.0, 16.5, 15.8, 13.7 };
    int taille = size(monTableau);
    double temperatureLaPlusBasse = minTableau(monTableau, taille);
    cout << temperatureLaPlusBasse;
    cout << endl;
}
```

## Question 3

```cpp
void inverserTableau(char tableau[], int taille) {
    char temp;
    for (int i = 0; i < taille/2; i++) {
        temp = tableau[i];
        tableau[i] = tableau[taille -1- i];
        tableau[taille -1- i] = temp;
    }
}

void question3() {
    char tableau[] = {'a','b','n', 'h' };
    int taille = size(tableau);
    inverserTableau(tableau, taille);
    afficher(tableau, taille);
}
```

## Question 4

```cpp
int compterOccurrence(string tableau[], int taille, string mot) {
    int compteur =0;
    for (int i = 0; i < taille; i++) {
        if (tableau[i] == mot) {
            compteur++;
        }
    }
    return compteur;
}

int nombreLettres(string tableau[], int taille, char lettre) {
    int compteur = 0;
    for (int i = 0; i < taille; i++) {
        string mot = tableau[i];
        for (int j = 0; j < mot.length(); j++) {
            if (mot[j] == lettre) {
                compteur++;
            }
        }
    }
    return compteur;
}

//extra:
void nombreTouteLettres(string chaine,int lettres[]) {
    for (int i = 0; i < chaine.length(); i++) {
        char l = chaine[i];
        lettres[l - 'a']++;
    }
}
void question4() {
    string tableauMots[] = {
        "chat", "chien", "oiseau", "voiture", "maison",
        "chat", "livre", "soleil", "ordinateur", "école",
        "plante", "fleur", "mer", "montagne", "forêt",
        "chat", "enfant", "chien", "table", "chaise",
        "livre", "arbre", "ville", "village", "rue",
        "vélo", "musique", "chanson", "cinéma", "théâtre",
        "film", "hiver", "été", "printemps", "automne",
        "chocolat", "café", "thé", "eau", "boisson",
        "fleur", "forêt", "montagne", "plage", "rêve",
        "soleil", "lune", "étoile", "univers", "galaxie",
        "neige", "pluie", "vent", "orage", "tempête",
        "cheval", "vache", "mouton", "poule", "lapin",
        "chat", "chien", "oiseau", "poisson", "serpent",
        "école", "professeur", "élève", "classe", "bureau",
        "maison", "appartement", "immeuble", "jardin", "piscine",
        "tableau", "stylo", "cahier", "livre", "feuille",
        "chaise", "canapé", "lit", "drap", "oreiller",
        "plante", "fleur", "arbre", "gazon", "jardin",
        "musique", "chanson", "guitare", "piano", "violon",
        "cinéma", "film", "acteur", "scène", "salle",
        "lundi", "mardi", "mercredi", "jeudi", "vendredi",
        "samedi", "dimanche", "jour", "nuit", "semaine",
        "mois", "année", "heure", "minute", "seconde",
        "hiver", "printemps", "été", "automne", "saison",
        "chocolat", "café", "sucre", "pain", "beurre",
        "fromage", "pomme", "orange", "banane", "fraise",
        "légume", "carotte", "tomate", "poivron", "courgette",
        "sport", "foot", "tennis", "basket", "natation",
        "jardin", "parc", "forêt", "lac", "rivière",
        "ordinateur", "écran", "clavier", "souris", "tablette",
        "smartphone", "internet", "email", "message", "appel",
        "soleil", "lune", "étoile", "univers", "galaxie"
    };

    int taille = size(tableauMots);
    int nombreDeMots = compterOccurrence(tableauMots, taille, "chien");
    cout << "Il y a " << nombreDeMots << " fois le mot chien" << endl;

    nombreDeMots = compterOccurrence(tableauMots, taille, "vaisseau");
    cout << "Il y a " << nombreDeMots << " fois le mot vaisseau" << endl;

    int lettreE = nombreLettres(tableauMots, taille, 'e');
    cout << "Il y a " << lettreE << " lettres E dans le tableau de mots" << endl;
// extra:
    int lesLettres[52] = { 0 };
    nombreTouteLettres("allo ceci est une phrase pour compter les lettres", lesLettres);
    afficher(lesLettres, 52);
}
```

