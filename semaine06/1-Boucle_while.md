# La boucle `while`

Les boucles permettent d'exécuter un bloc de code plusieurs fois. En C++, il existe plusieurs types de boucles, dont la boucle while. La boucle while est utilisée lorsque vous ne savez pas à l'avance combien de fois il faudra exécuter la boucle. Elle s'exécute tant que la condition est vraie. Elle peut s'exécuter 0 fois, si la condition d'entrée n'est jamais vraie.

## Syntaxe de base

```cpp
while (condition) {
    // instructions à répéter
}
```

- `condition` : une expression booléenne qui est évaluée avant chaque itération de la boucle.
- Si la condition est vraie (true), le bloc d'instructions est exécuté.
- Si la condition est fausse (false), la boucle s'arrête.

## Exemple:

```cpp
int compteur = 1; // déclaration du compteur à l'extérieur

while (compteur <= 5) {
    cout << "Compteur : " << compteur << endl;
    compteur++;  // Incrémentation de compteur
}
```

- Explication : La boucle continue tant que la variable compteur est inférieure ou égale à 5. À chaque itération, compteur est incrémenté.


### Exemple : le mot de passe

> note: sachez que les mots de passe ne sont jamais comparés en clair dans le code ou la base de données

```cpp
string motDePasse;
string correct = "soleil123";

cout << "Entrez le mot de passe : ";
cin >> motDePasse;

while (motDePasse != correct) {
    cout << "Ce n'est pas le bon mot de passe...Entrez le mot de passe : ";
    cin >> motDePasse;
}

cout << "Accès autorisé !" << endl;
```

### Exercices

1. Bonifier le code ci-haut pour que la personne aie maximum 5 essais pour entrer son mot de passe correctement. Si le mot de passe est bon, on écrit Accès autorisé, sinon, on redemande. Maximum 5 demandes.

2. Ajouter l'information du nombre d'essais qu'il reste à l'utilisateur s'il se trompe.


## Boucle infinie (Attention!)

Si on ne définit pas correctement la condition ou bien qu'on oublie d'incrémenter le compteur, on peut se retrouver avec une boucle infinie. Si on a un *`cout`* à l'intérieur, on verra des écritures se répéter à l'infini. Si on n'a pas de *`cout`*, on peut voir un programme qui ne répond pas, dans lequel on ne peut rien écrire.

Les 2 moyens de sortir d'une boucle sont lorsque la **condition devient fausse** ou bien quand on rencontre la **commande `break`**.

## Commande break

L'utilisation de `break` dans une boucle est un outil puissant mais doit être maniée avec précaution. Voici quelques bonnes pratiques pour l'intégrer de manière efficace dans un programme :

1. Éviter de rendre la logique confuse

- Mauvaise pratique : Utiliser break de manière excessive dans une boucle peut rendre le flux du programme difficile à comprendre et à maintenir. Par exemple, un programme avec plusieurs points de sortie peut devenir complexe à déboguer.
- Bonne pratique : Utiliser break uniquement dans des situations où il simplifie clairement la logique, comme pour interrompre une boucle lorsqu'une condition exceptionnelle survient.

```cpp
while (true) {
    if ("condition exceptionnelle") {
        // Sortie anticipée en cas de condition exceptionnelle
        break;
    }
    // autres commandes
}
```

2. Préférer une condition de boucle claire

- Si possible, structurez la condition de la boucle de sorte que l'utilisation de break ne soit pas nécessaire.

```cpp
int input = 0;
while (input != -1) {
    cin >> input;
    // commandes
}

// au lieu de:

while (true){
    cin >> input;
    if(input == -1){
        break;
    }
    // commandes
}
```

- `break` est particulièrement utile dans les boucles où vous devez répondre à des événements inattendus ou des erreurs sans attendre que la condition normale de sortie soit atteinte.

- Lorsque vous utilisez break, surtout dans des boucles complexes, il est utile de commenter pourquoi cette sortie précoce est nécessaire. Cela aide à maintenir la lisibilité et la compréhension du code.

3. Ne pas abuser de break pour pallier une mauvaise structure

- Si vous vous trouvez à utiliser plusieurs break dans une même boucle, c'est souvent un signe qu'il pourrait y avoir une meilleure manière de structurer votre programme, comme utiliser des fonctions auxiliaires ou revoir la logique de la boucle.