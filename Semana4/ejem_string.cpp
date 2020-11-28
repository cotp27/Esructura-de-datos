/*  uso de length() y size() : longitud de la cadena
    USO metodo empty(): cadena vacia (1) o no (0)
    uso at() posicionamiento

    append -> añade caracteres al final
    insert -> añade caracteres en cualquier parte (conocer la posicion)
    erase -> borra una determianda posicion 
*/

#include <iostream>
#include <string>

using namespace std;

int main(){
    string cadena1= "hola mundo";
    cout<<cadena1.size()<<endl;
    cout<<cadena1.length()<<endl;

    string cadena2=""; // inicializado
    string cadena3;    // se da algun valor mas adelante
    string cadena4;    // no se da ningun valor

    cout<<"ingrese cadena3:"<<endl;
    getline(cin,cadena3);

    if (cadena2.empty()){
        cout<<"la cadena esta vacia"<<endl;
        cout<<cadena2.empty()<<endl;
    }
    
    if (cadena3.empty()){
        cout<<"la cadena esta vacia"<<endl;
        cout<<cadena3.empty()<<endl;
    }else{
        cout<<"la cadena no esta vacia"<<endl;
        cout<<cadena3.empty()<<endl;
    }
    //  cadena4.empty()-> vacio(1:verdad) o   no vacio(0:falso)
    //  if(true)<-> if(n): n!=0 ,if(false)<-> if(n): n=0,
    //if (cadena4.empty()){             
        //cout<<"la cadena esta vacia"<<endl;
    cout<<cadena4.empty()<<endl;
    // variables dummies (0 o 1)
    //}

    string cadena5="Ejemplo de prueba";

    for (int i=0; i<cadena5.length();i++){
        cout<<cadena5.at(i)<<"-";  // cadena5[i]
    }

    string cadena6= "uno dos tres";

    cout<<"inicio: "<<endl;
    cout<<cadena6<<endl;
    cadena6.append(" cuatro");
    cout<<cadena6<<endl;
    cadena6.insert(0,"cero ");
    cout<<cadena6<<endl;
    cadena6.erase(0,5); // desde la posicion 0 borar 5 caracteres
    // uno dos tres cuatro
    cout<<cadena6<<endl;

    return 0;
}