# Exercices



### Question 1

Voici un bout de code simple. 

```cpp 
#include <iostream>

using namespace std;

int main() {
    int age;
    double revenuAnnuel;
    int experience;


    cout << "Veuillez entrer votre âge : ";
    cin >> age;

    cout << "Veuillez entrer votre revenu annuel : ";
    cin >> revenuAnnuel;

    cout << "Veuillez entrer votre nombre d'années d'expérience professionnelle : ";
    cin >> experience;

    if (age == 18 || age == 19 || age == 20) {
        cout << "Vous avez 18, 19 ou bien 20 ans" << endl;
    }

    if (revenuAnnuel >= 50000 && revenuAnnuel <= 150000) {
        cout << "Votre revenu annuel est entre 50 000$ et 150 000$." << endl;
    }
    
    if (experience > 5) {
        cout << "Vous avez plus de 5 ans d'expérience professionnelle." << endl;
    }

    return 0;
}

```
Copier ce code dans votre éditeur et essayez les valeurs suivantes. Qu'est-ce que ça affichera? 
 - a) age = 19, revenuAnnuel = 40000, experience = 0
 - b) age = 25, revenuAnnuel = 52000, experience = 5
 - c) age = 20, revenuAnnuel = 150000, experience = 7
 - d) essayez plein de combinaisons.



### Question 2
Demander à un utilisateur d'entrer le nombre d'heures qu'il a travaillé pendant la semaine. On suppose que cet employé reçoit 26$ de l'heure pour les 40 premières heures travaillées dans la semaine et 39$ de l'heure pour toutes les heures qui excèdent 40 heures. Calculer le salaire brut de cet employé. 
- Décortiquer les possibilités de nombres d'heures (plus de 40? 40 et moins?).
- Faire le calcul approprié selon cas et afficher le salaire.
- Tester pour 20 heures, 40 heures et 49 heures.

### Question 3

a) voici un code avec des if imbriqués. Avec la déclaration des 3 variables ci-dessous, quel message sera affiché?

```cpp
bool utilisateurConnecte = true;
bool droitReservation = true;
bool placesDisponibles = true;

if (utilisateurConnecte) {
    if (droitReservation) {
        if (placesDisponibles) {
            cout << "Réservation confirmée." << endl;
        } else {
            cout << "Désolé, il n'y a plus de places disponibles." << endl;
        }
    } else {
        cout << "Vous n'avez pas le droit de faire une réservation." << endl;
    }
} else {
    cout << "Veuillez vous connecter pour faire une réservation." << endl;
}

```

b) Si on modifie les 3 déclarations par ceci, qu'est-ce qui sera affiché?
```cpp
bool utilisateurConnecte = true;
bool droitReservation = false;
bool placesDisponibles = true;
```

c) Si on modifie les 3 déclarations par ceci, qu'est-ce qui sera affiché?
```cpp
bool utilisateurConnecte = false;
bool droitReservation = true;
bool placesDisponibles = true;
```

d) Quelles devraient être les valeurs des 3 variables pour afficher "Désolé, il n'y a plus de places disponibles."?


### Question 4

a) Que vaudront les variables a, b et c après ce code? Réfléchir à la réponse AVANT de le tester.

```cpp
int a;
int b;
int c;

a = 10;
b = 3;
c = 20;

if (a > b + 3)
{
    a = a - 1;
    c = 1;
}
else
{
    if (a > b + 4)
    {
        a = a - 1;
        c = 2;
    }
}

```

b) Si on place celui-ci à la suite, que vaudront les variables a,b,c?

```cpp
a = 10;
b = 3;
c = 20;

if (a > b + 3){
    a = a - 1;
    c = 1;
}
if (a > b + 4){
    a = a - 1;
    c = 2;
}

```

### Question 5

Faire la structure alternative appropriée pour faire les tâches suivantes:

1. Demander 2 nombres à l'utilisateur et afficher le plus grand des 2. 

2. Demander à l’utilisateur de saisir 3 entiers A, B et C. Le programme indique si C est compris entre A et B, bornes incluses.<br>
Exemples:
- A = 5,  B = 6, C = 8   ->   8 n’est pas compris entre 5 et 6
- A = 5,  B = 6,  C = 4   ->    4 n’est pas compris entre 5 et 6
- A = 5,  B = 12,  C = 8   ->    8 est  compris entre 5 et 12
- A = 5,  B = 12,  C = 5    ->   5 est  compris entre 5 et 12
- A = 5,  B = 12,  C = 12   ->    12 est  compris entre 5 et 12

3. Demander à l’utilisateur de saisir un entier puis afficher si l’entier est pair ou impair. Pensez à utiliser le modulo.

4. Demander à l'utilisateur de saisir une année puis afficher s'il s'agit d'une année bissextile. Une année bissextile est un multiple de 4.

5. Demander à l’utilisateur de saisir un entier puis afficher "ERREUR" si l’entier n'est pas un nombre impair compris entre 73 et 111 bornes incluses. Dans le cas contraire, afficher "PAS D'ERREUR". 

6. Demander 3 nombres et afficher le plus grand.

7. Afficher maintenant ces 3 nombres en ordre.

8. Demander 2 nombres float et l’opération à effectuer sur ces 2 nombres ( + - * /)
  Afficher selon le cas le résultat de la somme (+), de la différence (-), de la multiplication (x) ou du quotient(/)
    - faire avec les if  
    - faire avec le switch

9. Calculer le montant d’une commande de livres, sachant que le prix unitaire du livre est de 35$ si on commande moins de 5 livres, 30$ si on commande de 5 à 29 livres, 25$ si on commande de 30 à 49 livres, 20$ si on commande 50 livres ou plus. L’utilisateur fournit en entrée le nombre de livres commandés.


### Question 6
Créer un petit programme qui vérifie si un individu est admissible à un prêt bancaire. Les prêts bancaires ne sont admissibles qu'aux personnes de 18 ans et plus et qui ont un revenu de 30 000$ et plus. 
- On demande l'âge à l'utilisateur. 
- S'il a 18 ans ou plus, on lui demande son revenu annuel.
- S'il a ce qu'il faut, on affiche un message qui l'informe "Vous êtes admissible au prêt!"
- S'il n'a pas le revenu nécessaire, on l'informe "Vous n'avez pas le revenu nécessaire"
- S'il est mineur, on l'informe "Vous devez être majeur pour être admissible".

