#include <iostream>
#include <fstream>
#include <string>
#include <clocale>
#include <ctime>
#include <chrono>

using namespace std;

//Ne pas modifier cette fonction
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

//Question 1 (struct)


//Question 2 (calculerMoyenne)


//Question 3 (miseMaximale)


//Question 4 (ajouterMise)


//Question 5 (creerJoueur)
 

//Question 6 (afficher)


//Question 7 (ecrireStats)


int main() {
	setlocale(LC_ALL, "");
	//Question 8a)


	//Question 8b)


	//Question 8c)


	//Question 8d)


	//Question 8e)


	//Question 8f)


	//Question 8g)


	//Question 8h)



	return 0;
}