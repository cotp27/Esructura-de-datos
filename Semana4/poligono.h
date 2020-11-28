#include <iostream>
using namespace std;


struct Poligono{
    int tipo;
    float lado1,lado2,altura,R,Area;

    void area (int n);
};

void Poligono:: area (int n){
    if (n==1){
        cout<<"ingresa el lado1"<<endl;
        cin>>lado1;

        cout<<"ingresa el lado2"<<endl;
        cin>>lado2;

        Area = lado1 * lado2;
    }else if (n == 2){
        cout<<"ingresa la base"<<endl;
        cin>>lado1;

        cout<<"ingresa la altura"<<endl;
        cin>>altura;

        Area = (lado1 * altura)/2;
    }else if (n == 3){
        cout<<"ingresa el radio"<<endl;
        cin>>R;

        Area = 3.1415 * R * R; 
    }
}