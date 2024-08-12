# Programmation structurée

1. Présentations
2. Plan de cours
3. Introduction à la programmation

<br>
<br>
<br>

# Qu'est-ce qu'un programme?
- c’est d’abord la traduction d’un algorithme écrit en langage universel traduit en un langage informatique.
- c'est la suite d’instructions réfléchies et écrites par le programmeur, que l’ordinateur va exécuter à la lettre pour effectuer une tâche.


Quel type de tâche?
- des calculs mathématiques
- des affichages
- de la réception de données
- du stockage et de l'organisation de données
- des dessins et graphiques
- des mouvements d'objets à l'écran (jeux)
- des connections avec des périphériques
- de l'échange de données
- de la manipulation d'appareils
- etc.

Les instructions sont exécutées systématiquement, exactement comme on écrit notre **code**.
- il faudra prévoir toutes les éventualités
- ne prendre aucune déduction pour acquis
- tenir compte de toutes les étapes 
   - par exemple: pour faire la tâche "mettre de l'essence dans la voiture", il faut penser à enlever le bouchon, prendre le pistolet, peser sur le bouton, mettre le pistolet dans le réservoir, etc. Il ne faut pas oublier de vérifier toutes les étapes, de tout décortiquer et indiquer dans le bon ordre.
   
<br>

# Langage de programmation

Pour lui donner des instructions, il faudra parler en **langage machine**. Depuis des dizaines d'années, les divers langages pour parler à la machine évoluent constamment pour faciliter la communication humain-machine.

- Des centaines de langages existent. Certains sont plus connus que d'autres (C, C++, C#, javascript, Python, etc.). Il existe plusieurs palmarès comme celui-ci: https://www.codeur.com/blog/top-langages-de-programmation/

- On écrit des instructions dans un fichier nommé **fichier source** à l'aide d'un éditeur de texte (ou éditeur de code).
- Les fichiers sources ont une extension (.cpp pour le c++). Donc, on peut avoir un fichier appelé source.cpp et y mettre ses instructions dans un langage de programmation.
- Si on utilise un langage compilé (comme le c++ dans ce cours), on devra **compiler** le code du fichier source (celui-ci sera automatiquement traduit en langage machine que l'ordinateur pourra comprendre en créant un **exécutable** (.exe)).
- Pour que la compilation réussisse, il faut avoir bien suivi la syntaxe du langage sinon il y aura des erreurs de compilation. Un humain peut comprendre un texte avec des fautes de français, mais le compilateur ne peut pas traduire en langage machine s’il reste une seule erreur de syntaxe dans le texte. Alors il faut bien apprendre la syntaxe du langage qu'on utilise.
-  Il est inutile d’apprendre cette syntaxe par cœur pour tous les langages. Il faut cependant avoir une référence disponible pour le langage qu’on utilise et connaître ce que nous permet ce langage. (Cependant, il est bien d’apprendre les instructions de base par cœur au début, cela facilite grandement l’écriture de votre programme. Ce sera plus clair dans votre tête de savoir quelles instructions utiliser pour écrire le programme).
- On ne travaillera pas sur la belle présentation graphique dans le cadre de ce cours, on va se concentrer sur la logique et travailler en mode "console". 


# Traitement séquentiel

- Dans le cadre de ce cours, on apprendra les bases de la programmation dont les instructions sont lues de manière séquentielle. 
    - Le programmeur écrit une séquence d'instructions dans un langage de programmation donné. 
    - L'ordinateur exécute les instructions qu'on lui donne en ordre, du haut vers le bas du fichier, sans réfléchir.
    - Le programmeur s'assure de trouver et corriger les erreurs de syntaxe (l'éditeur de code va beaucoup aider dans ce domaine) et les erreur de logique (plus difficiles à détecter parfois).

# Planifier avant d'écrire
Il est souvent tentant, quand on commence à programmer, de se mettre à écrire du code le plus rapidement possible. Or, il est très payant et facilitant de RÉFLÉCHIR avant d'écrire. Peu importe dans quel domaine on souhaite produire un résultat informatique, on aura grosso modo 6 étapes à respecter:

1. Bien lire est comprendre le problème

    L’énoncé du problème est la première information qui nous est donnée pour établir une solution. C’est notre point de départ. Il est utile ici de réécrire le problème en nos mots ou même de faire un exemple de solution manuelle.

2. Repérer et nommer les informations
   
   On cherche soit les informations déjà données, celles qui seront obtenues par lecture (sous-entendues dans l'énoncé) et les informations qu'on obtiendra par traitement (calculs ou autres)

3. Identifier les traitements (ce qu'il faudra faire)

   À cette étape on doit identifier non seulement les traitements mais aussi les données sur lesquelles ces traitements devront s'effectuer. Exemples de traitements: 
   - obtenir de l'information
   - afficher de l'information
   - calculer quelque chose
   - trier des données
   - etc.

4. Ordonner les traitements et vérifier les entrées/sorties

   S'assurer de savoir dans quel ordre placer les traitements de l'étape précédente (qu'est-ce qui doit être fait avant quoi?).

5. Décortiquer les traitements en instructions

   Prendre chaque traitement et le décortiquer en instructions. Par exemple, pour additionner 30 à un nombre variable (traitement) et l'afficher, on va:
   - déclarer une variable pour le nombre;
   - demander le nombre désiré à l'utilisateur;
   - déclarer une variable pour le calcul;
   - faire le calcul;
   - afficher le calcul; 
   
6. La trace et les jeux de test

   Et finalement, afin de s’assurer de l’exactitude et la robustesse de notre algorithme il est nécessaire d’en effectuer la trace. Faire la trace d’un algorithme signifie effectuer toutes les opérations une à la fois en se comparant à des valeurs de test. À chaque exécution d’une instruction, on en note le résultat et on réfléchit pour être sûr que c'est ce qui était attendu.

Dès l'étape 5, on peut commencer à écrire et constater des manques, des ajouts, des modifications aux étapes précédentes. On verra un exemple dans le module sur les variables. Ce processus semble un peut long pour de petits problèmes simples, mais les problèmes ne resterons pas simples! Il faut aussi penser que même si on a un résultat, il est primordial de vérifier que c'est le bon!