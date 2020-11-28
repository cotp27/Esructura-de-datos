#include <iostream>
using namespace std;

struct complejo{
    // declarando atributos
    double real, imag;
    //double suma_r,suma_i; // es un error en un uso
    // declarando metodos
    complejo();// constructor
    void sumar(complejo , complejo );
} z1;


// definiendo metodos
complejo::complejo(){   // constructor
    real=-1; 
    imag=1;
}

//void complejo::sumar(complejo num1, complejo num2){
//   suma_r= num1.real+num2.real;
//    suma_i= num1.imag+num2.imag;    
//} 

// funciones con complejos

//definicion
complejo suma_complejos(complejo a, complejo b){
    complejo z4;
    z4.real=a.real+b.real;
    z4.imag=a.imag+b.imag;

    return z4; // z4 es un complejo
}

// funcion multi de complejos
complejo multiplicacion_complejos(complejo a, complejo b){
    complejo z;
    //parte real
    z.real=(a.real*b.real)-(a.imag*b.imag);
    //parte imaginaria
    z.imag=(a.real*b.imag)+(a.imag*b.real);

    return z; // z4 es un complejo
}















