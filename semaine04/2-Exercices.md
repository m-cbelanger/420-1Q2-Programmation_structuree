# Exercices (structure conditionnelle + validation)

## Question 1

Voici un bout de code dans lequel il y a une incohérence. Le but de ce code est de valider que l'entrée de l'utilisateur se situe entre 10 et 20. Si on prend pour acquis que l'entrée sera un nombre (donc l'incohérence n'est pas au niveau du type de valeur entrée), qu'est-ce qui cloche dans ce code? Corrigez-le! Prendre pour acquis que le main et les librairies sont présentes.

```cpp
	float nombre;

	cout << "entrer un nombre entre 10 et 20:" << endl;
	cin >> nombre;

	if (nombre >= 10 || nombre <= 20) {
		cout << "Le nombre entré est bon!"<<endl;
	}
	else {
		cout << "Le nombre entré n'est pas entre 10 et 20" << endl;
	}

```


## Question 2

Si on souhaite ne rien afficher si le nombre est correct (entre 10 et 20), et afficher un message si le nombre n'est pas entre 10 et 20, adaptez le code de la question 1 pour que ça respecte ce comportement. 

## Question 3

Modèle réduit de calculateur de notes: Voici le code pour répondre aux sous-questions qui suivent. Le code fonctionne, mais pourrait être beaucoup mieux.

```cpp
	int noteExamen1, noteExamen2, noteTP;
	string nomEtudiant;
	float moyennePonderee;

	cout << "Veuillez entrer le nom de l'étudiant" << endl;
	cin >> nomEtudiant;

	cout << "Veuillez entrez la note de l'examen 1" << endl;
	cin >> noteExamen1;

	cout << "Veuillez entrez la note de l'examen 2" << endl;
	cin >> noteExamen2;

	cout << "Veuillez entrez la note du TP" << endl;
	cin >> noteTP;

	moyennePonderee = noteExamen1 * 0.35 + noteExamen2 * 0.4 + noteTP * 0.25;
	
	if (moyennePonderee < 60 && moyennePonderee > 0) {
		cout << "L'étudiant " << nomEtudiant << " a eu la note de " << moyennePonderee << ". Il a donc un échec" << endl;
	}
	else if (moyennePonderee >= 60 && (noteExamen1 < 60 || noteExamen2 < 60 || noteTP < 60)) {
		cout << "L'étudiant " << nomEtudiant << " a eu la note de " << moyennePonderee << ". Il a donc une réussite partielle" << endl;
	}
	else if (moyennePonderee >= 60 && noteExamen1 >= 60 && noteExamen2 >= 60 && noteTP >= 60) {
		cout << "L'étudiant " << nomEtudiant << " a eu la note de " << moyennePonderee << ". Il a donc une réussite totale" << endl;
	}
```


1. Que fait ce programme? Vulgariser pour un non-programmeur.
2. Comment optimiser la récupération des notes auprès de l'utilisateur? Pensez DRY.
3. Comment optimiser l'affichage de la sortie à l'utilisateur? Pensez DRY.
4. Enlever les conditions inutiles dans la structure conditionnelle. 


## Question 4

Le mot de passe!

Écrire un petit programme qui demande à l'usager d'entrer un mot de passe entre 7 et 9 caractères. Celui-ci doit contenir seulement des lettres majuscules, minuscules ou des chiffres. Aucune restriction sur l'occurrence de chaque catégorie. Une fois entré, afficher si le mot de passe respecte les règles ou non. Pensez REGEX!
