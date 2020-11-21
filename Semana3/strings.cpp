/*STRINGS*/

#include <iostream>
#include <string>

using namespace std;

int main(){
    bool comparacion;
    // cracion de una variable caracter
    char c='a',d='b';
    cout<<sizeof(c)<<endl;// sizeof(c)  -> 1 byte
    // creacion de una variable cadena(string)
    string cadena="Hola mundo", cadena1="Peru",F;
    cout<<sizeof(cadena)<<endl;// sizeof(cadena) ->32 bytes
    cout<<sizeof(string)<<endl;
    //operaciones con cadenas
        // concatenacion
            //e= c+d;  // no se puede 
            F= cadena+", "+cadena1;
            //cout<<e<<endl;
            cout<<F<<endl;
            cout<<sizeof(F)<<endl;
        // comparacion  (booleanos)
            comparacion= cadena==cadena1;
            cout<<comparacion<<endl;   // false=0, true!=0
            comparacion= "cadena"=="cadena1";
            cout<<comparacion<<endl;   // false=0, true!=0
            comparacion= "cadena"=="CADENA";
            cout<<comparacion<<endl;   // false=0, true!=0

            comparacion= cadena>cadena1;  // HOLA MUNDO > PERU FALSE
            cout<<comparacion<<endl;   // false=0, true!=0

            comparacion= cadena<cadena1;
            cout<<comparacion<<endl;   // false=0, true!=0

        // calculo de longitud  cadena.length()
            
            cout<<cadena.length()<<endl;   // 

        // extraccion de cadenas o subcadenas
            // extarer el primer carcater A
            cadena = "ABCDE";
            cadena1 = cadena.substr(0,1);
            cout<<cadena1<<endl;

            cadena1 = cadena.substr(2,1);
            cout<<cadena1<<endl;

            cadena1 = cadena.substr(1,1);
            cout<<cadena1<<endl;

            cadena1 = cadena.substr(0,2); // cad.substr(posicion_inicial, n° de caracters a tomar)
            cout<<cadena1<<endl;
        // conversiones para caracteres
            cout<<int('A')<<endl;  // convierte ascii a entero
            cout<<char(65)<<endl;  // convierte  entero a ascii
    return 0;

}