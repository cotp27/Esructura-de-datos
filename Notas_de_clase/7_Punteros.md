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

Este nuevo objeto de Pasajero continúa existiendo en el almacén gratuita hasta que se **elimina explícitamente**, este proceso se realiza utilizando el operador `delete`, que destruye el objeto y devuelve su espacio al almacén gratuito.

```c++
//...
delete P3;
//...
```
El operador `delete` solo debe aplicarse a los objetos que se han asignado a través de `new`.

