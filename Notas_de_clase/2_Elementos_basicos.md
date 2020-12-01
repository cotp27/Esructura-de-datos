# Elementos básicos de programación
- Los tipos fundamentales son los bloques de construcción básicos a partir de los cuales se construyen tipos más complejos.

  Type  | Description
  ------| -----------
	bool 	|	Valor booleano (verdadero o falso)
	char	|	carácter
	short |		entero corto
	int 	|	entero
	long 	|	entero largo
	float	|	número de punto flotante de precisión simple 
	double|	 	número de punto flotante de doble precisión
  
- También hay un tipo de enumeración o `enum`, para representar un conjunto de valores discretos. Juntas, las enumeraciones y los tipos `bool`, `char` e `int` se denominan tipos integrales (`integral types`). 
- Finalmente, hay un tipo especial `void`, que indica explícitamente la ausencia de cualquier tipo de información.

## Caracteres
Una variable `char` contiene un solo carácter. Un char en C ++ es típicamente de *8 bits*, pero el número exacto de bits utilizados para una variable char depende de la implementación particular. Al permitir diferentes implementaciones para definir el significado de los tipos básicos, como char, C ++ puede adaptar su código generado a la arquitectura de cada máquina y así lograr la máxima eficiencia. Sin embargo, esta flexibilidad puede ser una fuente de frustración para los programadores que desean escribir programas independientes de la máquina.

Un `literal` es un valor constante que aparece en un programa. Los literales de caracteres están encerrados entre comillas simples, como en 'a', 'Q' y '+'. Una barra invertida (`\`) se utiliza para especificar una cantidad de literales de caracteres especiales como se muestra a continuación.

Literal | Descripción
-----|------
'\n' |	nueva línea   			
'\t' |	tabulación
'\b' |	retroceso 			
'\0' |	nulo
'\’' |	una frase (una cita, cita simple)	
'\"' |	doble frase (cita doble)
'\\' |	backslash

El carácter nulo, `'\ 0'`, a veces se usa para indicar el final de una cadena de caracteres. Cada carácter está asociado con un código entero. La función `int(ch)` devuelve el valor entero asociado con una variable de caracteres `ch`.

## Enteros
Una variable `int` contiene un número entero, los enteros vienen en tres tamaños: `short int`, `int` (simple) y `long int`. Por ejemplo, los números 0, 25, 98765 y -3 son de tipo int. 

Se puede agregar el sufijo "`l`" o "`L`" para indicar un número entero largo, como en `123456789L`.

Las constantes octales (base 8) se especifican prefijando el número con el dígito **0**, y las constantes hexadecimales (base 16) se pueden especificar prefijando el número con **0x**. Por ejemplo,  **0**400 (base 8) y **0x**100 (base 16) representan el valor entero 256 (base 10).

Al declarar una variable, tenemos la opción de proporcionar una definición o valor inicial. Los nombres de las variables pueden consistir en cualquier combinación de letras, dígitos o el carácter de subrayado (`_`), pero el primer carácter no puede ser un dígito. 

```cpp
//...
short _small__Number; // entero corto indefinido
int octalNumber = 0400; // 400(base 8) = 256 (base 10)
long BigNumber = 314159265L;
//...
```
*Observación: Aunque es legal comenzar un nombre de variable con un guión bajo (“_”), es mejor evitar esta práctica, ya que algunos compiladores de C ++ usan esta convención para definir sus propios identificadores internos.*

## Enumeraciones

Una enumeración (`Enum`) es un tipo definido por el usuario que puede contener cualquier valor de un conjunto de valores discretos. Una vez definidas, las enumeraciones se comportan como un tipo integer.

Un uso común de las enumeraciones es proporcionar nombres significativos a un conjunto de valores relacionados. Cada elemento de una enumeración está asociado con un valor entero. Por defecto, estos valores se cuentan desde **0**, pero también es posible definir valores constantes explícitos como se muestra a continuación.

```cpp
#include <iostream> 

using namespace std;

int main(){
  enum Dia {Lunes , Martes , Miercoles , Jueves , Viernes , Sabado , Domingo};  
  Dia numero = Jueves;
  cout<<"El dia es: " << numero << endl;
  
  enum Animo {HAPPY = 3, SAD = 1, ANXIOUS = 4, SLEEPY = 2};
  Animo mi_animo = ANXIOUS;
  cout<<"Mi animo es: " << mi_animo << endl;
  
  return 0;
}
```
> El dia es: 3

> Mi animo es: 4


## Punto flotante

Una variable de tipo `float` tiene un número de punto flotante de precisión simple y una variable de tipo `double` contiene un número de punto flotante de precisión doble. 

Como sucede con los enteros, C ++ deja sin definir el número exacto de bits en cada uno de los tipos de punto flotante. Por defecto, los literales de punto flotante, como 3.14159 y -1234.567 son de tipo double.

La notación científica o exponencial puede especificarse usando `e` o `E` para separar la mantisa del exponente, como en 3.14**E**5, lo que significa 3.14 × 10^5. Para forzar que un literal sea flotante, se agregua el sufijo `f` o `F`, como en 2.0**f** o 1.234e-3**F**.

## Punteros
Cada variable se almacena en la memoria de la computadora en algún lugar  o dirección (*address*). Un **puntero** es una variable que contiene el valor de dicha dirección. 

Dado un tipo `T`, el tipo `T*` denota un puntero a una variable de tipo `T`. Por ejemplo, `int*` denota un puntero a un entero.

Se utilizan dos operadores esenciales para manipular punteros. 

	`&`:  Devuelve la dirección de memoria de la variable apuntada,
	
	`*`:  Devuelve el valor contenido en la dirección de memoria de la variable apuntada.

```cpp
#include <cstdlib>
#include <iostream>

using namespace std; 

int main(){
    char ch = 'Q';  //  ch es una variable char
    char* p = &ch;  //  p es un puntero de tipo char que apunta a la direccion de memoria de ch
    cout <<"*p = "<< *p << '\n'; // se imprime el valor contenido en p  
    ch = 'Z';   // ch cambia de valor   
    cout <<"*p = "<<  *p << '\n';   // el valor contenido en p es Z
    *p = 'X';       // el valor contenido en p es X
    cout <<"ch = "<< ch;     // el valor de ch es X
    return 0;
}
```
> *p = Q

> *p = Z

> ch = X

Veremos que los punteros son muy útiles cuando se construyen estructuras de datos donde los `objetos` están vinculados entre sí mediante el uso de punteros. Los punteros no necesitan apuntar solo a tipos fundamentales, como `char` e `int`; también pueden apuntar a tipos complejos e incluso a funciones. De hecho, la popularidad de C ++ se debe en parte a su capacidad para manejar entidades de bajo nivel como punteros.

Es útil tener un valor de puntero que apunte a nada, es decir, un `null pointer`. Por convención, a dicho puntero se le asigna el valor cero. Un intento de desreferenciar un puntero nulo da como resultado un error de tiempo de ejecución. 

Todas las implementaciones de C ++ definen un símbolo especial `NULL`, que es igual a cero. Esta definición se activa insertando la declaración `#include <cstdlib>` al comienzo del programa.

Mencionamos anteriormente que el tipo especial `void` se usa para indicar que no hay información de tipo. Aunque no podemos declarar que una variable sea de tipo void, podemos declarar que un puntero es de tipo `void*`. Tal puntero puede apuntar a una variable de cualquier tipo. Dado que el compilador no puede verificar la exactitud de tales referencias, se desaconseja el uso de punteros void*, excepto en casos inusuales donde se necesita acceso directo a la memoria de la computadora.

*Observación: Tenga cuidado al declarar dos o más punteros en la misma línea. El operador `*` se une con el nombre de la variable, no con el nombre del tipo. Considere la siguiente declaración engañosa.*

```cpp
int* x, y, z;
```
Esto declara una variable de puntero `x`, pero las otras dos variables son enteros simples. La forma más sencilla de evitar esta confusión es declarar una variable por declaración.


## Arrays (matrices)

### Unidimensionales
Una Array (matriz) es una colección de elementos del mismo tipo. Dado cualquier tipo `T` y una constante `N`, una variable de tipo `T[N]` contiene una matriz de `N` elementos, cada uno de tipo `T`. 

Cada elemento de la matriz está referenciado por su índice, es decir, un número de **0 a N-1.**

```cpp
#include <iostream>

using namespace std;

int main(){
    double f[5];
    int m[10];
    f[4]=2.5;
    f[0]=-1;
    f[1]=6;
    f[2]=10;
    f[3]=20;
    m[2]=4;
    m[1]=1.2;
    cout << f[m[2]]<<'\n';
    cout << f[3]+f[m[2]]<<'\n';
    cout << m[1];
    return 0;
}
```
> 2.5

> 22.5

> 1

Una vez declarado, no es posible aumentar el número de elementos en una matriz. Además, C ++ no proporciona una comprobación de tiempo de ejecución integrada para la suscripción de matrices fuera de los límites. Esta decisión es consistente con la filosofía general de C ++ de no introducir ninguna característica que ralentice la ejecución de un programa. La indexación de una matriz fuera de sus límites declarados es un error de programación común. Tal error a menudo ocurre "silenciosamente", y solo mucho después se nota sus efectos.

Veremos, mas adelante, que el tipo de vector de la Biblioteca de plantillas estándar (STL) de C ++ proporciona muchas de las capacidades de un tipo de matriz más completo, incluida la verificación del índice en tiempo de ejecución y la capacidad de cambiar dinámicamente el tamaño de la matriz.

### Bidimensionales

Una matriz bidimensional se implementa como un “array of arrays” ("matriz de matrices"). Por ejemplo, `int A[15] [30]` declara que `A` es una matriz de **30 objetos**, cada uno de los cuales es una matriz de **15 enteros**. Un elemento en dicha matriz se indexa como `A[i][j]`, donde `i` está en el rango de 0 a 14 y `j` está en el rango de 0 a 29.



Al declarar una matriz, podemos inicializar sus valores encerrando los elementos entre llaves ({...}). Al hacerlo, no tenemos que especificar el tamaño de la matriz, ya que el compilador puede resolver esto.

```cpp
#include <iostream>

using namespace std;

int main(){
    int A[2][3];
    int a[] = {10, 11, 12, 13};    // declaro e incializo a[4]
    bool b[] = {false, true};      // declaro e incializo b[2] 
    char c[] = {'c', 'a', 't'};    // declaro e incializo c[3]
    A[0][0]=0;
    A[1][0]=1;
    A[0][1]=2;
    A[1][1]=3;
    A[0][2]=4;
    A[1][2]=5;
    cout << A[2][3]<<endl;  // fuera del rango devuelve 0
    cout << A[1][2]<<endl;
    cout << b[1]<<endl;
    cout << c[2]<<endl;
    return 0;
}
```
> 0

> 5

> true

> t

Del mismo modo que es posible declarar una matriz de enteros, es posible declarar una matriz de punteros a enteros. Por ejemplo, `int* r[17]` declara una matriz `r` que consta de 17 punteros a objetos de tipo `int`. Una vez inicializado, podemos desreferenciar un elemento de esta matriz usando el operador `*`, por ejemplo, `*r[16]` es el valor del entero al que apunta el último elemento de esta matriz.

### Punteros y Arrays

Existe una conexión interesante entre las matrices y los punteros, que `C ++` heredó del lenguaje de programación `C`. El nombre de una matriz es equivalente a un puntero, al elemento inicial de la matriz y viceversa. 

En el ejemplo a continuación, `c` es una matriz de caracteres,  `p` y `q` son punteros al primer elemento de c. Sin embargo, se comportan esencialmente igual.

```cpp
#include <cstdlib>
#include <iostream>

using namespace std;

int main(){
    char c[] = {'c', 'a', 't'};  
    char* p = c; // p apunta a c[0] 
    char* q = &c[0]; // q apunta a c[0] 
    cout << c[2] <<'\n'<< p[2] <<'\n' << q[0]; 
    return 0;
}
```
> t

> t

> c

*Observación: Esta equivalencia entre nombres de matriz y punteros puede ser confusa, pero ayuda a explicar muchos de los misterios aparentes de C ++. Por ejemplo, dados dos arreglos c y d, la comparación (c == d) no prueba si el contenido de los dos arreglos es igual. Más bien compara las direcciones de sus elementos iniciales, que probablemente no sea lo que el programador tenía en mente. Si es necesario realizar operaciones en matrices completas (como copiar una matriz a otra), es una buena idea usar la **clase vector**, que forma parte de la Biblioteca de plantillas estándar (STL) de C ++.*

## String

Un literal de cadena (string), como "Hello World", se representa como una matriz de longitud fija de caracteres que terminan con el carácter nulo. 

Las cadenas de caracteres representadas de esta manera se llaman cadenas de estilo `C`, ya que se heredaron de `C`. Desafortunadamente, esta representación por sí sola no proporciona muchas operaciones de cadena, como concatenación y comparación. Asimismo, posee todas las peculiaridades de las matrices de C++, como se mencionó anteriormente.

Por esta razón, C++ proporciona un `Type` `string` (cadena) como parte de su Biblioteca de plantillas estándar (STL). Cuando necesitamos distinguir, llamamos a estas `STL strings`. 

Para usar cadenas STL es necesario incluir el archivo de encabezado `#incliude <string>`. Dado que las cadenas STL son parte del estándar `namespace` (el espacio de nombres estándar), su nombre completo es `std :: string`.

*Observación: Al agregar la declaración `using std :: string`, informamos al compilador que queremos acceder a esta definición directamente, omitiendo el prefijo `std ::`.*

Las cadenas STL se pueden concatenar usando el operador `+`, se pueden comparar entre sí usando el orden lexicográfico (o de diccionario), y se pueden ingresar y salir usando los operadores `>>` y `<<`, respectivamente.

```cpp
#include <string>
#include <iostream>

using namespace std;

using std::string;

int main(){
    string s = "to be";
    string t = "not " + s;      // t = “not to be”
    string u = s + " or " + t;  // u = “to be or not to be”
    if (s > t)                  // true: “to be” > “not to be”
    cout << u << '\n';                  // outputs “to be or not to be”

    string s1 = "John"; // s = “John”
    int i = s1.size(); // i = 4
    cout << i << '\n';
    char c = s1[3]; // c = ’n’
    cout << c << '\n';
    s1 += " Smith"; // now s = “John Smith”
    cout << s1 << '\n';
    return 0;
}
```
> to be or not to be

> 4

> n

> John Smith

También hay otras operaciones de cadena STL. Por ejemplo, podemos agregar una cadena a otra usando el operador `+=`. Además, las cadenas pueden indexarse como matrices y el número de caracteres en una cadena s viene dado por `s.size()`.

Dado que algunas funciones de la biblioteca requieren las viejas cadenas de estilo C, existe una función de conversión `s.c_str()`, que devuelve un puntero a una cadena de estilo C.

STL proporciona muchos otros operadores de cadenas, incluidos los operadores para extraer, buscar y reemplazar subcadenas.
