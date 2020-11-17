/* 1° Dado un numero N , obtener la cantidad de numeros que contiene*/
/* 2° Dado un rango de numeros enteros (5 al 9), obtener la cantidad de numeros
 q contiene*/
/* 3° Obtener la cantidad de numeros multiplos de n entre ]0,N]*/

#include <iostream>
#include "funciones.h"

using namespace std;

int main(){
    //var
    int N,Ni,Nf,n;   //variables globales
    int cifras, cant_num, cant_multiplos;
    
    //input & process 
    cout<<"ingresar un numero entero positivo"<<endl;
    cin>>N;
    cifras = num_cifras(N);  
    cout<<N<<" tiene "<<cifras<<" cifras"<<endl;//1°

    cout<<"ingresar el valor del multiplo"<<endl;
    cin>>n;
    cant_multiplos = num_mul(N,n); 
    cout<<"Existen "<<cant_multiplos<<" multiplos de "<<n<<" en ]0,"<<N<<"]"<<endl;//3°

    cout<<"ingresar un numero inicial"<<endl;
    cin>>Ni;
    cout<<"ingresar un numero final (> inicial)"<<endl;
    cin>>Nf;
    cant_num = num_rango(Ni,Nf); 
    cout<<"Entre "<<Ni<<" y "<<Nf<<" existen "<<cant_num<<" numeros"<<endl;// 2°
   
    return 0;
}