#include <iostream>
#include <fstream>
#include <string>
#include <clocale>
#include <ctime>
#include <chrono>
#include <cstdlib>
#include <cfloat>

using namespace std;

const int NOMBRE_MISES = 3;

struct T_Joueur {
	string nom;
	int numeroSemaine = -1;
	double mises[NOMBRE_MISES] = { 0,0,0 };
};

int semainesDepuisDebutAnnee() {
	// Obtention de la date actuelle
	auto ajd = std::chrono::system_clock::now();
	std::time_t now_time_t = std::chrono::system_clock::to_time_t(ajd);
	struct tm current_time;
	localtime_s(&current_time, &now_time_t);


	int annee = current_time.tm_year + 1900;
	int jourDeLannee = current_time.tm_yday + 1;


	bool estBissextile = (annee % 4 == 0 && (annee % 100 != 0 || annee % 400 == 0));
	int jourDansAnnee;
	if (estBissextile) {
		jourDansAnnee = 366;
	}
	else {
		jourDansAnnee = 365;
	}

	return jourDeLannee / 7;
}



void ajouterMises(T_Joueur& joueur) {
	double reponse;
	char autreMise;
	int taille = size(joueur.mises);

	cout << "Voulez-vous faire une mise? (o ou n): ";
	cin >> autreMise;

	if (autreMise == 'o') {
		joueur.numeroSemaine = semainesDepuisDebutAnnee();
	}
	int i = 0;
	while (i < taille && autreMise == 'o') {
		cout << "Montant de la mise #" << i+1 << " : ";
		cin >> reponse;
		joueur.mises[i] = reponse;
		i++;
		if (i < taille) {
			cout << "Ajouter une autre mise? (o ou n): ";
			cin >> autreMise;
		}

	}
}

double calculerMoyenne(double tableau[], int taille) {
	double moyenne = 0;
	for (int i = 0; i < taille; i++) {
		moyenne += tableau[i];
	}
	moyenne = moyenne / taille;
	return moyenne;
}

double miseMaximale(double tableau[], int taille) {
	double monMax = DBL_MIN;
	for (int i = 0; i < taille; i++) {
		if (tableau[i] > monMax) {
			monMax = tableau[i];
		}
	}
	return monMax;
}

T_Joueur creerJoueur() {
	T_Joueur joueur;
	cout << "********* Nouveau joueur ************" << endl;
	cout << "Quel est le nom du joueur? "<<endl;
	cin >> joueur.nom;
	ajouterMises(joueur);

	return joueur;
}

void afficher(T_Joueur joueur) {
	cout << "*********************" << endl;
	cout << "Nom: " << joueur.nom << endl;
	if (joueur.numeroSemaine != -1) {
		cout << "Semaine en cours: " << joueur.numeroSemaine << endl;
		for (int i = 0; i < size(joueur.mises); i++) {
			cout << "Mise #" << i + 1 << " :" << joueur.mises[i] << endl;
		}
	}
	else {
		cout << "Aucune mise faite à ce jour." << endl;
	}
	cout << endl;
}

// écrire dans un fichier?
bool ecrireStats(T_Joueur joueur[], int taille) {
	string nom_fichier = "StatsJoueurs" + to_string(semainesDepuisDebutAnnee()) + ".txt";
	fstream fichier(nom_fichier, ios::out); // Ouvre le fichier en  criture en mode out
	if (!fichier) {
		cout << "Erreur lors de l'ouverture du fichier." << endl;
		return false;
	}

	for (int i = 0; i < taille; i++) {

		fichier << "Nom du joueur #" << i + 1 << " est: " << joueur[i].nom<<endl;
		fichier << "Pour la semaine #" << joueur[i].numeroSemaine<<endl;
		fichier << "Mise maximale: " << miseMaximale(joueur[i].mises, size(joueur[i].mises)) << endl;

	}

	fichier.close();
	return true;
}


int main() {
	setlocale(LC_ALL, "");

	//Question 8a)

    T_Joueur joueur1;
	joueur1.nom = "Marc";
	joueur1.numeroSemaine = semainesDepuisDebutAnnee();
	joueur1.mises[0] = 34.5;
	joueur1.mises[1] = 44.5;
	joueur1.mises[2] = 58;

	T_Joueur joueur2;
	joueur2.nom = "Julien";
	joueur2.numeroSemaine = semainesDepuisDebutAnnee();
	joueur2.mises[0] = 77;
	joueur2.mises[1] = 17;
	joueur2.mises[2] = 0.5;

	//Question 8b)
    int taille = size(joueur1.mises);
	cout << "La moyenne du joueur 1: " << endl;
	cout << calculerMoyenne(joueur1.mises, taille) << endl;

	//Question 8c)
    T_Joueur joueur3 = creerJoueur();

	//Question 8d)

    T_Joueur mesJoueurs[4] = { joueur1,joueur2,joueur3 };


	//Question 8e)

	//joueur sans mise pour tester
    T_Joueur joueur4;
    joueur4.nom = "Karine";
    joueur4.numeroSemaine = semainesDepuisDebutAnnee();

    mesJoueurs[3] = joueur4;

    for (int i = 0; i < taille; i++){
        afficher(mesJoueurs[i]);
    }

	//Question 8f)

	bool succes = ecrireStats(mesJoueurs, 4);
	if (succes) {
		cout << "Le fichier a été écrit avec succès" << endl;
	}

	//Question 8g)

    joueur1.mises[1] = 19.5;


	//Question 8h)

    joueur1.nom = "Marc-André";

    afficher(joueur1);

	return 0;
}
