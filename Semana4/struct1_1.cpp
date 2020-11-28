/* complejos y sus operaciones*/

#include <iostream>
using namespace std;

#include "complejo.h"

int main(){
   
   cout<<"z1 = "<<z1.real<<"+"<<z1.imag<<"j"<<endl;

   complejo z2,z3,z,z4;  // materializacion <-> objeto 
   z2.real= 1;
   z2.imag= 1.;

   cout<<"z2 = "<<z2.real<<"+"<<z2.imag<<"j"<<endl;

   //z3.sumar(z1,z2);    // z3.atributo   o  z3.metodo()
   //cout<<"z3 = "<<z3.suma_r<<"+"<<z3.suma_i<<"j"<<endl;

   z = suma_complejos(z1,z2);
   cout<<"z = "<<z.real<<"+"<<z.imag<<"j"<<endl;
    //multplicar 2 complejos
   z4= multiplicacion_complejos(z1,z2);
   cout<<"z4 = "<<z4.real<<"+"<<z4.imag<<"j"<<endl;

   return 0;
}