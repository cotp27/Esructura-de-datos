/*Ordene 4 numeros*/

#include <iostream>
#include <string>

using namespace std;

int main(){

    int num4[4]; // num4=[int,int,int,int]   
    int lim_inf,lim_sup, guardar;


    // input
    cout<<"ingrese el numero 1: "<<endl;cin>>num4[0];// 12
    cout<<"ingrese el numero 2: "<<endl;cin>>num4[1];//5
    cout<<"ingrese el numero 3: "<<endl;cin>>num4[2];// 6
    cout<<"ingrese el numero 4: "<<endl;cin>>num4[3];// 100

    //proc
    lim_inf = 0;
    lim_sup = (sizeof(num4)/sizeof(int))-1;  // sizeof(int)

    for (int i= lim_inf ; i < lim_sup; i++){   // metodo de burbuja
        for (int j = lim_inf; j< lim_sup;j++){
            if (num4[j]>num4[j+1]){   // hago uso del j+1
                guardar= num4[j];
                num4[j]=num4[j+1];
                num4[j+1]= guardar;
            }
        } 
    }
    
    // salida
    cout<< "numero ordenado"<<endl;
    cout<< num4[0]<<endl;
    cout<< num4[1]<<endl;  // [12,5,6,100]->[5,6,12,100]
    cout<< num4[2]<<endl;
    cout<< num4[3]<<endl;

    return 0;
}
