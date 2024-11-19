# Solution struct

```cpp
#include <iostream>
#include <string>
#include <ctime>
#include <clocale>

using namespace std;
//a)
struct T_Voiture {
	string constructeur;
	string modele;
	int annee;
	float prix;
};
//g
void afficher(T_Voiture tableau[], int taille) {
	for (int i = 0; i < taille; i++) {
		cout << "La voiture " << i + 1 << ": " << endl;
		cout << "Constructeur: " << tableau[i].constructeur << endl;
		cout << "Modèle: " << tableau[i].modele << endl;
		cout << "Année: " << tableau[i].annee << endl;
		cout << "Prix: " << tableau[i].prix << "$" << endl;
		cout << endl;
	}
}

//h
float ajouterTaxes(T_Voiture voiture) {
	return voiture.prix*1.15;
}

//i
float moyenneVoitures(T_Voiture tableau[], int taille) {
	float somme = 0.0;
	for (int i = 0; i < taille; i++) {
		somme = somme + tableau[i].prix;
	}
	int moyenne = somme / taille;
	return moyenne;
}
//j
void inflation(T_Voiture voitures[], int taille, float inflation) {
	for (int i = 0; i < taille; i++) {
		voitures[i].prix = voitures[i].prix * (1 + inflation / 100);
	}
}

void afficherSelonAnnee(T_Voiture voitures[], int n) {
	float moyenne = moyenneVoitures(voitures, n);
	for (int i = 0; i < n; i++) {
		if (voitures[i].prix < moyenne) {
			cout << "La voiture " << i + 1 << ": " << endl;
			cout << "Constructeur: " << voitures[i].constructeur << endl;
			cout << "Modèle: " << voitures[i].modele << endl;
		}
		cout << endl;
	}
}

void question1() {
	//b)
	T_Voiture voiture1;
	T_Voiture voiture2;
	T_Voiture voiture3;

	voiture1.constructeur = "Honda";
	voiture1.modele = "accord";
	voiture1.annee = 2012;
	voiture1.prix = 10500;

	voiture2.constructeur = "Mitsubishi";
	voiture2.modele = "lancer";
	voiture2.annee = 2015;
	voiture2.prix = 5905;

	voiture3.constructeur = "Porsche";
	voiture3.modele = "911 Carrera";
	voiture3.annee = 1984;
	voiture3.prix = 179000;
	
	//c)

	float somme = voiture1.prix + voiture2.prix + voiture3.prix;

	//d)
	cout << "Le modèle de la 2e voiture est: " << voiture2.modele << endl;

	//e)
	T_Voiture lesVoitures[] = { voiture1,voiture2,voiture3 };
	
	//f)
	lesVoitures[2].prix = 189000;

	//g)
	int taille = size(lesVoitures);
	afficher(lesVoitures, taille);
	cout << endl;

	//h)
	float prixTaxeIncluse = ajouterTaxes(voiture2);
	cout << "Le prix de la voiture 2, la " << voiture2.constructeur << " " << voiture2.modele << " est " << prixTaxeIncluse<<"$"<<endl;
	cout << endl;

	//i)
	float moyenneVoiture = moyenneVoitures(lesVoitures, taille);
	cout <<"Le prix moyen des voitures est "<< moyenneVoiture <<"$"<<endl;
	cout << endl;

	//j)
	float montant = 4;
	inflation(lesVoitures, taille, montant);
	cout << "Montants après inflation de " << montant << "%" << endl;
	afficher(lesVoitures, taille);
	cout << endl;

	//k)
	cout << "Les voitures qui sont en-dessous du prix moyen sont: " << endl;
	afficherSelonAnnee(lesVoitures, taille);
}

int main() {
	setlocale(LC_ALL, "");
	question1();

	return 0;
}
```