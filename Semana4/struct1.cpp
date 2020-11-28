/* complejos y sus operaciones*/

#include <iostream>
using namespace std;

//las estructuras se colocan antes del main()
struct complejo{
    double real, imag;
    double suma_r,suma_i;
    
    complejo();// constructor
    void sumar(complejo , complejo );
} z1;

complejo::complejo(){
    real=-1; 
    imag=1;
}

void complejo::sumar(complejo num1, complejo num2){
    suma_r= num1.real+num2.real;
    suma_i= num1.imag+num2.imag;    
} 

//-----------------------------------------------------------

complejo suma_complejos(complejo , complejo );

int main(){
   
   cout<<"z1 = "<<z1.real<<"+"<<z1.imag<<"j"<<endl;

   complejo z2,z3, z;  // materializacion <-> objeto 
   z2.real= 1;
   z2.imag= 1.;

   cout<<"z2 = "<<z2.real<<"+"<<z2.imag<<"j"<<endl;

   z3.sumar(z1,z2);
   cout<<"z3 = "<<z3.suma_r<<"+"<<z3.suma_i<<"j"<<endl;

   z = suma_complejos(z1,z2);
   cout<<"z = "<<z.real<<"+"<<z.imag<<"j"<<endl;
   return 0;
}

//definicion
complejo suma_complejos(complejo a, complejo b){
    complejo z4;
    z4.real=a.real+b.real;
    z4.imag=a.imag+b.imag;

    return z4;
}