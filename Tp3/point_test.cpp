#include "Point.hpp"
#include <iostream>
using namespace std;

int main(){
    Point p_default;
    p_default.affiche();

    Point p_param(1.0, 2.0);
    p_param.affiche();

    Point p_copy(p_param);
    p_copy.affiche();

    p_default.setx(p_param.getx());
    p_default.sety(p_param.gety());

    p_default.affiche();
    return 0;
}