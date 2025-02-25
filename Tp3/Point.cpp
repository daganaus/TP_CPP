#include <iostream>
#include "Point.hpp"
using namespace std;



//les constructeurs :
    Point::Point(){
        x = 0;
        y = 0;
    } //constructeur par defaut

    Point::Point(double x_init, double y_init){
        x = x_init;
        y = y_init;
    } //constructeur avec parametres
    
    Point::Point(const Point &p){
        x = p.x;
        y = p.y;
    } //constructeur de copie


//les fonctions membres
    
    void Point::affiche(){
        cout << "la coordonnée x est : " << x << endl;
        cout << "la coordonnée y est : " << y << endl;
        cout << "le point est stockée à l'adresse : " << this << endl;
    } //fonction membre d'affichage    
    
    double Point::getx(){
        return x;
    } //fonction membre de récupération de x

    double Point::gety(){
        return y;
    } //fonction membre de récupération de y

    void Point::setx(double x_set){
        x = x_set;
    }

    void Point::sety(double y_set){
        y = y_set;
    }