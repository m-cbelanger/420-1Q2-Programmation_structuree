## Exercices (variables globales et locales + fonctions)

Le calcul sur les gaz rares a la formule générale suivante: 

PV= nRT

P= pression (exemple: 101,3 KPa), <br>
V= volume (exemple: 1 m cube), <br>
n= masse molaire, <br>
R= constante des gaz parfaits, <br>
T= température (exemple: 250 à 300 Kelvin)


Voici un code incomplet, les questions ci-dessous s'y rapportent. 

```cpp
#include <iostream>
#include <locale.h>
#include <string>

using namespace std;

const double R = 8.314; //constante R dans les formules de gaz parfaits
int n = 4;
int compteur = 0;

float calculerVolume() {
	float temperature;
	float pression;
	int n = 5; 
	
	cout << "Entrer la température: ";
	cin >> temperature;
	cout << "Entrer la pression: ";
	cin >> pression;
	
	float volume = n * R * temperature / pression;
	return volume;
	
}

float calculerPression() {
	//le calcul pour la pression est pression = n*R*temperature/volume
	return 0;
}

float calculerTemperature() {
	//le calcul pour la température est temperature = pression*volume/(n*R)
	return 0;
}

int main() {
	setlocale(LC_ALL, "");

	n = 6;
	char choix;

	do {
		cout << "On veut calculer certains paramètres concernant le métane (CH4)." << endl;
		cout << "Pour calculer le volume, choisir A" << endl;
		cout << "Pour calculer la pression, choisir B" << endl;
		cout << "Pour calculer la température, choisir C" << endl;
		cout << "Pour arrêter, choisir X"<<endl;
		cin >> choix;

		switch (choix) {
		case 'A':
			calculerVolume();
			break;
		case 'B':
			calculerPression();
			break;
		case 'C':
			calculerTemperature();
			break;
		default:
			cout << "Mauvaise sélection"<<endl;
			break;
		}
	} while (choix != 'X');

	cout << "au revoir!";

}


```

### Question 1 

Identifiez toutes les variables et dites quelles sont leurs portées respectives. 

### Question 2

La variable `n` est déclarée 3 fois dans le programme. Quelle sera la valeur de `n` quand on calculera le volume du méthane (fonction calculerVolume())?

### Question 3

Dans la fonction calculerVolume(), mettre la déclaration de la variable `n` en commentaire. Que sera alors la valeur de `n` utilisée dans les calculs?

### Question 4

Compléter et modifier le code des fonctions calculerPression() et calculerTemperature() pour qu'elles retournent le résultat de leurs calculs. 

### Question 5

Modifier le code pour utiliser les retours des fonctions et afficher le résultat dans `le main()`

### Question 6

Modifier le code pour que le compteur soit incrémenté à chaque fois qu'un calcul est fait (peu importe quel calcul).
