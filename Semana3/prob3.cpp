/*  - determine cuantas veces se repite una letra en una frase
    - dada la frase, devolver la frase sin espacios
    - dada la frase, devolver los espacios en blanco con *  (ejercicio)
*/

#include <iostream>
#include <string>

using namespace std;

int main(){
    string frase,l,nuevo, frase2="";
    int c=0, esp, i;
    //frase= "Lorem Ipsum es simplemente el texto de relleno de las imprentas y archivos de texto.";
    cout<<"frase:";
    getline(cin, frase);

    cout<<"letra";cin>>l; 
    //no importa se mayus o minusc

    esp=0;
    for(int i =0; i<=frase.length()-1;i++){
        if (toupper(frase[i]) == toupper(l[0])){
            c++;
        }

        if (frase.substr(i,1) == " "){   // "ab_cde" --> (ab)+(cde) --> abcde
            nuevo = frase.substr(esp,i-esp);
            esp = i+1;
            frase2=frase2+nuevo;
        }
    }

    nuevo = frase.substr(esp,i-esp);
    frase2 = frase2+nuevo;

    cout<<" la letra "<<l<< " aparece "<< c  << " veces en la frase"<<endl;


    cout<< "la nureva frase es "<<endl;
    cout<< frase2;
    return 0;
}