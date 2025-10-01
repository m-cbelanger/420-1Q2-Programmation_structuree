# La boucle `do..while`

Une boucle do..while est une structure de contrôle en C++ qui permet d'exécuter un bloc de code au moins une fois, puis de répéter cette exécution tant qu'une condition est vraie. Contrairement à la boucle `while`, la condition est testée après chaque exécution du bloc, garantissant ainsi qu'il s'exécute **au moins une fois**.

On utilise souvent cette boucle dans la gestion de menus (choix pour l'utilisateur), entre autres.

## Syntaxe de base

```cpp
do {
    // Instructions à exécuter
} while (condition);
```

- `condition` : une expression booléenne qui est évaluée après chaque itération de la boucle.
- Si la condition est vraie (true), le bloc d'instructions est exécuté à nouveau.
- Si la condition est fausse (false), la boucle ne se répète pas.

## Exemple:

```cpp
int compteur = 1;
do {
    cout << "Compteur = " << compteur << endl;
    compteur++;
} while (compteur <= 5); //la condition est à la fin
```

## Menu

Pour offrir plusieurs choix à un utilisateur, on peut lui offrir d'entrer son choix d'action selon une liste proposée dans un `menu`.

```cpp
char choix;
do {

    cout << "=== Menu ===" << endl;
    cout << "1. Option 1" << endl;
    cout << "2. Option 2" << endl;
    cout << "3. Quitter" << endl;
    cout << "Entrez votre choix (1-3) : ";
    cin >> choix;
    cout << endl;

    switch (choix) {
    case '1':
        cout << "Vous avez choisi l'option 1" << endl;
        break;
    case '2':
        cout << "Vous avez choisi l'option 2" << endl;
        break;
    case '3':
        cout << "Au revoir!" << endl;
        break;
    default:
        cout << "Choix invalide..." << endl;
        break;
    }
    cout << endl;
    system("cls"); //commande pour effacer la console à chaque boucle
} while (choix != '3');
```

## Exercice

Faire un petit programme qui demande à l'utilisateur 2 nombres et qui lui offre ensuite un menu de choix à faire avec ces 2 nombres: 
- choix 1: faire la somme des nombres
- choix 2: faire le produit des nombres
- choix 3: remplacer les 2 nombres
- choix 4: quitter

Spécification: en plus d'afficher le résultat choisi, il faut que le résultat de la somme ou du produit soit mis dans une variable.


### Détails importants

Note 1: la variables de contrôle dans les `switch` n'est fonctionnelle qu'avec les `int` et les `char` (et les `enum`, non traitées dans ce cours).

Note 2: en Linux, on doit utiliser system("clear") pour effacer l'écran et <br> 
system("read -p 'Appuyez sur Entrée pour continuer...' var");

Note 3: Quand on convertit un string en double dans un environnement où on a modifié le setlocale, on aura une troncature du nombre. [Documentation officielle](https://en.cppreference.com/w/cpp/locale/setlocale.html)

```cpp
setlocale(LC_ALL,"");
string nombreChaine;
double nombre;

cout << "Entrez un nombre: ";
cin >> nombreChaine; // si on entre 12.34

nombre = stod(nombreChaine); //on aura 12 ici

cout << nombre;
```

CORRECTION AVEC CECI:
```cpp
setlocale(LC_ALL,""); 
setlocale(LC_NUMERIC, "C"); //ici on conserve le comportement numérique original en précisant "C" 
string nombreChaine;
double nombre;

cout << "Entrez un nombre: ";
cin >> nombreChaine; 

nombre = stod(nombreChaine); 

cout << nombre;
```

Note 4: Pour remettre le flux d’entrée (cin) dans un état propre et pour vider les caractères restants, les commandes suivantes peuvent être utilisées tout de suite en-dessous du cin:

```cpp
cin.clear(); // enlever l'état d'erreur, utile si on entre du texte dans un int
cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
```


# La fonction `aléatoire` (rand)

Dans plusieurs exercices, il peut être amusant et intéressant de piger certains items au hasard. Il faut d'abord importer les librairies suivantes:

```cpp
#include <cstdlib> 
#include <time.h>
```

La fonction rand( ) retourne un nombre aléatoire entre 0 et RAND_MAX (minimalement 32767, peut varier). Pour avoir un nombre aléatoire entre 0 et 5 inclusivement par exemple, on fera ceci:

```cpp
srand(time(0)); //Pour utiliser le temps actuel pour générer le seed 
int n = 5; //le nombre max inclus dans le tirage au sort
int nombreAleatoire = rand() % (n+1); 
```

### Complément : nombre aléatoires en informatique


####  Le principe de base : nombres pseudo-aléatoires

	En informatique, rien n’est vraiment aléatoire. Même quand on utilise rand(), l’ordinateur suit un algorithme précis pour générer les nombres.

	Ces nombres ont l’air aléatoires, mais si tu commences l’algorithme au même point, tu obtiens toujours la même suite.

	C’est pourquoi on parle de nombres pseudo-aléatoires : "pseudo" = pas complètement aléatoires, mais suffisamment pour beaucoup d’applications.

#### Le rôle de srand()

	rand() seul suit un algorithme déterministe.

	Il faut un point de départ, appelé graine (seed).

	srand(seed) sert à définir ce point de départ.

	Exemple :

	Si on met srand(1) → rand() va produire exactement la même suite chaque fois.

	Si on met srand(5) → une autre suite, mais toujours la même suite pour 5.

	Donc srand() ne fait pas vraiment un tirage aléatoire, il fixe juste le départ de l’algorithme. Si on le refixe à chaque passage dans une boucle, on risque de se retrouver toujours avec le même nombre

#### Pourquoi on utilise time(0) ?

	time(0) retourne le nombre de secondes écoulées depuis le 1er janvier 1970.

	Comme ce nombre change tout le temps, tu obtiens une graine différente à chaque exécution.

	L’algorithme de rand() part alors de ce nouveau point de départ → la suite de nombres est différente à chaque exécution.


