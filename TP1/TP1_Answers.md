# TP1 Answers

## 1 Les conditions, opérateurs logiques

### 1. Quelle est la différence entre les opérateurs = et == ?
**Answer:**  
x=y fait prendre à x la value de y
x==y retourne un booléen ( true si x=y)


### 2. Quel résultat donne le programme ?

**Answer:**  
Il affiche vrai car x=y est un entier =! de 0 donc la fct if rentre dans le bloc car il prend pour true son argument.
On initialise à 0 x et y et le programme affiche faux car 0 est vu comme le booléen false dans if().

### 3.Pourquoi le compilateur accepte cette construction qui a priori semble incorrecte ?
Le compilateur l'accepte car il n'y a pas d'erreur de syntaxe, puisque les booléen sont encodé comme 0 ou 1, le compilateur converti automatiquement les types

## 2. Boucles

### Ex2 : Écrire trois programmes qui comptent de 0 à 10 en utilisant les boucles for, while et do...while


## 3. Pointeurs et Tableaux

### EX3

#### 1. 
**Answer:**
*ptr représente la valeur située à l'adresse pointée par ptr
&ptr représente la référence de ptr, l'adresse de ptr
*&ptr représente la valeur pointé par la réf de ptr donc l'adresse pointé par ptr

#### 2. 
**Answer:**
*ptr+1 est équivalent à tab[1] *tab+1 *(tab+1) ou encore *(ptr+1) qui rpz tous le é élement du tableau tab
la ou (*tab)+1 rpz le 2e élement du tableau auquel on a ajouté 1
## Conclusion
Summarize your findings and conclusions.

## References
1. List any references or sources used.