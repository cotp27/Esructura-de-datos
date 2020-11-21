/* ingrese 12 numeros en un arreglo bidimensional de 4x3, y 
obtenga la suma de cada columna */

#include <iostream>
#include <string>

using namespace std;

int main(){

    int num12[4][3]; 
    int suma1=0, suma2=0, suma3=0;

    // input
    cout<<"ingrese el numero 1: "<<endl;cin>>num12[0][0];
    cout<<"ingrese el numero 2: "<<endl;cin>>num12[0][1];
    cout<<"ingrese el numero 3: "<<endl;cin>>num12[0][2];
    cout<<"ingrese el numero 4: "<<endl;cin>>num12[1][0];
    cout<<"ingrese el numero 5: "<<endl;cin>>num12[1][1];
    cout<<"ingrese el numero 6: "<<endl;cin>>num12[1][2];
    cout<<"ingrese el numero 7: "<<endl;cin>>num12[2][0];
    cout<<"ingrese el numero 8: "<<endl;cin>>num12[2][1];
    cout<<"ingrese el numero 9: "<<endl;cin>>num12[2][2];
    cout<<"ingrese el numero 10: "<<endl;cin>>num12[3][0];
    cout<<"ingrese el numero 11: "<<endl;cin>>num12[3][1];
    cout<<"ingrese el numero 12: "<<endl;cin>>num12[3][2];
    
    //proc
    for (int i = 0; i <=3 ; i++)// se mueven las filas
    {
        suma1 += num12[i][1];
        suma2 += num12[i][2];
        suma3 += num12[i][3];   
    }
    
    cout<<"suma col 1="<<suma1<<endl;
    cout<<"suma col 2="<<suma2<<endl;
    cout<<"suma col 3="<<suma3<<endl;
    return 0;
}

// ejercicio: hacer el bosquejo del algoritmo para cada problema