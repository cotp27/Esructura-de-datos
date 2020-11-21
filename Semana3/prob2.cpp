/*  - ingrese su nombre y apellido, y obtenga esa informacion separada 
      por una coma y en mayuscula
    - obtenga los n primeros carcteres del nombre y/o apellido
    - elija  su apellido y genere un codigo:
      * 1er caracter del codigo=primer caracter  del apellido
      * 2do caracter del codigo=tercer caracter  del apellido
      * 3er caracter del codigo=ultimo caracter  del apellido
      * 4to caracter del codigo=cantidad de caracteres del apellido
*/

#include <iostream>
#include <string>

using namespace std;

int main(){
  string nombre, apellido, nuevo;

  cout<<"ingrese su nombre: "<<endl;cin>>nombre;
  cout<<"ingrese su apellido: "<<endl;cin>>apellido;

  cout<< nombre<<", "<<apellido<<endl;

  // poner en mayuscuka la primera letra 
  nombre[0]= toupper(nombre[0]);
  apellido[0]= toupper(apellido[0]);
  cout<< nombre<<", "<<apellido<<endl;
  

  // primeros caracteres

  nuevo = apellido.substr(0,5); // tomar los 5 primeros caracteres

  cout<< nuevo<<endl;

  // construir el codigo
  string primero,segundo,tercero;
  int cuarto;
  primero= apellido.substr(0,1);
  segundo= apellido.substr(2,1);
  tercero= apellido.substr(apellido.length()-1,1);//longitug=> cadena.length()
  cuarto = apellido.length();

  cout<<primero+segundo+tercero+to_string(cuarto)<<endl;
  // convertir entero a string -> to_string(entero)
  return 0;
}
/*
         012345
cadena= "cadena"
cadena.length()=6
*/