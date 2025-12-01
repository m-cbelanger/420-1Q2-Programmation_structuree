
#include <iostream>
#include <string>
#include <clocale>
#include <fstream>

using namespace std;

struct T_Article {
	int id = -1;
	string nom = "";
	int quantite = 0;
	float prix = 0;
};


void afficherArticle(T_Article tableau[], int taille) {
	cout << "************************************" << endl;
	cout << "Liste d'articles: " << endl;

	for (int i = 0; i < taille; i++) {
		if (tableau[i].nom != "") {
			cout << tableau[i].id << " " << tableau[i].nom << ", " << tableau[i].prix << "$, il en rest " << tableau[i].quantite << " en inventaire." << endl;
		}

	}
}


T_Article creerArticle() {
	T_Article monArticle;

	cout << "Quel est le numéro de l'article?" << endl;
	cin >> monArticle.id;

	string leNom;
	do {
		cout << "Quel est le nom de l'article? " << endl;
		cin >> leNom;
	} while (leNom == "");
	monArticle.nom = leNom;

	float lePrix;
	do {
		cout << "Quel est le prix? " << endl;
		cin >> lePrix;
	} while (lePrix <= 0);

	monArticle.prix = lePrix;

	float laQuantite;
	do {
		cout << "Quel est la quantité en inventaire? " << endl;
		cin >> laQuantite;
	} while (laQuantite < 0);

	monArticle.quantite = laQuantite;

	return monArticle;
}

void ajouterArticle(T_Article tableau[], int taille, T_Article article) {
	bool trouve = false;
	for (int i = 0; i < taille; i++) {
		if (tableau[i].id == -1 && trouve == false) {
			tableau[i] = article;
			trouve = true;
		}
	}
}

int rechercherArticle(T_Article tableau[], int taille, string mot) {
	int quantite =0;
	for (int i = 0; i < taille; i++) {
		if (tableau[i].nom == mot) {
			quantite = tableau[i].quantite;
		}
	}
	return quantite;
}

int rechercherArticle(T_Article tableau[], int taille, int id) {
	int quantite = 0;
	for (int i = 0; i < taille; i++) {
		if (tableau[i].id == id) {
			quantite = tableau[i].quantite;
		}
	}
	return quantite;
}

float calculerValeurStock(T_Article tab[], int taille) {
	float stock = 0;
	for (int i = 0; i < taille; i++) {
		if (tab[i].id != -1) {
			stock += tab[i].quantite * tab[i].prix;
		}
	}
	return stock;
}

bool vendreArticle(T_Article tab[], int taille,string nom, int quantite) {
	bool vente = true;
	for (int i = 0; i < taille; i++) {
		if (tab[i].nom == nom && tab[i].quantite >= quantite) {
			tab[i].quantite = tab[i].quantite - quantite;
			return true;
		}
		else {
			return false;
		}
	}
}

void creerRapport(T_Article tab[], int taille) {
	fstream fichier;
	fichier.open("inventaire.txt", ios::out);

	if (!fichier) {
		cout << "Erreur lors de l'ouverture" << endl;
		exit(1);
	}

	fichier << "************************************" << endl;
	fichier << "Liste d'articles: " << endl;

	for (int i = 0; i < taille; i++) {
		if (tab[i].nom != "") {
			fichier << tab[i].id << " " << tab[i].nom << ", " << tab[i].prix << "$, il en reste " << tab[i].quantite << " en inventaire." << endl;
		}

	}

	fichier.close();
}

bool lireFichier(T_Article tab[], int taille) {
	fstream fichier;
	fichier.open("articles.txt", ios::in);

	if (!fichier) {
		cout << "Erreur lors de l'ouverture" << endl;
		return false;
	}

	int id;
	string nom;
	int qte;
	float prix;
	while (fichier >> id >> nom >> qte >> prix) {
		T_Article monArticle;
		monArticle.id = id;
		monArticle.nom = nom;
		monArticle.quantite = qte;
		monArticle.prix = prix;
		ajouterArticle(tab, taille, monArticle);
	}

	if (fichier.fail() && !fichier.eof()) {
		cout << "erreur de variables";
		return false;
	}

	fichier.close();
	return true;
}

int main() {
	setlocale(LC_ALL, "");
	//test de la fonction afficher article
	T_Article art1 = { 1,"tablette",5,567.56 };
	T_Article art2 = { 2,"micro-ondes",1,123.54 };

	T_Article inventaire[10];
	inventaire[0] = art1;
	inventaire[1] = art2;
	int taille = size(inventaire);

	afficherArticle(inventaire, taille);

	cout << "Retour de la fonction rechercherArticle "<< rechercherArticle(inventaire, taille, "television");
	cout << endl;
	cout << "Retour de la fonction rechercherArticle " << rechercherArticle(inventaire, taille, "table");
	cout << endl;
	T_Article art3 = creerArticle();
	ajouterArticle(inventaire, taille, art3);
	afficherArticle(inventaire, taille);
	cout << "Calculer valeur stock: "<< calculerValeurStock(inventaire, taille) <<endl;
	cout << "vendre 3 télé: " << vendreArticle(inventaire, taille, "television", 3) << endl;
	cout << "vendre 3 télé: " << vendreArticle(inventaire, taille, "television", 3) << endl;
	afficherArticle(inventaire, taille);

	creerRapport(inventaire, taille);
	afficherArticle(inventaire, taille);
	lireFichier(inventaire, taille);
	afficherArticle(inventaire, taille);

	return 0;
}
