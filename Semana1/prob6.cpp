/*Estructuras de seleccion multiple*/

/*switch (expresion logica){
    case valor1:
        instruccion1;
        instruccion2;
        instruccion3;
        break;
    case valor2:
        instruccion4;
        break;
    case valor3:
        instruccion5;
        instruccion6;
        if (exprex logica){
            instruccion7;
        }else{
            instruccion8;
        }
        break;
}*/

/*switch (expresion logica){
    case valor1:
        instruccion1;
        instruccion2;
        instruccion3;
        break;
    case valor2:
        instruccion4;
        break;
    case valor3:
        instruccion5;
        instruccion6;
        if (exprex logica){
            instruccion7;
        }else{
            instruccion8;
        }
        break;
    default:
        instruccion9;
        break;
}*/


/*Convierta a numeros romanos, numeros menores a 4000*/

#include <iostream>
#include <string>

using namespace std;

int main(){
    //var
    int n, unidad, decena, centena, millar, n_copy;
    string romano;
    
    //input
    cout<<"ingrese el numero positivo menor a 4000"<<endl;
    cin>>n;

    n_copy=n;
    // process
    if (n<=3999){
        unidad = n % 10;
        n = n / 10;
        decena = n%10;
        n = n / 10;
        centena = n%10;
        n = n / 10;
        millar = n%10;

        switch (millar){
            case 1:
                romano = "M";
                break;
            case 2:
                romano = "MM";
                break;
            case 3:
                romano = "MMM";
                break;    
        }

        switch (centena){
            case 1:
                romano = romano + "C";
                break;
            case 2:
                romano = romano + "CC";
                break;
            case 3:
                romano = romano + "CCC";
                break;
            case 4:
                romano = romano + "CD";
                break;
            case 5:
                romano = romano + "D";
                break;
            case 6:
                romano = romano + "DC";
                break;
            case 7:
                romano = romano + "DCC";
                break;
            case 8:
                romano = romano + "DCCC";
                break;
            case 9:
                romano = romano + "CM";
                break;
        }
        switch(decena){
            case 1:
                romano = romano + "X";
                break;
            case 2:
                romano = romano + "XX";
                break;
            case 3:
                romano = romano + "XXX";
                break;
            case 4:
                romano = romano + "XL";
                break;
            case 5:
                romano = romano + "L";
                break;
            case 6:
                romano = romano + "LX";
                break;
            case 7:
                romano = romano + "LXX";
                break;
            case 8:
                romano = romano + "LXXX";
                break;
            case 9:
                romano = romano + "XC";
                break;
        }
        switch(unidad){
            case 1:
                romano = romano + "I";
                break;
            case 2:
                romano = romano + "II";
                break;
            case 3:
                romano = romano + "III";
                break;
            case 4:
                romano = romano + "IV";
                break;
            case 5:
                romano = romano + "V";
                break;
            case 6:
                romano = romano + "VI";
                break;
            case 7:
                romano = romano + "VII";
                break;
            case 8:
                romano = romano + "VIII";
                break;
            case 9:
                romano = romano + "IX";
                break;
        }
    }

    //output
    cout<< " el numero : "<< n_copy << endl;
    cout<< "en romanos es "<< romano <<endl; 

    return 0;
}

