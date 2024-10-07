# Solution do..while

## Question 1

```cpp

char choix;
double num1, num2, resultat;
char continuer;

do {
    std::cout << "Choisissez une operation:\n";
    std::cout << "1. Addition\n";
    std::cout << "2. Soustraction\n";
    std::cout << "3. Multiplication\n";
    std::cout << "4. Division\n";
    std::cout << "Entrez votre choix: ";
    std::cin >> choix;

    std::cout << "Entrez le premier nombre: ";
    std::cin >> num1;
    std::cout << "Entrez le deuxieme nombre: ";
    std::cin >> num2;

    switch (choix) {
    case '1':
        resultat = num1 + num2;
        std::cout << "Le resultat est: " << resultat << "\n";
        break;
    case '2':
        resultat = num1 - num2;
        std::cout << "Le resultat est: " << resultat << "\n";
        break;
    case '3':
        resultat = num1 * num2;
        std::cout << "Le resultat est: " << resultat << "\n";
        break;
    case '4':
        if (num2 != 0) {
            resultat = num1 / num2;
            std::cout << "Le resultat est: " << resultat << "\n";
        }
        else {
            std::cout << "Erreur: Division par zero.\n";
        }
        break;
    default:
        std::cout << "Choix invalide.\n";
    }

    std::cout << "Voulez-vous faire un autre calcul? (o/n): ";
    std::cin >> continuer;


} while (continuer == 'o' || continuer == 'O');
```

## Question 3

```cpp
int n = 5;
int nombreChoisi;

do {
    cout << "Veuillez choisir un nombre au hasard, de 0 à " << n << " : ";
    cin >> nombreChoisi;
    srand(time(0));
    int nombreAleatoire = rand() % (n+1);
    

    if (nombreAleatoire == nombreChoisi) {
        cout << "WOW, vous avez gagné!!!" << endl;
    }
    else {
        cout << "Pas le bon nombre" << endl;
    }

    cout << "Voulez-vous rejouer?(o ou n)";
    cin >> continuer;

} while (continuer == 'o' || continuer == 'O');
cout << "Aurevoir!" << endl;
```

## Question 4

```cpp
string mot;
srand(time(0));
do {
	cout << "Roche, papier ou ciseau? Entrer le mot de votre choix: ";
	cin >> mot;
	transform(mot.begin(), mot.end(), mot.begin(), ::toupper);

	int nombreAleatoire = rand() % 3;
	string motOrdi;

	switch (nombreAleatoire) {
	case 0:
		motOrdi = "ROCHE";
		break;
	case 1:
		motOrdi = "PAPIER";
		break;
	case 2:
		motOrdi = "CISEAU";
		break;
	default:
		std:: cout << "erreur de nombre aléatoire" << endl;
		break;
	}


	if (mot == motOrdi) {
		cout << "Match null" << endl;
	}
	else if (mot == "ROCHE" && motOrdi == "PAPIER" || mot == "PAPIER" && motOrdi == "CISEAU" || mot == "CISEAU" && motOrdi == "ROCHE") {
		cout << "Défaite" << endl;
	}
	else if (motOrdi == "ROCHE" && mot == "PAPIER" || motOrdi == "PAPIER" && mot == "CISEAU" || motOrdi == "CISEAU" && mot == "ROCHE") {
		cout << "Victoire" << endl;
	}


	std::cout << "Voulez-vous rejouer?(o ou n)";
	cin >> continuer;

} while (continuer == 'o' || continuer == 'O');
cout << "Aurevoir!";
```