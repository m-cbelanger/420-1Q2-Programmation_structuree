# Logique booléenne pour valider les entrées

Lorsque l'utilisateur saisit des entrées, il ne faut pas se fier que les entrées seront valides. Même si on explique à l'utilisateur comment utiliser son application, on n'est pas à l'abri d'une erreur.

## Valider une entrée numérique

Si on reprend l'application qui calcule le salaire brut d'une personne, on peut vouloir vérifier que les heures entrées sont valides ou plausibles. On peut estimer à l'extrême. Une personne peut faire entre 0 et 168 heures dans une semaine (il y a 168 heures dans une semaine). Donc, après l'entrée de la valeur par le cin, on peut valider que l'entrée est bonne et donner du feedback à l'utilisateur.

```cpp




```




## Exemple: la date de naissance

Si on demande à l'utilisateur d'entrer son année de naissance suivie de son mois et son jour de naissance, on voudra vérifier quelques détails:

- Est-ce que l'année de naissance est plausible? (L'humain ayant vécu le plus vieux a vécu 122 ans... On peut donc supposer que les humains ne vivent pas plus de 130 ans.)

```cpp
int annee, mois,jour;

cout << "Entrez votre année de naissance" <<endl
```

### Gérer la validité de la date
On peut vouloir vérifier que la date entrée est valide. Si on prend le temps d'y réfléchir, on a plusieurs choses à vérifier:
- Les années doivent être entre 1900 (environ) et aujourd'hui.
- Les mois doivent être entre 1 et 12 inclusivement.
- Si on a un petit mois (mois de 30 jours), on doit s'assurer qu'on n'a pas 31 comme journée
- Si on a le mois de février, on doit s'assurer que les jours soient de 28 ou moins sauf si on a une année bissextile.
- Une année est bissextile si elle est divisible par 4, mais pas par 100, sauf si elle est divisible par 400. Les années 2000, 2400, 2800 sont bissextiles, mais pas 1900, 2100, 2300.

Exercice: 

Décortiquons le problème pour faire la tâche suivante: Demander les 3 informations à l'usager (son année de naissance, son mois de naissance et son jour de naissance) et renvoyer le message si oui ou non, la date entrée est valide. Pensez aussi dans quel ordre demander les informations et à quel moment les valider.

*défi*: fouillez comment obtenir l'année en cours au lieu d'hard coder l'année (2024).


