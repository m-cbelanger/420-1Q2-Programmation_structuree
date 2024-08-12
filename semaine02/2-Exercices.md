# Exercices (variables)

# Préambule
Pour chaque nouvelle section d'exercice, il est conseillé de se pratiquer à créer un projet nouveau et un fichier source dans lequel on expérimentera les questions qui vont suivre.


- Créer un nouveau projet nommé exercices_variables dans Visual Studio
- Créer un fichier source nommé exercices_variables.cpp
- En tête de fichier, écrire les 2 includes et le using suivants:

```cpp
#include <iostream>
#include <locale.h>
using namespace std;
```

Créer un main() dans ce fichier:
```cpp
int main(){
    setlocale(LC_ALL, "");// pour que les accents soient affichés
}

```
 En tout temps n'hésitez pas à expérimenter des commandes et à vous poser des questions!

 **Pour chaque question, mettre un commentaire qui donne le numéro de la question avant de l'écrire. Voir l'exemple ci-dessous**.

```cpp
int main(){
    //question 1

    //question 2

    //question 3

    ...
}
```


## Question 1

Dans le main de votre fichier source:
1. Déclarer une variable nommée heures de type float. Y mettre le nombre d'heure travaillées la semaine passée (inventez-en un si vous ne travaillez pas).
2. Déclarer une variable de type float nommée tauxHoraire. Placez-y le taux horaire ($/heure) qui vous ferait plaisir.
3. Déclarer une variable salaire dans lequel on place le nombre d'heures multiplié par le tauxHoraire. De quel type déclarez-vous la variable salaire?
4. Afficher une phrase complète qui dit quelque chose semblable à ceci: "Si on fait ... heures de travail à un taux de ... $/heure, on fera un salaire brut de ...

## Question 2

Dans le main de votre fichier source:
- Déclarer 2 variables entière: x = 8 et y = 5
- Trouver une façon pour interchanger (permuter) le contenu des 2 variables de façon dynamique (c'est-à-dire qui s'adaptera et fonctionnera peu importe les valeurs initiales de x et y).
- Afficher les résultats AVANT et APRÈS la permutation. Par exemple, en console, on devrait voir:<br>

![Q2](img/Q2.png) <br>



## Question 3
Opération sur les variables avec différents types

a) Observer et décrire ce qui se produit pour chaque affectation de valeur à une variable.
```cpp
int b = 5;
float k = 3.7;
char c = 'A';

b = b + 100;      
k = k * 2;       
c = b;           

```

- Que contient b à la fin?
- Que contient k à la fin?
- Que se passe-t-il quand on affecte b à c?

b) Observer et décrire ce qui se produit pour chaque affectation de valeur à une variable.
```cpp
int n = 3;
double z = 4.5;
char lettre = 'B';

z = n / 2;          
n = z * 10;         
lettre = lettre + n;  
```
- Que vaudra z? Pourquoi la valeur n'est pas celle attendue?
- Que se passe-t-il avec lettre?


c) Observer et décrire ce qui se produit pour chaque affectation de valeur à une variable.
```cpp
float f = 3.14;
int i = 1;
double d = 2.718;

f = f * i;           
d = f + d;           
i = d;               
```
- Que vaudront f et d à la fin?
- Que se passe-t-il avec i quand on met d dans i?

d) Que se passe-t-il ici?
```cpp
int nb1 = 10;
int nb2 = 0;
float resultat;

resultat = nb1 / nb2;  // Que se passe-t-il ici ?
```

## Question 4

Calculons la somme des n premiers nombres entiers positifs. La formule mathématique pour y arriver est somme = n(n+1)/2. Il faudra demander à la personne qui utilise le programme d'entrer un nombre. Si, par exemple, elle entre le nombre 100, on lui affichera la somme de 1+2+3+4+5+...+100 en faisant 100*99/2 = 4950. Pour y parvenir suivre les étapes suivantes:
1. Déclarer une variable qui va pouvoir recevoir le nombre entier qu'on demandera à l'utilisateur
2. Déclarer une variable qui prendra le calcul qu'on fera avec le chiffre obtenu.
3. Demander à l'utilisateur d'entrer un nombre
4. Attraper sa réponse et la mettre dans la variable prévue à l'étape 1.
5. Faire le calcul avec la réponse obtenue et mettre le résultat dans la variable prévue à l'étape 2.
6. Afficher une phrase qui explique que la somme des nombres 1 à n donne ...

## Question 5

On donne le diamètre de trois planètes : la Terre = 12 757 km, Mars = 6 800 km et Jupiter = 139 800 km. Calculer et afficher le nom de la planète, son diamètre, son rayon et son volume. Les nombres doivent être mis dans des variables et les calculs aussi. À titre de rappel mathématique,

$$ 
rayon = diamètre/2
$$

$$
volume = \frac{4 * 3.1416 * rayon^3}{3} 
$$  

Pensez à bien décortiquer les étapes avant d'écrire le code. Est-ce que certaines valeurs devraient être constantes?

## Question 6

Calculer le montant qu'on doit charger au client lors de l'achat d'un bien quand on rajoute les taxes. Le montant des taxes s'élève à 14,975% du montant qu'on ajoute à ce montant. Vous devez demander le montant à l'utilisateur avant d'utiliser son entrée pour calculer le total et lui afficher le total.

## Question 7

Faire une petite calculatrice dans laquelle on demande 2 nombres entiers à l'utilisateur (par exemple 26 et 10). Ensuite, afficher les informations suivantes:
![q7](img/Q7.png);


## Question 8

Demander à un utilisateur d'entrer son nom complet, son âge, et sa taille en mètres. Convertir la taille en mètre pour l'afficher en centimètres. Affichez ensuite les 3 informations une en-dessous de l'autre.

