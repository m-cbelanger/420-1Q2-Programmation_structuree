## Question 1

a) Si l'utilisateur entre le chiffre 10: <br>
Les lignes sont soulignées seulement quand la valeur de la variable CHANGE et non le reste du temps.

| ligne | valeur de variableVolatile | (variableVolatile % 4 == 0) |
| ----------- | ----------- |----------- |
| 1 | 12 | - |
| 5 | 10 | - |
| 7 | 4 | - |
| 8 | 4 | `true` |
| 20 | 13 | - |
| 21 | 19 | - |


b) Si l'utilisateur entre le chiffre 20: <br>
Les lignes sont soulignées seulement quand la valeur de la variable CHANGE et non le reste du temps. *Ne pas oublier que la valeur de la variable ne change pas si on l'affiche dans un cout ou bien si on fait une opération mathématique avec, sans la stocker dans une variable.*

| ligne | valeur de variableVolatile | (variableVolatile % 4 == 0) |
| ----------- | ----------- |----------- |
| 1 | 12 | - |
| 5 | 20 | - |
| 7 | 14 | - |
| 8 | 14 | `false` |
| 12 | 42 | - |
| 20 | 13 | - |
| 21 | 19 | - |

c) Si l'utilisateur entre le chiffre 20: <br>
Les lignes sont soulignées seulement quand la valeur de la variable CHANGE et non le reste du temps. *Ne pas oublier que si on souhaite stocker un nombre décimal dans un entier, on doit tronquer les nombres après la virgule.*

| ligne | valeur de variableVolatile | (variableVolatile % 4 == 0) |
| ----------- | ----------- |----------- |
| 1 | 12 | - |
| 5 | 10 | - |
| 7 | 4 | - |
| 8 | 4 | `true` |
| 20 | 13 | - |
| 21 | 19 | - |


d) Parce que la valeur de la variable à la ligne 20 est hardcodée et sera toujours 13, peu importe la valeur précédente de la variableVolatile. La ligne 21 sera aussi toujours identique.


## Question 2

```cpp
	bool estRegulier = true;
	string nomArticle;
	float prixInitial;
	float rabais;
	float prixFinal;

	cout << "Entrez le nom de l'article: " << endl;
	cin >> nomArticle;
	cout << "Entrez le prix de l'article: " << endl;
	cin >> prixInitial;
	cout << "Entrez le rabais applicable: " << endl;
	cin >> rabais;
	cout << "Est-ce que l'article est à prix régulier (0 pour non et 1 pour oui)" << endl; 
	cin >> estRegulier;

	if (estRegulier) {
		prixFinal = prixInitial * rabais / 100 + prixInitial;
		cout << "L'article nommé " << nomArticle << " est à prix régulier. Il coûte initialement " << prixInitial << " et est réduit de " << rabais << "%. Il coûte maintenant " << prixFinal << "$." << endl;
	}
	else {
		prixFinal = prixInitial * rabais / 2 / 100 + prixInitial;

		cout << "L'article nommé " << nomArticle << " est à prix déjà réduit. Il coûte initialement " << prixInitial << " et est réduit de " << rabais / 2 << "%. Il coûte maintenant " << prixFinal << "$."<< endl;
	}

```

## Question 3

a) parce que la valeur de uneLettre ne pourra jamais être en même temps équivalente à 'M' ET équivalente à 'K' et équivalente à 'P'. Si maLettre == 'M' la valeur de la condition du if sera:

```cpp
(true && false && false)   
// qui devient
(false)
// donc on n'entre pas dans le if
```
Il aurait fallu mettre l'opérateur | | pour que ça fonctionne.

b) Puisqu'on utilise les opérateurs >, <, >= ou <=, les nombres qui rendront la condition `monNombre > 0` vraie, vont de 1 à l'infini... Ceux qui rendront la condition `monNombre < 100` vraie vont de -infini à 99. Donc n'importe quel nombre rendra au moins une des conditions vraie. Avec un | |, on a une valeur vraie dès qu'AU MOINS UNE des conditions est vraie. La condition sera donc toujours vraie et ne fait aucun filtre (et donc le if est inutile).

c) Oui. Par exemple, les nombre de 9 à 17 inclusivement feront un comportement différent dans les 2 codes. Dans le premier code,il y a une seule structure conditionnelle, tandis que dans le bloc 2, il y a 2 structures indépendantes. Si on entre monNombre = 12, par exemple, on verra seulement "couleur bleu" s'afficher dans le code 1 et on verra "couleur bleue" et "couleur verte" dans le code 2.

il serait intéressant de tester ce code en donnant tour à tour les valeurs suivantes à monNombre: 5, 9, 12, 18, 25. (de cette manière, on a des valeurs en bas de 9, égales à 9, entre 9 et 18, égale à 18, et supérieur à 18)

d) Toujours... peu importe le mot affecté dans la variable monTexte. La condition n'est pas bien écrite, il faut que les expressions entre chaque symbole OU (| |) soit une comparaison avec la variable monTexte.

```cpp
string monTexte;
...
cin>> monTexte;
...
if (monTexte == "o" || monTexte == "O" || monTexte == "oui" || monTexte == "Oui" || monTexte == "OUI"){
	cout << "Vous avez accepté" << endl;
} 
...
```

## Question 4

```cpp
a > 4   devient   !(a > 4)  ou bien  a <= 4
b <= a + 6  devient  !(b <= a + 6 )  ou bien  b > a + 6 
a % 2 == 0  devient  !(a % 2 == 0 )  ou bien  a % 2 != 0
a != 5  devient  !(a != 5)  ou bien  a == 5 
c == a / b  devient  !(c == a / b)  ou bien  c != a / b
a + b >= c   devient  !(a + b >= c)  ou bien  a + b > c
```

## Question 5
La correction sera faite en classe! 