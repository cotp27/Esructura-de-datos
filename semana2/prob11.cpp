/*Almacene en una matriz  de 3x2, 6 numeros y obtenga la cantidad de pares e impares*/

#include <iostream>
#include <string>

using namespace std;

int main(){

    int num[3][2];
    int par=0,impar=0;

    for(int i=0;i<3;i++){
        for (int j = 0; j <2 ; j++)
        {
            cout<<"ingrese el numero"<<endl;cin>>num[i][j];
            if (num[i][j]%2 == 0){
                par += 1;
            }else{
                impar += 1;
            }
        }    
    }

    cout<<" Cant. pares ="<<par<<endl;
    cout<<" Cant. impares ="<<impar<<endl;

    return 0;
}