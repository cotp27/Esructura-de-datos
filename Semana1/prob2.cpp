/* Crear un programa que permitra convertir una cantidad 
en segundos a horas, minutos y segundos
Ejem: 145 s -> 0h2min25s 
*/

# include <iostream>
using namespace std;

// funcion principal
int main(){
    //constantes
    const int HORA = 3600;
    const int MINUTO = 60;

    //variables
    int cant, hora, min, seg;

    //Entrada
    cout<< "Ingresar la cantidad en segundos"<< endl;
    cin>> cant;

    //Proceso 
    hora = cant / HORA;
    cant = cant % HORA;
    min = cant / MINUTO;
    seg = cant % MINUTO;

    // SALIDA
    cout<<"La cantidad ingresada en segundos es equivalente a:"<< endl;
    cout<<"Horas : "<< hora <<endl;
    cout<<"Minutos : "<< min <<endl;
    cout<<"Segundos : "<< seg <<endl;

    return 0;
}

/*
Convertir un angulo expresado en grados sexagesimales a 
radianes (PI) y centesimales

const float PI = 3.1416;
*/

