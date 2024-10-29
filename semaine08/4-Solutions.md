# Solutions

### Question 1 

Identifiez toutes les variables et dites quelles sont leurs portées respectives. 

### Solution
- R est globale, elle est accessible de partout dans le programme, mais pas modifiable (const)
- n est globale, elle est accessible et modifiable de partout dans le programme.
- compteur est globale, elle est accessible et modifiable de partout dans le programme.
- temperature est locale à la fonction calculerVolume(). Lorsqu'elle sera déclarée dans d'autres fonctions, elle sera aussi LOCALE à ces fonctions, ce n'est pas la même température.
- pression est locale aussi, même portée que température.
- volume est locale aussi, même portée que température.
- choix est locale à la fonction main()


### Question 2

La variable `n` est déclarée 2 fois dans le programme. Quelle sera la valeur de `n` quand on calculera le volume du méthane (fonction calculerVolume())?

### Solution
- Initialement, la variable est globale et vaut 4.
- Ensuite, la valeur de n est modifiée dans le main(), elle vaut 6. C'Est le MÊME n à cet endroit.
- ensuite, on DÉCLARE n=5 dans calculerVolume(). c'est alors une variable LOCALE qui a préséance sur la variable globale. Si on voulait mettre la variable globale lors de conflit de noms, on mettrait ::n.


### Question 3

Dans la fonction calculerVolume(), mettre la déclaration de la variable `n` en commentaire. Que sera alors la valeur de `n` utilisée dans les calculs?

### Solution
Puisque la variable locale n=5 n'existera plus, la valeur de n sera de 6 (contenu de la variables globale au moment de passer dans la fonction)

### Question 4

Compléter et modifier le code des fonctions calculerPression() et calculerTemperature() pour qu'elles retournent le résultat de leurs calculs. 

### Solution
```cpp
float calculerPression() {
	//le calcul pour la pression est pression = n*R*temperature/volume
	float temperature;
	float volume;

	cout << "Entrer la température: ";
	cin >> temperature;
	cout << "Entrer le volume: ";
	cin >> volume;

	float pression = n * R * temperature / volume;
	return pression;
}

float calculerTemperature() {
	//le calcul pour la température est temperature = pression*volume/(n*R)
	float pression;
	float volume;

	cout << "Entrer la pression: ";
	cin >> pression;
	cout << "Entrer le volume: ";
	cin >> volume;

	float temperature = pression * volume / (n * R);
	return temperature;
}
```

### Question 5

Modifier le code pour utiliser les retours des fonctions et afficher le résultat dans `le main()`

dans le main():
```cpp
float volume;
float pression;
float temperature;
n = 6;
char choix;

do {
    cout << "On veut calculer certains paramètres concernant le métane (CH4)." << endl;
    cout << "Pour calculer le volume, choisir A" << endl;
    cout << "Pour calculer la pression, choisir B" << endl;
    cout << "Pour calculer la température, choisir C" << endl;
    cout << "Pour arrêter, choisir X"<<endl;
    cin >> choix;

    switch (choix) {
    case 'A':
        //option 1: mettre le retour dans une variable et afficher la variable
        volume = calculerVolume();
        cout << "Le volume est " << volume<< endl;
        break;
    case 'B':
        //option 2: afficher directement le contenu du retour. Pas pratique si on a besoin de la valeur ailleurs.
        cout << "La pression est " << calculerPression() << endl;
        break;
    case 'C':
        temperature = calculerTemperature();
        cout << "La température est " << temperature << endl;
        break;
    case 'X':
        cout << "au revoir!";
        break;
    default:
        cout << "Mauvaise sélection"<<endl;
        break;
    }
} while (choix != 'X');
```

### Question 6

Modifier le code pour que le compteur soit incrémenté à chaque fois qu'un calcul est fait (peu importe quel calcul). 

Mettre ceci dans chaque fonction: compteur = compteur + 1;
Afficher le résultat dans le main(), dans la boucle après le switch.
