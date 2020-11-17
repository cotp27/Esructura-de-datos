/* calcular areas de diferente poligonos
  (cuadrado, rectangulo, triangulo) usando condicionales */

#include <iostream>
#include <math.h>
#include "funciones.h"

using namespace std;

int main(){
  // var
  double l1,l2;
  double area;

  int poligono;

  //input
  cout <<"seleccionar la figura: (1) cuadrado, (2) rectangulo, (3) triangulo"<< endl;
  cin >> poligono;

  //process & output
  if (poligono == 1){
    cout<<"Ingrese el lado del cuadrado = ";cin>> l1;
    cout<<" el area del cuadrado es: "<< l1*l1<<endl;
  } 
  else if (poligono == 2){
    cout<<"Ingrese el lado 1 del rectangulo = "<< endl;
    cin>> l1;
    cout<<"Ingrese el lado 2 del rectangulo = "<< endl;
    cin>> l2;
    cout<<" el area del rectangulo es: "<< l1*l2<<endl;
  }else if(poligono == 3){
    cout<<"Ingrese el lado 1 del trinagulo = "<< endl;
    cin>> l1;
    cout<<"Ingrese la altura relativa al lado 1 = "<< endl;
    cin>> l2;
    cout<<" el area del triangulo es: "<< (l1*l2)/2<<endl;
  }else{
    cout<<" Error "<<endl;
  }

  // aplicando la funcion
  area_poligono(1);
  area_poligono(2);
  area_poligono(3);
  area_poligono(5);

  return 0;
}



