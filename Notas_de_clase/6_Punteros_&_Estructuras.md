# Punteros

# Estructuras (struct)

Al contrario de los arrays, las **estructuras** nos permiten agrupar varios tipos de datos, permitiendo manipularlos todos juntos, usando un mismo identificador, o cada uno por separado.

Las estructuras son llamadas también muy a menudo **registros**, o en inglés **records**. Tienen muchos aspectos en común con los *registros usados en bases de datos*. Y siguiendo la misma analogía, cada elemento de una estructura se denomina a menudo **campo** (field).

El identificador de la estructura es un nombre (opcional) para referirse a la estructura. Los **objetos de la estructura** son objetos declarados con el tipo de la estructura, y su inclusión también es opcional. Sin bien, aún siendo ambos opcionales, al menos uno de estos elementos debe existir.

En el interior de una estructura, entre las llaves, se pueden definir todos los elementos que consideremos necesarios, del mismo modo que se declaran los objetos.

```c++
struct [<identificador>]{
        [<Tipo_1> <nombre_elemento_1>];    // elemento de la estructura o campo
        .
        .
        .
        [<Tipo_n> <nombre_elemento_n>];
} [<objeto_estructura_1>], ... , [<objeto_estructura_p>];   // objetos de la estructura
```

Las estructuras pueden referenciarse completas, usando su nombres y también se puede acceder a los elementos definidos en el interior de la estructura, usando el operador de selección `.`.

Una vez definida una estructura, es decir, si hemos especificado un nombre para ella, se puede usar igual que cualquier otro tipo en C++. Esto significa que se pueden declarar más objetos del tipo estructura en cualquier parte del programa. Asimismo, en C++ la palabra **struct** es opcional en la declaración de objetos, al contrario de lo que sucede en C, en el que es obligatorio usarla.

```c++
#include <iostream>
#include <cstdlib>

using namespace std;

struct Persona {
        char Nombre[65]; 
        char Direccion[65]; 
        int AnyoNacimiento; 
} P1, P2;
    
int main(){
    
    Persona P1 = {"Juan Secada", "Callao", 1984};
    cout << P1.Nombre<<endl;  // acceso al acmpo nombre de P1

    Persona P2 = {"NN", "Lima", 2000};
    cout << P2.AnyoNacimiento<<endl;

    Persona P3 = {"Juan", "Trujillo", 1990};
    cout << P3.Direccion<<endl;

    return 0;
}
```
> Juan Secada

> 2000

> Trujillo

En este ejemplo se define la **estructura Persona** y declara a **P1** como un **objeto** de ese tipo. Para acceder al campo *nombre* de **P1**, por ejemplo para visualizarlo, usamos la expresión:

```c++
cout << P1.Nombre<<endl;  
```

## Funciones como elementos de la estructura

C++, permite incluir **funciones** en el interior de las estructuras. Normalmente estas funciones tienen la misión de manipular los datos incluidos en la estructura y su uso está muy relacionado con la *programación orientada a objetos*.

Aunque esta característica se usa casi exclusivamente con las **clases**, como veremos más adelante, también puede usarse en las estructuras. De hecho, en C++, *las diferencias entre estructuras y clases son muy tenues*.

Dos funciones muy particulares son las de inicialización o **constructor** y la de finalización o **destructor**. Veremos con más detalle estas funciones cuando asociemos las estructuras y los punteros.
	
* El constructor es una **función sin tipo de retorno** y **con el mismo nombre de la estructura**.
* El destructor tiene la misma forma, salvo que el nombre va precedido el símbolo `~`.

Veamos un ejemplo sencillo para ilustrar el uso de constructores:

Forma 1
```c++
struct Punto {
        int x, y;
        Punto () {x=0; y=0;};  // constructor 
        
} Punto1, Punto2;
```

Forma 2
```c++
struct Punto {
        int x, y;
        Punto () // declaracion del constructor 
        
} Punto1, Punto2;

//definicion del constructor, fuera de la estructura
Punto::Punto () {
        x=0; 
        y=0;
}
```
Si no usáramos un constructor, los valores de `x` y `y` para `Punto1` y `Punto2` estarían indeterminados o tomarian valores constantes por defecto (según sea la versión de C++). Con las estructuras éste será el caso más habitual, dado que **si necesitamos usar constructores para asignar valores iniciales**, esto será mucho más lógico al usar **clases** que **estructuras**.

*Observación: Se menciona, sólo a título de información, que el *constructor no tiene por qué ser único*. Se pueden definir varios constructores, pero veremos esto mucho mejor y con más detalle cuando veamos las **clases**.*

Usando constructores aseguramos los valores iniciales para los elementos de la estructura. Veremos que esto puede ser una gran ventaja, sobre todo cuando combinemos estructuras con punteros, mas adelante. También podemos incluir otras funcioneso o **Métodos**, que se declaran y definen como las funciones que ya conocemos. Veamos un ejemplo,

```c++
#include <iostream>

using namespace std;

struct Pareja {
        int A, B;
	Pareja () {A=-1; B=-1;}; // constructor
	int LeeA () {return A;}; // funcion interior a la estructura Pareja
	int LeeB (); // funcion interior a la estructura Pareja
	void GuardaA (int n) {A = n}; // método interior a la estructura Pareja
	void GuardaB (int); // método interior a la estructura Pareja
} Par;
//Definicion externa de funciones y/o metodos de la estructura Pareja
int Pareja :: LeeB () {
	return B;
}; 

void Pareja :: GuardaB (int n) {
	B = n;
}; 

int main(){
    
    Par.GuardaA(12);
    Par.GuardaB(60);
    cout << Par.LeeA()<<endl;
    cout << Par.LeeB()<<endl;
    
    return 0;
}
```
En este ejemplo podemos ver cómo se define una estructura con dos campos enteros, y dos funciones para modificar y leer sus valores. El ejemplo es muy simple, pero las funciones que guardan valores se pueden elaborar para que no permitan determinados valores, o para que hagan algún tratamiento de los datos. Por supuesto se pueden definir otras funciones y también constructores más elaborados e incluso, redefinir operadores. Y en general, las estructuras admiten cualquiera de las características de las **clases**, siendo en muchos aspectos equivalentes. Veremos estas características cuando estudiemos las **clases**, y recordaremos cómo aplicarlas a las estructuras.

De un modo parecido al que se inicializan los arrays, se pueden inicializar estructuras, tan sólo hay que tener cuidado con las estructuras anidadas. Por ejemplo:

```c++
//...
struct A{
	int i, j, k;
}

struct B{
	int x;
	struct C{
		char c;
		char d;
	} y;
	int z;
};

int main(){
	A ejemploA = {10, 20, 30};
	B ejemploB = {10, {'a', 'b'}, 20};
	//...
}
```
Cada nueva estructura anidada deberá inicializarse usando la pareja correspondiente de llaves "{}", tantas veces como sea necesario.

## Asignación de estructuras

La asignación de estructuras está permitida, pero sólo entre **objetos del mismo tipo de estructura**, (salvo que se usen constructores), y funciona como la intuición nos dice que debe hacerlo. Por ejemplo,

```c++
//...
struct Punto {
        int x, y;
        Punto () {x=0; y=0;};  // constructor 
        
} Punto1, Punto2;

int main(){
	Punto1.x = 10;
	Punto1.y = 12;
	Punto2 = Punto1;
	//...
}
```
La línea `Punto2 = Punto1`; equivale a `Punto2.x = Punto1.x;` y  `Punto2.y = Punto1.y;`.  

Quizás exista la intrigado por el comentario anterior, que adelantaba que se pueden asignar estructuras diferentes, siempre que se usen los constructores adecuados. Esto, en realidad, se puede extender a cualquier tipo, no sólo a estructuras. Por ejemplo, definiendo el constructor adecuado, podemos asignar un entero a una estructura. Veamos cómo hacer esto.

Hasta ahora, *los constructores que hemos visto no usaban argumentos*, pero eso no significa que no puedan tenerlos. Crearemos como ejemplo, una estructura para manejar números complejos. Un número complejo está compuesto por dos valores reales, el primero contiene lo que se llama la parte real y el segundo la parte imaginaria.
```c++
struct Complejo{
	double real, imaginario;
}
```
Esta estructura es suficiente para muchas de las cosas que podemos hacer con números imaginarios, pero aprovechando que podemos crear funciones, añadiremos algunas que hagan de una forma más directa cosas que de otro modo requieren añadir código externo. Por ahora nos limitaremos a añadir unos cuantos constructores. El primero es el más lógico: un constructor por defecto:
```c++
struct Complejo{
	double real, imaginario;
	Complejo () {real = 10; imaginario = 0;};
}
```
Este construtor se usará, por ejemplo, si declaramos un array:
```c++
//...
int main(){
	Complejo complex[10];
//...
}
```
El constructor por defecto será llamado para cada elemento de *complex*, aunque no aparezca tal llamada en ningún punto del programa. Otro constructor nos puede servir para asignar un valor a partir de dos números:
```c++
struct Complejo{
	double real, imaginario;
	Complejo () {real = 10; imaginario = 0;};
	Complejo (double r, double i) {real = r; imaginario = i;};
}
```
Mediante este constructor podemos asignar valores iniciales en la sgte. declaración:
```c++
//...
int main(){
	Complejo complex[10];
	Complejo complex1(10.23 , 213.22);
//...
}
```
Los números reales se consideran un subconjunto de los imaginarios, en los que la parte imaginaria vale cero. Esto nos permite crear otro constructor que sólo admita un valor real:
```c++
struct Complejo{
	double real, imaginario;
	Complejo () {real = 10; imaginario = 0;};
	Complejo (double r, double i) {real = r; imaginario = i;};
	Complejo (double r) {real = r;imaginario = 0;};
}
```
Este constructor nos permite, como en el caso anterior, inicializar un valor de un complejo en la declaración, pero también nos permite asignar un valor `double` a un complejo, y por el sistema de conversión automático, también podemos asignar valores enteros o en punto flotante:
```c++
//...
int main(){
	Complejo complex[10];
	Complejo complex1(10.23 , 213.22);
	Complejo complex2 = 1222.21;
	int x = 10;
	Complejo complex3 = x;
//...
```
Este tipo de constructores se comportan como *conversores de tipo*, nada nos impide crear constructores con cualquier tipo de parámetro, y tales constructores se podrán usar para convertir cualquier tipo al de nuestra estructura.

## Arrays de estructuras

La combinación de las estructuras con los arrays proporciona una potente herramienta para el almacenamiento y manipulación de datos.
```c++
struct Persona {
        char Nombre[65]; 
        char Direccion[65]; 
        int AnyoNacimiento; 
} Grupo[200];
```
Vemos en este ejemplo lo fácil que podemos declarar el array Grupo que contiene los datos relativos a doscientas personas. Asimismo, podemos acceder a los datos de cada uno de ellos:
```c++
//...
cout << Grupo[25].Dreccion;
//...
```
O asignar los datos de un elemento de Grupo a otro:
```c++
//...
Grupo[0] = Grupo[99];
//...
```
## Estructuras anidadas
También está permitido anidar estructuras, con lo cual se pueden conseguir superestructuras muy elaboradas.
```c++

//...
struct Direccion{
	char calle[64], puerta[3], codigo_postal[6], ciudad[32];
	int piso , portal;
};

struct Persona{
	struct Nombre{
		char nombre[32], apellido[64];
	}NombreCompleto;
	Direccion direccion;
	char telefono[10];
};
//...
```
En general, no es una práctica corriente definir estructuras dentro de estructuras, ya que tienen un ámbito local, y para acceder a ellas se necesita hacer referencia a la estructura más externa. Por ejemplo para declarar un objeto del tipo `Nombre` hay que utilizar el operador de acceso `::`, es decir,
```c++
Persona :: Nombre Nombre1; 
```
Sin embargo para declarar un objeto de tipo `Direccion` basta con declararla, es decir,
```c++
Direccion direccion1;
```
## Estructuras anónimas

Anteriormente se comentó que, al hablar sobre la sintaxis de las declaraciones de estructuras, que debe aparecer o bien el identificador de estructura, o bien declararse algún objeto de ese tipo en la declaración. Bien, eso no es del todo cierto. Hay situaciones donde se pueden omitir ambos identificadores.

Una **estructura anónima** es la que carece de identificador de tipo de estructura y de declaración de objetos del tipo de estructura.

```c++
struct Conocida{
	struct {
		int x, y;
	};
	int z;
};
```
Para acceder a los campos `x` o `y` se usa la misma forma que para el campo `z`:
```c++
//...
Conocida.x = 0;
Conocida.y = 0;
Conocida.z = 0;
//...
```
Pero, ¿cual es la utilidad de esto? 

Pues, la verdad, no mucha, al menos cuando se usa con estructuras. En el tema de uniones puede resultar muy útil.

El método usado para declarar la estructura dentro de la estructura es la **forma anónima**, como se ve no tiene identificador de tipo de estructura ni de campo. El único lugar donde es legal el uso de estructuras anónimas es en el interior de estructuras y uniones.

## Operador sizeof con estructuras

Podemos usar el operador `sizeof` para calcular el espacio de memoria necesario para almacenar una estructura. Sería lógico suponer que sumando el tamaño de cada elemento de una estructura, se podría calcular el tamaño de la estructura completa, pero no siempre es así. Por ejemplo:

```c++
#include <iostream>
using namespace std;

struct A{
	int x;
	char a;
	int y;
	char b;
}

struct B{
	int x;
	int y;
	char a;
	char b;
};

int main(){
	cout << " Tamaño de int: "<< sizeof(int)<< endl;
	cout << " Tamaño de char: "<< sizeof(char)<< endl;
	cout << " Tamaño de estructura A: "<< sizeof(A)<< endl;
	cout << " Tamaño de estructura B: "<< sizeof(B)<< endl;
	
	return 0;
}
```
El resultado, es el siguiente:
> Tamaño de int: 4

> Tamaño de char: 1

> Tamaño de estructura A: 16

> Tamaño de estructura B: 12

Si hacemos las cuentas, en ambos casos el tamaño de la estructura debería ser el mismo, es decir, **4+4+1+1=10 bytes**. Sin embargo en el caso de la estructura `A` el tamaño es **16** y en el de la estructura `B` es **12**, ¿por qué?

La explicación es algo denominado alineación de bytes (*byte-aling*). Para mejorar el rendimiento del procesador no se accede a todas las posiciones de memoria. En el caso de microprocesadores de 32 bits (4 bytes), es mejor si sólo se accede a posiciones de memoria múltiplos de cuatro, de modo que el compilador intenta alinear los objetos con esas posiciones.

En el caso de objetos int es fácil, ya que ocupan cuatro bytes, pero con los objetos char no, ya que sólo ocupan uno.

Cuando se accede a datos de menos de cuatro bytes la alineación no es tan importante. El rendimiento se ve afectado sobre todo cuando hay que leer datos de cuatro bytes que no estén alineados.

En el caso de la estructura `A` hemos intercalado campos `int` con `char`, de modo que el campo `int y`, se alinea a la siguiente posición múltiplo de cuatro, dejando tres posiciones libres después del campo `a`. Lo mismo pasa con el campo `b`.

-------------------------------------------------
|0 |1 |2 |3 |4 |5 |6 |7 |8 |9 |10|11|12|13|14|15|
|--|--|--|--|--|--|--|--|--|--|--|--|--|--|--|--|
|x          |a | vació  |y          |b | vació  |
-------------------------------------------------


En el caso de la estructura `B` hemos agrupado los campos de tipo `char` al final de la estructura, de modo que se aprovecha mejor el espacio, y sólo se desperdician los dos bytes sobrantes después de `b`.





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

Este nuevo objeto de Pasajero continúa existiendo en el almacén gratuita hasta que se **elimina explícitamente**, este proceso se realiza utilizando el operador `delete`, que destruye el objeto y devuelve su espacio al almacén gratuito.

```c++
//...
delete P3;
//...
```
El operador `delete` solo debe aplicarse a los objetos que se han asignado a través de `new`.



