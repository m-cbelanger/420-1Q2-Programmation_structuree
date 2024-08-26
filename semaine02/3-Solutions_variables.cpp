#include <iostream>
#include <locale.h>

using namespace std;

int main() {
	setlocale(LC_ALL, "");
	//question 1
	
	float heures = 32;
	float tauxHoraire = 50.5;
	float salaire = heures * tauxHoraire;

	cout << "Si on fait " << heures << " heures de travail à un taux de " << tauxHoraire << " $/heure, on fera un salaire net de " << salaire << "$" << endl;

	//question 2
	
	int x = 8;
	int y = 5;

	cout << "AVANT: x = " << x << " et y = " << y << endl;

	int temp = x;
	x = y;
	y = temp;

	cout << "APRÈS: x = " << x << " et y = " << y << endl;
	 
	//question 3 a)
	
	int b = 5;
	float k = 3.7;
	char c = 'A';

	b = b + 100; // b vaut 105
	k = k * 2; // y vaut 7.4
	c = b; // c vaut le char # 105

	cout << "Question 3a) b = " << b << ", y = "<< y << ", c = " << c << endl;

	//question 3 b)
	int n = 3;
	double z = 4.5;
	char lettre = 'B';

	z = n / 2;
	n = z * 10;
	lettre = lettre + n;

	cout << "Question 3b) n = " << n << ", z = " << z << ", lettre = " << lettre << endl;

	//question 3 c)
	float f = 3.14;
	int i = 1;
	double d = 2.718;

	f = f * i;
	d = f + d;
	i = d;

	cout << "Question 3c) f = " << f << ", d = " << d << ", i = " << i << endl;

	//question 4
	
	int nombre;
	int calcul;
	cout << "Entrer le nombre pour lequel vous voulez la somme." << endl;
	cin >> nombre;

	calcul = nombre * (nombre - 1) / 2;

	cout << "La somme des nombres de 1 à " << nombre << " est " << calcul << "."<< endl;


	//question 5
	
	const int DIAMETRE_TERRE = 12757;
	const int DIAMETRE_MARS = 6800;
	const int DIAMETRE_JUPITER = 139800;
	const float PI = 3.1416;

	float rayon_terre = DIAMETRE_TERRE / 2;
	float rayon_mars = DIAMETRE_MARS / 2;
	float rayon_jupiter = DIAMETRE_JUPITER / 2;

	float vol_terre = 4 * PI * pow(rayon_terre, 3) / 3;
	float vol_mars = 4 * PI * pow(rayon_mars, 3) / 3;
	float vol_jupiter = 4 * PI * pow(rayon_jupiter, 3) / 3;

	cout << "La Terre: diamètre: " << DIAMETRE_TERRE << " km, le rayon: " << rayon_terre << " km, et le volume: " << round(vol_terre) << " km cube." << endl;
	cout << "Mars: diamètre: " << DIAMETRE_MARS << " km, le rayon: " << rayon_mars << " km, et le volume: " << vol_mars << " km cube." << endl;
	cout << "Jupiter: diamètre: " << DIAMETRE_JUPITER << " km, le rayon: " << rayon_jupiter << " km, et le volume: " << vol_jupiter << " km cube." << endl;

	//question 6
	
	const float TAXES = 14.975;

	float montant;
	cout << "Entrer le montant du produit: " << endl;
	cin >> montant;

	float totalTaxeIn = montant * (100 + TAXES) / 100;
	cout << "le total est " << totalTaxeIn << endl;
	
	//question 7
	int premier;
	int deuxieme;

	cout << "Entrer 2 nombres pour lesquels vous obtiendrez la somme, la différence, le produit et le quotient." << endl;
	cin >> premier >> deuxieme;
	int somme = premier + deuxieme;
	int diff = premier - deuxieme;
	float prod = premier * deuxieme;
	float quot = premier / deuxieme;

	cout << "Avec les 2 nombres fournis qui sont " << premier << " et " << deuxieme << ", voici les 4 calculs:" << endl;
	cout << "La somme de " << premier << " et " << deuxieme << " est " << somme<< endl;
	cout << "La différence de " << premier << " et " << deuxieme << " est " << diff << endl;
	cout << "Le produit de " << premier << " et " << deuxieme << " est " << prod << endl;
	cout << "Le quotient de " << premier << " et " << deuxieme << " est " << quot << endl;

	// question 8
	int secondesInitiales;
	cout << "Entrer un nombre entier de secondes:" << endl;
	cin >> secondesInitiales;

	int annees = secondesInitiales / (60 * 60 * 24 * 365);
	int reste = secondesInitiales % (60 * 60 * 24 * 365);

	int jours = reste / (60 * 60 * 24);
	reste = reste % (60 * 60 * 24);

	heures = reste / (60 * 60);
	reste = reste % (60 * 60);

	int minutes = reste / 60;
	reste = reste % 60;

	cout << "Dans " << secondesInitiales << " secondes il y a " << annees << " ans, " << jours << " jours, " << heures << " heures, " << minutes << " minutes et " << reste << " secondes." << endl;
}


