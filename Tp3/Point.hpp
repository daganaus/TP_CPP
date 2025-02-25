#ifndef POINT_HPP
#define POINT_HPP

// Include necessary libraries
#include <iostream>
#include <string>


class Point
{
    private : 
        double x;
        double y;
    public : 
    //les constructeurs
        Point(); //constructeur par defaut
        Point(double x, double y); //constructeur avec parametres
        Point(const Point &p); //constructeur de copie
    //les fonctions membres
        void affiche();
        double getx();
        double gety();
        void setx(double);
        void sety(double);    
};

#endif // POINT_HPP