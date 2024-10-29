# Solution 

```cpp

#include <iostream>
#include <locale.h>
#include <cstdlib> 
#include <time.h> 
#include <string>

using namespace std;

/********Facultatif(défi)*********************/
void verifierCompositionNom(string& mot) {
	bool erreurNum;
	do {
		erreurNum = false;
		for (int i = 0; i < mot.length(); i++) {
			if (isdigit(mot[i])) {
				erreurNum = true;
			}
		}
		if (erreurNum) {
			cout << "On ne peut pas mettre de chiffre dans un prénom...Veuillez recommencer: ";
			getline(cin, mot);
		}

	} while (erreurNum);
}

void ajusterMajuscules(string& mot) {
	mot[0] = toupper(mot[0]);
	for (int i = 1; i < mot.length(); i++) {
		if (mot[i - 1] == ' ' || mot[i - 1] == '-') {
			mot[i] = toupper(mot[i]);
		}
		else {
			mot[i] = tolower(mot[i]);
		}

	}
}
/***********Fin Facultatif*********************/


string demanderNom() {
	string nom;
	cout << "Entrer le nom: ";
	getline(cin, nom);

	while (nom.length() < 2) {
		cout << "Nom trop court. Entrer le nom: ";
		getline(cin, nom);
	}
	/********Facultatif(défi)*********************/
	verifierCompositionNom(nom);
	ajusterMajuscules(nom);
	/***********Fin Facultatif*********************/
	return nom;
}

string demanderPrenom() {
	string prenom;
	bool erreurNum = false;

	cout << "Entrer le prénom: ";
	getline(cin, prenom);

	while (prenom.length() < 2) {
		cout << "Prénom trop court. Entrer le prénom: ";
		getline(cin, prenom);
	}
	/********Facultatif(défi)*********************/
	verifierCompositionNom(prenom);
	ajusterMajuscules(prenom);
	/***********Fin Facultatif*********************/
	return prenom;
}

int demanderAge() {
	int age;
	do {
		cout << "Quel âge avez-vous? ";
		cin >> age;
	} while (age < 0 || age > 120);

	return age;
}

string demanderGroupeSanguin() {
	char groupe;
	char rhesus;
	string groupeComplet;

	cout << "Entrez le groupe sanguin et le rhésus: ";
	cin >> groupe >> rhesus;
	groupe = toupper(groupe);

	while (groupe != 'A' && groupe != 'B' && groupe != 'O') {
		cout << "Le groupe sanguin doit être A, B ou O. Veuillez entrer une lettre valide: ";
		cin >> groupe;
		groupe = toupper(groupe);
	}
	while (rhesus != '+' && rhesus != '-') {
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Le rhésus doit être + ou -. Veuillez réessayer: ";
		cin >> rhesus;
	}
	groupeComplet = string(1, groupe) + string(1, rhesus);
	return groupeComplet;
}

void formulaire() {
	string nomFormulaire;
	string prenomFormulaire;
	int ageFormulaire;
	string groupeSanguinFormulaire;

	nomFormulaire = demanderNom();
	prenomFormulaire = demanderPrenom();
	ageFormulaire = demanderAge();
	groupeSanguinFormulaire = demanderGroupeSanguin();

	cout << "Bonjour " << prenomFormulaire << " " << nomFormulaire << "! Vous avez " << ageFormulaire << " ans et votre groupe sanguin est " << groupeSanguinFormulaire;
}


int main() {
	setlocale(LC_ALL, "");

	formulaire();

	return 0;

}

```