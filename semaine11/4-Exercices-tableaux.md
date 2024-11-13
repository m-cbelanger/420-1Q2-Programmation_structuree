# Tableaux (passage à une fonction)

Pour chaque question ci-dessous, faire une fonction void qui ne prend aucun paramètres et ne retourne rien. Ne pas oublier que si on passe un tableau classique en paramètres, il faut aussi passer la taille de celui-ci.

## Question 1

Pour faciliter les questions à venir, créer-vous 4 fonctions d'affichage pour les tableaux de types int, double, char et string. 

> note facultative: il est possible de donner le même nom aux fonctions si leur signature est différente (nombre de paramètres, types de paramètres). Il serait donc possible d'avoir ceci dans le même programme:

```cpp
void afficher(int x);           // Signature : afficher(int)
void afficher(double x);        // Signature : afficher(double)
void afficher(int x, int y);    // Signature : afficher(int, int)
```

## Question 2

Faire une fonction *minTableau* qui prend un tableau de doubles et en retourne le minimum. Pensez aux paramètres à passer, sont-ils par référence, par référence constante, par valeur? Appelez la fonction à partir de la fonction question2(). Vous devez trouver une solution sans vecteur, sans pointeur, utilisez votre ingéniosité!

## Question 3

Faire une fonction *inverserTableau* qui prend un tableau de char et en inverse le contenu. Par exemple, si on passe le tableau suivant:

['a', 'b', 'n', 'h']  devient ['h', 'n', 'b', 'a']

Appelez la fonction à partir de la fonction question3().


## Question 4 

a) Faire une fonction *compterOccurrence* qui prend un tableau et une string, qui est le mot à chercher.

Pour vos tests, essayez un tableau comme celui-ci et essayez des mots différents pour que la fonction compte leur occurrence:
```cpp
    std::string mots[150] = {
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
```

b) Faire une fonction qui compte le nombre de fois qu'on trouve la lettre 'e' dans un tableau de string, comme celui de la question a). Modulez la fonction pour que la lettre choisie puisse être décidée par l'appelant de la fonction.

indice: utiliser une boucle imbriquée. Cet exercice sera expliqué en classe.

## Question 5

Faire une fonction *rechercheElement* qui retourne si oui ou non, un mot est présent dans un tableau de string. Vous pouvez prendre le tableau de la question 4 pour faire des tests.

## Question défi

Faire une fonction nommée *trierCroissant* qui place les string d'un tableau en ordre croissant. 

Pour faire les tests, essayez de passer les tableaux suivants à la fonction:
```cpp
{"Émilie", "Jacques", "Caroline", "Victor", "Alice", "Benoît", "Sophie", "Charles", "Lucie", "Antoine", "Marc", "Zoé", "Éric","Florence", "Hugo"};
```
Le tableau devrait être modifié et ressortir en ordre alphabétique de A à Z.

> Rappel: Il est possible de comparer des chaînes de caractères avec les opérateurs <, >, <=, >=.
Il est conseillé de s'inspirer de l'un des 3 algorithmes vus en notions d'algorithmes (tri par insertion, tri par sélection, tri à bulle)