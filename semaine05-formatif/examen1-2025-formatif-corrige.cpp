#include <iostream>
#include <locale.h>
#include <cmath>
#include <regex>

using namespace std;
int main() {
	setlocale(LC_ALL, "");

	cout << "QUESTION 4" << endl << endl;

	const double diametreTerre = 12758;
	const double diametreMars = 6800;
	double resultatSurfacePlanete = 0;
	char planete;
	double pourcentage;

	cout << "Entrez un pourcentage: " << endl;
	cin >> pourcentage;

	cout << "Entrez 'T' pour Terre et 'M' pour mars" << endl;
	cin >> planete;

	if (planete != 'T' && planete != 'M') {
		cout << "Lettre non valide! " << endl << endl;
	}
	else {
		if (planete == 'T') {
			resultatSurfacePlanete = pourcentage / 100 * 4 * 3.1416 * pow(diametreTerre/2, 3)/3 ;
		}
		else {
			resultatSurfacePlanete = 4 * 3.1416 * pow(diametreMars/2, 3)/3 * pourcentage / 100;
		}
		string planeteLong;
		if (planete == 'T') {
			planeteLong = "Terre";
		}
		else if (planete == 'M') {
			planeteLong = "Mars";
		}

		cout << "Si on prend " << pourcentage << "% de la planète " << planeteLong << ", on obtient " << resultatSurfacePlanete << " km carrés" << endl;
		cout << endl << endl;
	}

	system("pause");

	cout << endl << endl;
	cout << "QUESTION 5" << endl << endl;

	int bonisDeBase = 20;
	int bonisFinaux;
	string jourSemaine;
	string montantFacture;
	float montantFactureFloat;
	regex monPattern("[0-9]{1,}[.]{0,1}[0-9]{0,2}");

	cout << "Veuillez entrer le jour de la semaine: ";
	cin>> jourSemaine;

	if (jourSemaine == "samedi" || jourSemaine == "dimanche"){
        cout << "Entrez le montant de la facture: ";
        cin >> montantFacture;

        if (regex_match(montantFacture,monPattern)){
            montantFactureFloat = stof(montantFacture);
            if (montantFactureFloat >= 25 && montantFactureFloat <= 50){
                bonisFinaux = bonisDeBase +10;
            }else if (montantFactureFloat > 50 && montantFactureFloat <= 75){
                bonisFinaux = bonisDeBase +25;
            }else if (montantFactureFloat>75){
                bonisFinaux = bonisDeBase +40;
            }else{
                bonisFinaux = bonisDeBase;
            }
        }else{
            cout << "montant invalide"<<endl;
            bonisFinaux = bonisDeBase;
        }
	}else{
        bonisFinaux = bonisDeBase;
	}
	cout <<"Les bonis finaux sont de "<< bonisFinaux<<" points"<<endl;


//	regex pattern("(a-|b-)[0-9]*[02468]");
//	string monCode = "c-546411689";
//	if (regex_match(monCode, pattern)){
//        cout << "valide";
//	}
}
