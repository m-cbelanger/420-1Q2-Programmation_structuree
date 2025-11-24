# Utilisation de fichiers externes

En programmation, un fichier est une structure qui permet de stocker des données sur le disque de manière permanente, même après l'exécution du programme. En C++, les fichiers sont utilisés pour lire des données depuis un fichier (lecture) ou écrire des données dans un fichier (écriture).


## Ouvrir et fermer un fichier

La librairie nécessaire à gérer les flux d'entrée et sortie avec des fichiers est fstream

```cpp
#include <fstream>
```

Pour ouvrir un fichier, on déclare une variable du nom de notre choix. On utilise `fichier` pour l'exemple. On a aussi besoin de spécifier si on ouvre en lecture, écriture ou écriture à la fin du fichier. On passe l'un de ces arguments à la fonction open, en 2e 


|Mode  |	Description|
|------|-------|
|ios : : in |	Lecture seule|
|ios : : out |	Écriture seule (écrase le contenu du fichier existant)|
|ios : : app |	Ajout à la fin sans écraser le contenu|



Fabriquons un fichier texte nommé mesProfs.txt, enregistré au même endroit que les fichiers du projet, dans lequel on écrira ceci:

```
Marie-Christine Bélanger
Mathieu St-Yves
Marco Guilemette
Frédéric Monchamp
```


```cpp
bool ouvrirFichier(){
	fstream fichier; // déclarer un nom de fichier en écriture ou lecture
	fichier.open("mesProfs.txt", ios::in); //nom du fichier à ouvrir et le mode

	// message d'erreur pour le cas où on n'arrive pas à ouvrir le fichier
	if (!fichier) {
		cout << "Erreur : Impossible d'ouvrir le fichier." << endl;
		return false; //on est dans une fonction qu retourne un booléen, on retourne faux si on passe ici. Fin de la fonction.
	}

	//******************************************************************
	// ce qu'on doit faire avec les données du fichier sont codées ici
	//******************************************************************

	fichier.close();
	return true; // Si tout à bien été, on retourne true.
}

```

## Lire un fichier

- Lecture ligne par ligne : Utilisez std::getline.
- Lecture mot par mot : Utilisez fichier >> mot, comme un cin


```cpp
bool lireFichierParLigne() {
	fstream fichier; 
	fichier.open("mesProfs.txt", ios::in); 

    if (!fichier) {
		cout << "Erreur : Impossible d'ouvrir le fichier." << endl;
		return false; 
	}

    // ici on souhaite lire les lignes dans le fichier
	string ligne;
	while (getline(fichier, ligne)) { // Lit le fichier ligne par ligne
		cout << ligne << endl; //afficher les lignes en console
	}

	fichier.close();
	return true; 
}
```

```cpp
bool lireFichierParMot() {
	fstream fichier; 
	fichier.open("monFichier.txt", ios::in); 

    if (!fichier) {
		cout << "Erreur : Impossible d'ouvrir le fichier." << endl;
		return false; 
	}

    // ici on souhaite lire les lignes dans le fichier
	string mot;
	while (fichier >> mot) { // Lit le fichier mot par mot
		cout << mot << endl; //afficher les mots en console
	}

	fichier.close();
	return true; 
}
```

## Lecture de différents types de données

Si on a un fichier structuré et qu'on a divers types de valeurs à l'intérieur, on peut récupérer les éléments dans des variables différentes. Prenons le fichier qui contient les données ci-dessous dans un fichier nommé fichierDivers.txt:

```
42 Alice 3.14
23 Bob 2.71
```

pour lire ces données dans leur type respectifs:

```cpp
bool lireFichierDiverTypes(){
	fstream fichier;
	fichier.open("fichierDivers.txt", ios::in);

	if (!fichier) {
		cout << "Erreur : Impossible d'ouvrir le fichier." << endl;
		return false;
	}

	int nombre;
	string mot;
	float valeur;
	while (fichier >> nombre >> mot >> valeur) { 
		cout << "nombre: " << nombre << endl;
		cout << "mot: " << mot << endl;
		cout << "valeur: "<< valeur << endl; 
	}

	// Si on a une erreur (par exemple des données du mauvais type), on affiche un message
	if (fichier.fail() && !fichier.eof()) {
		cout << "Erreur de lecture dans le fichier."<< endl;
		return false;
	}

	fichier.close();
	return true;

}

```



Si on souhaite que la fonction arrête complètement quand le fichier ne s'ouvre pas, on peut utiliser la commande exit(1) à la place de return, et mettre la fonction void.

## Écrire dans un fichier

- Écriture de texte : Utilisez l’opérateur <<, comme un cout

Pour écrire dans un fichier, on doit ouvrir le fichier, choisir le mode d'édition de celui-ci, faire des ajout si on le souhaite, et refermer le fichier. On écrit en remplaçant le cout par le nom de l'endroit où on veut écrire, ici, la variable fichier de type fstream. On peut agir comme on le ferait avec le cout, sauf que les iront dans le fichier.

```cpp
bool ecrireFichier() {
	fstream fichier("fichierEcriture.txt",ios::out); // Ouvre le fichier en écriture en mode out
	if (!fichier) {
		cout << "Erreur lors de l'ouverture du fichier." << endl;
		return false; 
	}

	fichier << "Bonjour, ceci est une ligne de texte." << std::endl;
	fichier << "Ligne suivante dans le fichier." << std::endl;

	fichier.close();
	return true;
}
```

Si on veut écrire à la fin du fichier plutôt que de remplacer le contenu, on utilise ios::app à la place de ios::out.

## Fichier passé à une fonction

Si un fichier est ouvert et qu'on souhaite le passer à une fonction, on peut le faire. Le fichier est un objet de type fstream. 

## Exemple

```cpp
void ajouterEnTete(fstream& monFichier) {
	monFichier << "En-tête ajoutée par une fonction!" << endl;
}

bool ecrireFichier2() {
	fstream fichier("fichierEcriture.txt", ios::out); 
	if (!fichier) {
		cout << "Erreur lors de l'ouverture du fichier." << endl;
		return false; 
	}
	//note importante: pour que ça marche, le fichier était déjà ouvert!
	ajouterEnTete(fichier); //appel à la fonction en passant le paramètre de type fstream
	fichier << "Bonjour, ceci est une ligne de texte." << endl;
	fichier << "Ligne suivante dans le fichier." << endl;

	fichier.close(); 
	return true;
}
```


## Exercice en classe

Créer un fichier test.txt (avec l'application bloc note ou autre). Y écrire ceci:

```cpp
120550$ 
59666$ 
156221$
98770$ 
69211$ 
110455$ 
```

Faire une fonction *lireFichier* qui lit le fichier et qui arrête le programme s'il y a une erreur de lecture. Lors de la lecture, il faut mettre chaque ligne de string dans un tableau de string passé en paramètres. 

Ensuite, faire une fonction *generaliser* qui prend le même tableau de string et qui modifie son contenu comme suit: Si le mot est de longueur 7 et que le premier caractère est un 1, on remplace la chaine par "Dans les 100K" et sinon, on remplace par "En dessous de 100K". On va confier le traitement de la vérification de la chaîne de caractère à une autre fonction nommée *verifierTrancheSalaire*

Ensuite, écrire le contenu du tableau dans un fichier nommé test2.txt

## Solution (sans *verifierTrancheSalaire*)

```cpp
void lireFichier(string tableau[],int taille) {
	fstream fichier;
	fichier.open("test.txt", ios::in);

	if (!fichier) {
		cout << "Erreur : Impossible d'ouvrir le fichier." << endl;
		exit(1);
	}
	string ligne;
	int i = 0;
	while (getline(fichier, ligne) && i < taille) { 
		tableau[i] = ligne;
		i++;
	}
	fichier.close();
}

void generaliser(string tableau[],int taille) {
	for (int i = 0; i < taille; i++) {
		if (tableau[i].length() == 7 && tableau[i][0] == '1') {
			tableau[i] = "dans les 100K";
		}
		else {
			tableau[i] = "en dessous de 100K";
		}

		//string chaine = tableau[i];
		//if (chaine.length() == 7 && chaine[0] == '1') {
		//	tableau[i] = "dans les 100K";
		//}
		//else {
		//	tableau[i] = "en dessous de 100K";
		//}
	}
}

void ecrireFichier(string tableau[], int taille) {
	fstream fichier;
	fichier.open("test.txt", ios::app); // Ouvre le fichier en écriture en mode out
	if (!fichier) {
		cout << "Erreur lors de l'ouverture du fichier." << endl;
		exit(1);
	}

	for (int i = 0; i < taille; i++) {
		fichier << tableau[i];
	}

	fichier.close();
}

int main() {

	string salaires[6];
	int taille = size(salaires);
	lireFichier(salaires, taille);
	generaliser(salaires, taille);
	ecrireFichier(salaires, taille);

	return 0;
}
```

## Solution (avec *verifierTrancheSalaire*)

Tout reste identique, sauf la fonction généraliser et l'ajout de la fonction vérifierTrancheSalaire:

```cpp
bool verifierTrancheSalaire(string chaine) {
	if (chaine.length() == 7 && chaine[0] == '1') {
		return true;
	}
	return false;
}

void generaliser(string tableau[], int taille) {
	for (int i = 0; i<taille; i++){
		if (verifierTrancheSalaire(tableau[i])) {
			tableau[i] = "dans les 100K";
		}
		else {
			tableau[i] = "en dessous de 100K";
		}
	}
}
```