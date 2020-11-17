/*Estructuras selectivas simple*/

/*if (expresion logica){
    instruccion1;
    instruccion2;
    .
    .
    .
    instruccionN;
}*/

/*Estructuras selectivas doble*/

/*if (expresion logica){
    instruccion1;
    instruccion2;
    .
    .
    .
    instruccionN;
} else{
    instruccion1;
    instruccion2;
    .
    .
    .
    instruccionN;
}*/ 

/*Estructuras selectivas anidadas*/

/*if (expresion logica){
    instruccion1;
    if (expresion logica){
        instruccion2;
    }else{
        instruccion3;
    }
}else{
    if (expresion logica){
        instruccion4;
    }else{
        instruccion5;
    }
}*/

/*1° Determinar si un numero es "positivo", "negativo" o "nulo"*/

#include <iostream>
#include <string>  // son cadenas

using namespace std;

int main(){
    //variables
    int num;
    string tipo;

    //entrada
    cout<<"ingresar un numero"<<endl;
    cin>> num;

    // proceso
    if (num>0){
        tipo = "POSITIVO";
    }
    if (num < 0){
        tipo = "NEGATIVO";
    }
    if (num == 0){
        tipo = "NULO";
    }
    
    // SAlida
    cout<<"Resultado: "<< tipo << endl;

    return 0;
}

/*Ejercicio: hacver el problema con if anidados */
