/* Elabore un algoritmo que obtenga las raices reales 
de una ecuacion de segundo grado
*/

#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main(){
    //var
    double a,b,c,x1,x2;

    // input
    cout<<"Ingresar los coeficientes del polinomio :"<<endl;
    cout<<"a:"; cin>> a;
    cout<<"b:"; cin>> b;
    cout<<"c:"; cin>> c;

    // process (analizar su discriminante)
    double d;
    d = pow(b,2.0)-4.0*a*c;

    if (a != 0 && d >= 0){
        x1 = (-b + pow(d,(1.0/2.0)))/(2*a);
        x2 = (-b - pow(d,(1.0/2.0)))/(2*a);
    }else{
        x1 = 0;
        x2 = 0;
    }

    // output
    cout<< "las raices son:"<<endl;
    cout<< "x1 = "<<x1<<endl;
    cout<< "x2 = "<<x2<<endl;

    return 0;
}


/*Dada la hora, minuto y segundo; encuentre la hora del siguiente
segundo
Ejem:
4h26min45s -> 4h26min45s  +  1s  = 4h26min46s
4h26min59s -> 4h26min59s  +  1s  = 4h27min00s
4h59min59s -> 4h59min59s  +  1s  = 5h00min00s
*/

/* Programar el siguiente teorema:
En todo triangulo, cada lado es menor que la suma de los 
otros dos, pero mayor que la diferencia
Se pide ingresar 3 lados (de un supuesto triangulo) y haciendo uso
del teorema decir si es triangulo o no.
*/