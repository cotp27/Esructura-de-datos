/*Determine cuantos numeros primos hay en los N primeros numeros enteros.*/

#include <iostream>
#include "funciones.h"

using namespace std;

int main(){
    //var 
    int N, primos;
    //input
    cout<<"ingresar un entero positivo: ";cin>>N;
    primos= cont_primo(N);

    cout<< primos<< " primos, existen entre 0 y "<<N<<endl;
    //cout<<primo(N); 
    return 0;
}

// enfoque POO -> Publica, privada, protegida
// Fortran 