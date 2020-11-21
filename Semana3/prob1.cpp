/*  - dado un caracter devolver su codigo ascci
    - al ingresar una letra determine si es una vocal
    - al ingresar un caracter determine si es letra, numero o simbolo
*/

#include <iostream>
#include <string>

using namespace std;

int main(){
    char c, mayus;
    int a;

    cout<< "ingresar un caracter"; cin>>c;

    a=int(c);

    cout<< "el carcter  (ascii)"<< c<< ", tiene como valor (int) = "<<a<<endl;

    if ((a>= 65 && a<= 90) || (a>= 97 && a<= 122)){
        //convertir a mayucula
        mayus=toupper(c);
        if (mayus=='A'){
            cout<<"Es vocal"<<endl;    
        }else if (mayus=='E'){
            cout<<"Es vocal"<<endl;    
        }else if(mayus=='I'){
            cout<<"Es vocal"<<endl;    
        }else if(mayus=='O'){
            cout<<"Es vocal"<<endl;    
        }else if(mayus=='U'){
            cout<<"Es vocal"<<endl;    
        }else{
            cout<<"No es vocal"<<endl;
        }
    }else{
        cout<<"No es vocal"<<endl;
    }

    if (a>= 48 && a<= 57 ){
        cout<<"es un numero"<<endl;
    }else if ((a>= 65 && a<= 90) || (a>= 97 && a<= 122)){
        cout<<"es una letra"<<endl;
    }else{
        cout<<"es un simbolo"<<endl;
    }

    return 0;
}

