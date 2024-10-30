# Solutions

### code pour les questions 1-2-3:
Autres réponses possibles.

```cpp
#include <iostream>
#include <locale.h>
#include <string>
#include <cmath>

using namespace std;

double distance(double xa, double ya, double xb, double yb) {
	double dist = sqrt(pow((xa - xb), 2) + pow((ya - yb), 2));
	return dist;
}

bool estPremier(int nombre) {
	bool reponse = true;
	if (nombre <= 0) {
		cout << "nombre invalide";
	}
	else if (nombre == 1) {
		reponse = false; //cas particulier
	}
	else {
		for (int i = 2; i < nombre; i++) {
			if (nombre % i == 0) {
				reponse = false;
			}
		}
	}
	return reponse;
}

int nombrePremierN(int n) {
	int compteur = 0;
	if (estPremier(n)) {
		for (int i = 1; i <= n; i++) {
			if (estPremier(i)) {
				compteur++;
			}
		}
	}
	return compteur;
}

void question1() {
	double xa = 1;
	double xb = 0;
	double ya = 6;
	double yb = 4;
	double dist = distance(xa, ya, xb, yb);
	cout << "La distance entre le point A(" << xa << "," << ya << ") et B(" << xb << ", " << yb << ") est " << dist << endl;
}
void question2() {
	int leNombre;
	cout << "entrer un nombre entier > 0: ";
	cin >> leNombre;

	bool premier = estPremier(leNombre);
	if (premier) {
		cout << "Le nombre " << leNombre << " est premier." << endl;
	}
	else {
		cout << "Le nombre " << leNombre << " n'est pas premier." << endl;
	}
}

void question3() {
	int nombre;
	cout << "Entrer un nombre, je dirai du combientième nombre premier il s'agit: " << endl;
	cin >> nombre;
	int combientieme = nombrePremierN(nombre);
	if (combientieme > 0) {
		cout << "le nombre " << nombre << " est le " << combientieme << "ieme nombre premier" << endl;
	}
	else {
		cout << nombre << " n'est pas premier." << endl;
	}
}



int main() {
	setlocale(LC_ALL, "");
	question1();
	question2();
	question3();

}
```

### Question 4: 
laissée à votre discrétion

### Question 5:
a) Les variables monNombre1 et monNombre2 sont locales au main, elles n'existent pas dans la fonction somme. il faudrait écrire:
```cpp
float somme(int nombre1, float nombre2) {
    float resultat = nombre1 + nombre2;
    return resultat;
}

int main() {

    int monNombre1 = 1;
    float monNombre2 = 4.0;
    cout << "La somme de " << monNombre1 << " et " << monNombre2 << " est: " << somme(monNombre1, monNombre2) << endl;
    
}
```

b) Parce que la fonction afficherInformation n'est jamais appelée.

c) L'orde de passage des paramètres lors de l'appel de la fonction n'est pas le bon.

d) On ne passe que 2 paramètres à une fonction qui en demande 3 et qui n'a pas de paramètres par défaut.


### Question 6:
a) non, puisque la fonction a des valeur par défaut pour chaque paramètre, ce sont ces valeurs qui sont prises si aucun paramètre n'est fourni.

b) non

c) oui

d) non

e) oui

f) Dans la fonction, la variable locale nom contiendra "Jordan", l'âge contiendra 22 et le groupe sanguin sera "A" par défaut (3e paramètre non fourni).

g) puisque le 2e paramètre entré est un char, l'âge deviendra le numéro de ce char dans la table ASCII... Donc 65 pour 'A'. En C++ il n'est pas possible de laisser un paramètre vide entre 2 paramètres fournis. Pour fournir seulement le nom et le groupeSanguin ou bien seulement l'age et le groupe sanguin, malgré les valeurs par défaut, on ne peut pas. La solution est la surcharge de fonction. À voir plus tard!
