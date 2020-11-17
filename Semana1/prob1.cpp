/* Dado un numero de 5 digitos, devolver el numero en orden inverso*/

#include <iostream>

using namespace std;

/*IDENTACION: Tabulación, para Visual Code por defecto
tabula 4 espacio */
int main(){ 
    //variables
    int num, num_inv, res;

    //Entrada
    cout<<"Ingresar un numero (debe tener 5 digitos)"<< endl;
    cin>> num;   // num = abcde

    //Proceso
    res = num % 10;     
    num = num / 10;
    num_inv = res*10;  // num_inv=  e0

    res = num % 10;
    num = num / 10;
    num_inv = (num_inv+res)*10;  // num_inv=  ed0

    res = num % 10;
    num = num / 10;
    num_inv = (num_inv+res)*10;  // num_inv=  edc0

    res = num % 10;
    num = num / 10;
    num_inv = (num_inv+res)*10;  // num_inv=  edcb0

    num_inv = num_inv + num;   // num_inv=  edcba

    // Salida
    cout << "El valor inverso es:"<<endl;
    cout << num_inv;

    return 0;   // return 1 significa un error        
}


/* Realizar el mismo proceso invirtiendo las cifras de orden par en un numero de 
8 cifras:
 num = 12345678  ->  num_inv = 18365472
 */