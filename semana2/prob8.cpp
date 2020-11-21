/*Busque un numero de 7 numero ingresados, determine 
la posicion y si existe o no el numero buscado*/

#include <iostream>
#include <string>

using namespace std;

int main(){
    //var
    int num7[7];
    int num_bus,pos=-1;
    string resp;
    // input
    cout<<"ingrese el numero 1: "<<endl;cin>>num7[0];
    cout<<"ingrese el numero 2: "<<endl;cin>>num7[1];
    cout<<"ingrese el numero 3: "<<endl;cin>>num7[2];
    cout<<"ingrese el numero 4: "<<endl;cin>>num7[3];
    cout<<"ingrese el numero 5: "<<endl;cin>>num7[4];
    cout<<"ingrese el numero 6: "<<endl;cin>>num7[5];
    cout<<"ingrese el numero 7: "<<endl;cin>>num7[6];
    // ejercicio: averiguar la manera de crear este arreglo aleatoriamente
    cout<<"numero a buscar:"<<endl;cin>> num_bus;  

    //proc
    resp="no existe";

    for (int i = 0; i < 7; i++)
    {
        if (num7[i]==num_bus){
            resp = "existe";
            pos = i;
            break;  // para determinar la primera vez q aparece num_bus 
        }
    }

    //salida
    cout<<" Respuesta:"<<resp<<endl;
    if (pos>=0){
        cout<<" ubicado en la posicion"<<pos+1<<endl;
    }
    return 0;
}
