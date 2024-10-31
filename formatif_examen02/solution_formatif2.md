# Question 1


code proposé. Autres avenues possibles:

```cpp
#include <iostream>
#include <locale.h>
#include <string>

using namespace std;

void question1() {
	int nombre;
	int lePlusGrand = 0;

	for (int i= 1; i<=5;i++) {
		cout << "Entrer le nombre #"<< i <<", entre 10 et 50: ";
		cin >> nombre;


		while (nombre < 10 || nombre > 50) {
			cout << "Erreur, le nombre entré doit être entre 10 et 50: ";
			cin >> nombre;
			cout << endl;
		}

		if (nombre > lePlusGrand) {
			lePlusGrand = nombre;
		}
	}
	cout << "Le nombre le plus grand est: " << lePlusGrand << endl;

}

int main() {

	setlocale(LC_ALL, "");
	question1();
}

```

# Question 2

À moins de modifier le i dans la boucle (ce qui serait une pratique hasardeuse et peu recommandée), le nombre de tour est le même. Dans la première boucle, on fait des tours où le i vaut 0-1-2-3-4-5-6-7. Dans la 2e, on fait des tours où le i vaut 1-2-3-4-5-6-7-8, ce qui fait 8 tours dans les 2 cas.

# Question 3
b)

```cpp

float convertir(float temperature, char uniteMesure) {
	float reponse = 0;
	if (uniteMesure == 'C') {
		reponse = temperature * 9 / 5 + 32;
	}
	else if (uniteMesure == 'F') {
		reponse = (temperature - 32) * 5 / 9;
	}
	else {
		cout << "L'unité de mesure entré n'est pas valide." << endl;
	}

	return reponse;
}

main(){

	cout << "Température de 100 en Celsius convertie en Fahreinheit: " << convertir(100, 'C') << "Fahreinheit"<< endl;
	cout << "Température de 50 en Fahreinheit convertie en Celsius: " << convertir(50, 'F') << "Celsius" << endl;
}
```

# Question 4

```cpp
	float prix;
	cout << "Veuillez entrer le prix d'un article: ";
	cin >> prix;
	while ( prix >=0 ) {
		cout << "Erreur, le prix doit être positif, veuillez recommencer:";
		cin >> prix;
		if (prix >= 0) {
			cout << "Merci d'avoir corrigé le prix!";
		}
	}
```

# Question 5

a)
```cpp

int nombrePatients=0;

void demanderNom(string& leNom) {
	cout << "Entrer le nom du patient: ";
	cin >> leNom;
    //code pour ajouter 1 au nombre de patients totaux
    nombrePatients++
}

void question5(){

    string nom;
    
    demanderNom(nom);

}
```

b)

```cpp
void question5() {

	string nom;
	for (int i = 1; i <= 3; i++) {
		demanderNom(nom);
		cout << nom << endl;
	}
}
```

c) parce que la variable `leNom` est un paramètre de la fonction demanderNom(), elle est donc locale à cette fonction.

d) oui, elle est globale

# Question 6
a) 
- Réutilisabilité du code
- Modularité (découpage en morceaux)
- Facilité de débogage et de test

b) oui, l'un n'empêche pas l'autre

c) oui, les 2 variables sont différentes quand même, puisqu'elles sont locales à leur bloc de code.

d) non, pas en C++. Pour changer plusieurs valeurs, on peut des tableaux, vecteurs, ou autre. Si on a beaucoup de choses à modifier, on peut aussi passer des paramètres en référence ou morceler en plusieurs sous-fonctions



