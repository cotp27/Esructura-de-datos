/*Dado un caracter determinar si es una vocal*/

#include <iostream>
#include <string>

using namespace std;

int main(){
    //var
    char caracter;  // a,A,b,c,d,e,f,g
    string  r = "";

    //entrada
    cout<<"Caracter: "<<endl;
    cin>> caracter;

    //proceso
    r = "No es una vocal";

    if (caracter == 'a' || caracter == 'A'){
        r = "Es vocal";
    }

    if (caracter == 'e' || caracter == 'E'){
        r = "Es vocal";
    }

    if (caracter == 'i' || caracter == 'I'){
        r = "Es vocal";
    }

    if (caracter == 'o' || caracter == 'O'){
        r = "Es vocal";
    }

    if (caracter == 'u' || caracter == 'U'){
        r = "Es vocal";
    }

    //salida
    cout<<"El caracter: " << caracter << " " << r<< endl;
    return 0;
}


/* a) determinar si un numero es multiplo de 3 y 5
   b) determinar si un numero es par o impar
   c) dado un numero devolver el doble si es par y el triple si es 
impar
   d) 
*/
