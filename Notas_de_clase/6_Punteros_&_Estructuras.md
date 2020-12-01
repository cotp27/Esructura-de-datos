# Punteros

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

# Memoria dinámica 

A menudo encontramos útil en las *estructuras de datos* crear objetos dinámicamente a medida de la necesidad que surja,  para esto el sistema de tiempo de ejecución de C++ reserva un gran bloque de memoria llamado almacén gratuito (free store). (Esta memoria a veces también se denomina memoria de almacenamiento dinámico (heap memory), pero esto no debe confundirse con la estructura de datos de almacenamiento dinámico.

El operador `new` asigna dinámicamente la cantidad correcta de almacenamiento, del almacén gratuito, para un objeto de un tipo determinado y devuelve un puntero a este objeto. Es decir, el valor de este puntero es la dirección donde reside este objeto en la memoria. De hecho, C++ permite variables de puntero a cualquier tipo de datos, incluso a otros punteros o celdas individuales en una matriz.

Por ejemplo, supongamos que en nuestro sistema de línea aérea nos encontramos con un nuevo pasajero. Nos gustaría crear dinámicamente una nueva instancia utilizando el operador `new`. Sea `P3` un puntero a la estructura `Pasajero`. Esto implica que `*P3` es una realización de la estructura actual (en pocas palbras un **objeto**); por lo tanto, podríamos acceder a uno de sus miembros, digamos al campo `com_pref`, usando la expresión `(*P3).mealPref`. Debido a que los objetos complejos como las *estructuras* a menudo se asignan dinámicamente, C++ proporciona una forma más corta de acceder a los miembros utilizando el operador `->`, es decir,

                                    nombre_puntero -> miembro  es equivalente a (*nombre_puntero).miembro

Por ejemplo, podríamos asignar un nuevo objeto de Pasajero e inicializar sus miembros de la siguiente manera.

```c++
//...
Pasajero *P3;  
P3 = new Pasajero;  
P3 -> nombre = "Guadalupe";  
P3 -> com_pref = BAJA_EN_GRASAS;  
P3 -> es_viajero_frec = false;
P3 -> nro_de_viaje_frec = "Ninguno"; 
//..
```
Sería natural preguntarse si podemos inicializar los miembros utilizando la notación de llaves (`{...}`) utilizadas anteriormente. La respuesta es **no**, pero veremos mas adelante otra forma más conveniente de inicializar miembros cuando analicemos clases y constructores.

Este nuevo objeto de Pasajero continúa existiendo en el almacén gratuita hasta que se **elimina explícitamente**, este proceso se realiza utilizando el operador `delete`, que destruye el objeto y devuelve su espacio al almacén gratuita.


