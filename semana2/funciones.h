#include <iostream>

using namespace std;

void area_poligono(int poligono){
    double l1,l2;

    if (poligono == 1){
        cout<<"Ingrese el lado del cuadrado = ";cin>> l1;
        cout<<" el area del cuadrado es: "<< l1*l1<<endl;
    } 
    else if (poligono == 2){
        cout<<"Ingrese el lado 1 del rectangulo = "<< endl;
        cin>> l1;
        cout<<"Ingrese el lado 2 del rectangulo = "<< endl;
        cin>> l2;
        cout<<" el area del rectangulo es: "<< l1*l2<<endl;
    }else if(poligono == 3){
        cout<<"Ingrese el lado 1 del trinagulo = "<< endl;
        cin>> l1;
        cout<<"Ingrese la altura relativa al lado 1 = "<< endl;
        cin>> l2;
        cout<<" el area del triangulo es: "<< (l1*l2)/2<<endl;
    }else{
        cout<<" Error "<<endl;
    }
}

void area_poligono_switch(int poligono){
    // var
    double l1,l2;

    //process & output
    switch(poligono){
        case 1:
        cout<<"Ingrese el lado del cuadrado = ";cin>> l1;
        cout<<" el area del cuadrado es: "<< l1*l1<<endl;
        break;
        case 2:
        cout<<"Ingrese el lado 1 del rectangulo = "<< endl;
        cin>> l1;
        cout<<"Ingrese el lado 2 del rectangulo = "<< endl;
        cin>> l2;
        cout<<" el area del rectangulo es: "<< l1*l2<<endl;
        break;
        case 3:
        cout<<"Ingrese el lado 1 del trinagulo = "<< endl;
        cin>> l1;
        cout<<"Ingrese la altura relativa al lado 1 = "<< endl;
        cin>> l2;
        cout<<" el area del triangulo es: "<< (l1*l2)/2<<endl;
        break;
        default:
        cout<<" Error "<<endl;
        break;
    }
}

int num_cifras(int M){               // M<-N var local
    int i;

    M=M/10;
    i=1;
    while(M > 0){
        i =i+1;
        M=M/10;
    }
    return i;
}

int num_rango(int Ni, int Nf){
    int i, cont;

    i=Ni+1;
    cont=1;
    while(i<Nf){
        cont += 1;
        i ++;   // i=i+1;
    }
    return cont-1;
}
// funcion que captura el numeros de multiplos de N_mult menores a N_max
int num_mul(int N_max, int N_mult){
    int cont,i;
    cont=0; // contador de multiplos
    i=1; // i va desde 1 hasta N
    while(i <= N_max){
        if (i%N_mult == 0){
            cont +=1;
            i=i+N_mult; // i++
        }else{
            i++;
        }  
    }
    return cont;
}

bool primo(int i){
    bool logico;  // 
    if (i==1){
        logico = false;
    }else if (i>1){
        for(int j=2; j<=i/2;j++){
            if ( i%j == 0){
                logico = false;  // return false
                return logico;
            }
        }
    logico = true; // borraba
    }
    return logico;  // return true
}

int cont_primo(int N){
    int cont;
    bool resultado;
    cont=0;
    for(int i=1; i<=N;i++){
        resultado = primo(i);
        if (resultado){   //  if(1)-> verdad if(0)->falso
            cont=cont+1;   
        }
    }
    return cont;
}