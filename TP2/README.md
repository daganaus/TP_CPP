# TP2


## Exo 1 : Compilation séparée
Le main est dans **tp2.exo1.main.cpp** et la fonction qui affiche "compilation réussie" est dans **tp2.exo1.func.cpp**.
Nous avons écrit un makefile qui contient les régles de compilation. Il y a 2 main, ainsi il est nécessaire d'aller choisir lequel des deux vous souhaiter compiler dans le makefile (:7 et : 11)   
Le fichiers **headers.hpp** contient les entêtes et permet de relier le main est le fichier de fonctions.  
Les commandes pour compiler et executer sont : 
```sh
cd /home/daganaus/TP_M1/TP_CPP/TP2
make
./tp2.exo1.exe
```

## Exo 2 : Transmission des arguments
Nous complétons le fichiers de fonctions **tp2.exo1.func.cpp** pour y ajouter la fonction `void test_par_valeur(double arg_recu)` qui affiche la valeur de l'argument et l'adresse de la variable locale.
l'execution nous retourne : 
```
la valeur de la variable d'entrée est : 3.14
l'adresse de la variable d'entrée est : 0x7ffda46241d0
la valeur de l'argument reçu en entrée est : 3.14
la valeur de la variable locale est : 3.14
l'argument reçu a pour adresse : 0x7ffda46241a8
compile correctement
```
Il s'agit bien d'une copie de la valeur de la variable passée en entrée. La fonction stocke cette valeur à une autre adresse :  
`0x7ffda46241a8 != 0x7ffda46241d0`

Nous ajoutons `void test_par_adresse(double* ptr_entree)` qui affiche l'adresse pointée par le pointeur d'entrée ainsi que la valeur stockées à cette adresse. l'execution nous retourne : 

```
l'argument reçu a pour adresse : 0x7ffc51cbdd18
la valeur de l'argument reçu en entrée est : 3.14
l'argument reçu a pour adresse : 0x7ffc51cbdd48
```
On constate que la fonction n'a pas fait de copie de l'argument en entrée. Ainsi, il sera préférable de passer des pointeurs en entrée de fonction pour éviter les copies incontrolées et les accés mémoires erronés.
 
Nous ajoutons `void test_par_reference(double& ref_entree)` qui prend en entrée la reférence des variables du main, ainsi ni pointeurs ni copies sont crées pour manipuler les variable du main avec les fonctions. Cette méthode me semble la plus pratique car elle ne déplace pas les variables que l'on souhaite manipuler :

### Correction du code
Les fonctions `void test_par_reference(double& ref_entree)` et `void test_par_adresse(double* ptr_entree)` ne prennent pas de rvalue en entrée seulement des lvalue car les lvalue font référence à des emplacement mémoire identifiable la où les rvalue sont des variables temporaires qui ne peuvent être assigné qu'à la fonction `void test_par_valeur(double arg_recu)`.
Nous avons proposé une modification qui nous retourne : 
```
la valeur de l'argument reçu en entrée est : 0
la valeur de la variable locale est : 0
l'argument reçu a pour adresse : 0x7ffc03f13a48
apres test_par_valeur 0
adresse de z 0x7ffc03f13a78
la valeur de l'argument reçu en entrée est : 0
l'argument reçu a pour adresse : 0x7ffc03f13a78
apres test_par_adresse 0
la valeur de l'entrée est : 0
l'adresse de l'entrée est : 0x7ffc03f13a78
apres test_par_reference 0
la valeur de l'argument reçu en entrée est : 0
la valeur de la variable locale est : 0
l'argument reçu a pour adresse : 0x7ffc03f13a48
la valeur de l'argument reçu en entrée est : 0
l'argument reçu a pour adresse : 0x7ffc03f13a80
la valeur de l'entrée est : 0
l'adresse de l'entrée est : 0x7ffc03f13a80
```
Il est préférable d'incrémenter par référence et d'afficher par valeur. En effet afficher par valeur nous permet de transformer comme on le souhaite la variable avant affichage sans créer de nouvelles variable, rendant le code plus compact. Tandis qu'incrémenter par référence est plus rapide car on modifie directement la variable globale.


## Exo 3 : 