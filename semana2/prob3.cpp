/* Un negocio tiene dos tipos de cliente:
Cliente general (G), y cliente afiliado (A). 
Recibe dos formas de pago: Al contado (C) y en plazos (P). 
Nos piden hacer un programa que al ingresar el monto de la compra
se obtenga el monto del descuento o el monto del recargo
 y el total a pagar, segun la siguiente informacion:

    tipo                |contado(C)          |plazos(P)
                        |descuento           |recargo
    ---------------------------------------------------
    cliente general(G)  |15%                 |10%
    cliente afiliado(A) |20%                 |5%


input:  
    Monto           =   500
    tipo cliente    =   A
    forma de pago   =   C
output
    total a pagar   =   400

obs: sin funciones
*/

#include <iostream>

using namespace std;

int main(){
    //constant
    const float des_G=0.15F;
    const float des_A=0.2F;
    const float rec_G=0.1F;
    const float rec_A=0.05F;

    //var
    float monto, monto1, des, rec;
    char TipoCliente, FormaPago;


    // input
    cout<<"ingresar el monto ="<<endl; 
    cin>> monto;
    cout<<"tipo de cliente ="<<endl; 
    cin>> TipoCliente;
    cout<<"Forma de pago ="<<endl;  
    cin>> FormaPago;

    //process
    if (TipoCliente == 'G'){
        if (FormaPago == 'C'){
            monto1=monto*(1-des_G);
            des=des_G*100;
            cout<<"Se aplica un descuento de: "<<des<<"%"<<endl;
            cout<<"Total a pagar = "<<monto1<<endl;
        }else if (FormaPago == 'P'){
            monto1=monto*(1+rec_G);
            rec=rec_G*100;
            cout<<"Se aplica una recarga de: "<<rec<<"%"<<endl;
            cout<<"Total a pagar = "<<monto1<<endl;
        }else{
            cout<<"medio de pago no aceptado";
        }
    }else if (TipoCliente == 'A'){
        if (FormaPago == 'C'){
            monto1=monto*(1-des_A);
            des=des_A*100;
            cout<<"Se aplica un descuento de: "<<des<<"%"<<endl;
            cout<<"Total a pagar = "<<monto1<<endl;
        }else if (FormaPago == 'P'){
            monto1=monto*(1+rec_A);
            rec=rec_A*100;
            cout<<"Se aplica una recarga de: "<<rec<<"%"<<endl;
            cout<<"Total a pagar = "<<monto1<<endl;
        }else{
            cout<<"medio de pago no aceptado";
        }
    }else{
        cout<<" Este cliente no existe";
    }
    
    return 0;
}
