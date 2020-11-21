/*
* las estructuras son agrupaciones de variables
* son naturales a C
* Recordar que se conocen los types int, long int, float, double, char, string, bool

* struct: es una estructura de datos perteneciente a C
          agrupa muchos types  -> "un struct tambien es un tipo" 
          se definen fuera de la funcion principal 
*/

#include <iostream>
#include <string>

using namespace std;

struct nombre{     // nombre es de tipo struct
    int a;
    float b;
    bool c;         // tiene 6 caracteristicas <-> 6 atributos 
    char d;         // las operaciones de las estrucutra se llaman metodos     
    string e;
    double f;
    apellido Z; 
};

struct apellido{
    float jejeje; // tiene 1 caracteristica <-> 1 atributo
}

int main(){
    nombre var1, var2, var[5]; //  var5= [*,*,*,*,*]
    /*
    var1 pertenece a nombre:
        -var1 tiene seis caracteristicas:
            var1.a  ---- int a
            var1.b  ---- float b
            .
            .
            .
    */
    apellido var3;
    int v1,v2;
}





