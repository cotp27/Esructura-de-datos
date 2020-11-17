/*Dado el dia, mes, año, determine si es una fecha correcta,
considere los años bisiestos
Ejemplo:
ingreso:
dia= 29
mes=2
año= 2008
Salida: 
Fecha correcta

ingreso:
dia= 32
mes=1
año= 2019
Salida: 
Fecha incorrecta
*/


#include <iostream>
#include <string>

using namespace std;

int main(){
    //var
    int d,m,a, dmax;
    string respuesta;

    //input  
    cout<<"dia : "; cin>> d;
    cout<<"mes : "; cin>> m;
    cout<<"año : "; cin>> a;

    //process
    switch(m){
        case 1:
        case 3:
        case 5: 
        case 7:
        case 8:
        case 10:
        case 12:
            dmax = 31;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            dmax = 30;
            break;
        case 2:
        // a % 4 == 0  dice que a es multiplo de 4
            if (a % 4 == 0  && ( a % 100 != 0 || a % 400 == 0) ){
                dmax = 29;
            }else{
                dmax = 28;
            }
            break;
    }

    if ( (d>0  && d <= dmax) && (m>0 && m<13) && a>0 ){
        respuesta = "Fecha correcta";
    }else{
        respuesta = "Fecha incorrecta";
    }

    // output
    cout<<"Respuesta = "<< respuesta<< endl;

    return 0;

}