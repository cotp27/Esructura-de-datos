/* calcular el area de poligonos */

#include <iostream>
#include "poligono.h"

using namespace std;

int main(){
    Poligono p1;

    cout<<"Seleccione el tipo de poligono a ingresar:"<<endl;
    cout<<"(1) cuadrado o rectangulo"<<endl;
    cout<<"(2) triangulo"<<endl;
    cout<<"(3) circulo"<<endl;
    cin>>p1.tipo;

    p1.area(p1.tipo);

    cout<< "El area de la figura tipo ("<<p1.tipo<<") es "<<p1.Area<<endl;

    return 0;  
}