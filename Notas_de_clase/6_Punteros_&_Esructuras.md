# Estrucuturas (struct)

Una estructura es útil para almacenar una agregación de elementos. A diferencia de una matriz, los elementos de una estructura pueden ser de diferentes tipos. 

Cada miembro (**member**) o campo (**field**), de una estructura se denomina por un nombre dado. Por ejemplo, considere la siguiente estructura para almacenar 
información sobre un pasajero de una aerolínea. La estructura incluye el nombre del pasajero, preferencia de comida e información sobre si este pasajero está en 
el programa de viajero frecuente, etc. Entonces, creamos un `type enum` para manejar las preferencias de comida.

```c++
#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

/*creación de la estructura Pasajero*/
struct Pasajero {
        string nombre; //  nombre del Pasajero
        Comida_Preferida com_pref; // comida preferida del Pasajero
        bool es_viajero_frec; // es viajero frecuente el Pasajero?
        string nro_de_viaje_frec; // numero de viaje frecuente
    };

//Programa principal
int main(){
    enum Comida_Preferida { NINGUNA, PASTAS, BAJA_EN_GRASAS, VEGETARIANA };  // type enum
    cout << (Comida_Preferida)0<<'\n';
    
    // declaración de los elementos Pasajero
    
    Pasajero P1 = { "John Smith", VEGETARIANA, true, "293145" };
    // mostrando los componentes de P1
    cout << P1.nombre <<'\n';
    cout << P1.com_pref <<'\n';

    Pasajero P2;
    P2.nombre = "Adam Keynes"; // con "." accedo al componente nombre de P2
    P2.com_pref = PASTAS;     
    // mostrando los componentes de P2
    cout << P2.nombre <<endl;
    cout << P2.nro_de_viaje_frec<<endl;

    Pasajero *P3;  // haciendo uso de punteros
    P3 = new Pasajero;  // se debe inicializar el puntero con el comando new
    P3 -> nombre = "Guadalupe";  
    P3 -> com_pref = BAJA_EN_GRASAS;  // con "->" accedo al componenete com_pref de P3, si éste es un puntero
    P3 -> es_viajero_frec = false;
    P3 -> nro_de_viaje_frec = "Ninguno"; 

    cout << (*P3).nombre <<endl;
    cout << P3 -> nro_de_viaje_frec <<endl;

    delete P3;   // se debe finalizar el puntero con el comando delete
 
    return 0;
}
```
> 0

> John Smith

> 3

> Adam Keynes

> Guadalupe

> Ninguno


Donde la estructura Pasajero seria esta
  
|nombre|com_pref|es_viajero_frec|nro_de_viaje_frec|
|:------:|:--------:|:---------------:|:-----------------:|
| John Smith     | 3       |   1            |      293145           |
|Adam Keynes | 1  |  0  |   |
|Guadalupe | 2  |  0  | Ninguno  |

Como se ve en el ejemplo, se accede a los miembros individuales de la estructura utilizando el **operador de selección de miembros** (member selection operator), que 
tiene el formato `struct_name.member`. Por ejemplo, podríamos cambiar algunos de los campos anteriores de la siguiente manera.
```c++
//...
P1.nombre = "Raul Lennin";
P2.com_pref = 2;
//...
```

Las estructuras del mismo tipo pueden asignarse entre sí. Por ejemplo, si `P4` y `P5` son de tipo `Pasajero`, entonces `P5 = P4` copia los elementos de `P4` a `P5`.

**Lo que hemos discutido hasta ahora podría llamarse una estructura de estilo C**. C ++ proporciona una construcción mucho más poderosa y flexible llamada **clase**, en la
que se pueden combinar datos y funciones. Discutimos las clases mas adelante.


