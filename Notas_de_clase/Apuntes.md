# Introducción
La construcción de estructuras de datos y algoritmos requiere comunicar instrucciones a una computadora, y una excelente manera de realizar dicha comunicación es usar un lenguaje informático de alto nivel, como `C ++`.

C ++ evolucionó del lenguaje de programación C y, con el tiempo, ha experimentado una mayor evolución y desarrollo desde su definición original. Ha incorporado muchas características que no formaban parte de C, como constantes simbólicas, sustitución de funciones en línea, tipos de referencia, polimorfismo paramétrico a través de plantillas y excepciones. Como resultado, C ++ se ha convertido en un lenguaje de programación complejo. Afortunadamente, no necesitamos conocer cada detalle de este lenguaje sofisticado para poder usarlo de manera efectiva.

En estas notas presentamos un recorrido rápido por el lenguaje de programación C ++ y sus características. Sin embargo, sería imposible presentar una presentación completa del lenguaje en este breve espacio.

**Asunción:** El alumno ya está familiarizado con la programación en C++, por tal motivo las descripciones serán cortas.

C ++ es un lenguaje de programación potente y flexible, que fue diseñado para construir sobre las construcciones del lenguaje de programación C. Por lo tanto, con excepciones menores, C ++ es un superconjunto del lenguaje de programación C, compartiendo la capacidad de éste para tratar de manera eficiente el hardware a nivel de bits, bytes, palabras, direcciones, etc. Además, C ++ agrega varias mejoras sobre C (que motiva el nombre "C ++"), siendo una de la principales mejoras el concepto de una clase orientada a objetos.

Brevemente, podemos decir que una clase es un tipo (`type`) de dato abstracto (`TAD`) definido por el usuario que encapsula muchos mecanismos importantes, como la inicialización garantizada, la conversión implícita de tipos, el control de la gestión de la memoria, la sobrecarga del operador y el polimorfismo (que son temas importantes que veremos más adelante en estas notas). 

Una clase también tiene la capacidad de ocultar sus datos subyacentes. Esto permite que una clase oculte los detalles de su implementación y permite a los usuarios conceptualizar la clase en términos de una interfaz bien definida. Las clases permiten a los programadores dividir una aplicación en piezas u objetos pequeños y manejables; en consecuencia los programas resultantes son más fáciles de entender y de mantener.

# Un programa simple en C ++ 
Este programa ingresa dos enteros, que se almacenan en las variables x e y. Luego calcula su suma y almacena el resultado en una suma variable, y finalmente genera esta suma.
```cpp
#include <cstdlib>
#include <iostream>
/* This program inputs two numbers x and y and outputs their sum */
int main(){
    int x, y;
    long int n;
    std::cout << "Por favor ingrese 2 numeros: ";
    std::cin >> x >> y; // input x and y
    int sum = x + y; // compute their sum
    std::cout << "La suma es " << sum << std::endl;
    return EXIT_SUCCESS; // terminate successfully
}
```
Algunas cosas sobre este programa C ++ deberían ser bastante obvias. 
  1. Los comentarios se indican con dos barras (//). 
  2. Los comentarios de bloque más largos están encerrados entre / * y * /. 
  3. Las cantidades manipuladas por este programa se almacenan en tres variables enteras, x, y, y sum.
  4. Los operadores ">>" y "<<" se utilizan para entrada y salida, respectivamente.
## Elementos del programa
  1. Líneas 1 y 2, archivos de encabezado, `cstdlib` y `iostream`. Los archivos de encabezado se utilizan para proporcionar declaraciones y definiciones especiales, que son útiles para el programa. El primero (cstdlib) proporciona algunas definiciones estándar del sistema, y el segundo (iostream) proporciona las definiciones necesarias para entrada y salida.
  2. El punto de entrada inicial para los programas de C ++ es la función main. La declaración `int main ()` en la línea 4 declara que main es una función que no toma argumentos y devuelve un resultado entero. (En general, la función principal se puede llamar con los argumentos de la línea de comandos, pero no discutiremos esto.) 
     
     El cuerpo de la función se da entre llaves ({...}), que comienzan en la línea 4 y terminan en línea 11. El programa termina cuando se ejecuta la declaración de `return` en la línea 10.
  3. Por convención, la función `main` devuelve el valor cero para indicar éxito y devuelve un valor distinto de cero para indicar falla. El archivo de inclusión `cstdlib` define la constante `EXIT SUCCESS` como `0`. Por lo tanto, la instrucción return en la línea 10 devuelve 0, lo que indica una terminación exitosa.
  4. La declaración en la línea 6 imprime una cadena usando el operador de salida (`<<`). El enunciado en la línea 7 ingresa los valores de las variables x e y utilizando el operador de entrada (`>>`). Estos valores variables podrían ser suministrados, por ejemplo, por la persona que ejecuta nuestro programa.
  5. El nombre `std :: cout` indica que la salida se enviará a la secuencia de salida estándar (standard output stream). Hay otros dos flujos de E/S (I/O) importantes en C ++, la entrada estándar (standard input) es donde se lee típicamente la entrada y el error estándar (standard error) es donde se escribe la salida de error. Estos se denotan `std :: cin` y `std :: cerr`, respectivamente.
  
     El prefijo `std ::` indica que estos objetos son de la biblioteca estándar del sistema (`standard library`). Deberíamos incluir este prefijo al referirnos a objetos de la biblioteca estándar. No obstante, es posible informar al compilador que deseamos usar objetos de la biblioteca estándar, y así omitir este prefijo, utilizando la instrucción `using` (discutimos la declaración using más adelante) como se muestra a continuación.

**Asunción:** Para mantener nuestros ejemplos breves, a menudo omitimos las declaraciones include y using al mostrar código C ++. También usamos " //. . . " para indicar que se ha omitido algún código.

```cpp
#include <iostream>
using namespace std;
/* This program inputs two numbers x and y and outputs their sum */
int main(){
    //...
    cout << "Por favor ingrese 2 numeros: ";
    cin >> x >> y; // input x and y
    //...
    cout << "La suma es " << sum << endl;
    cout << n << endl;
    //...
}
```
 6. Observamos que la declaración en la línea 9 genera el valor de la variable `sum`, que en este caso almacena la suma calculada de `x` e `y`.
 7. Por defecto, la declaración de salida no produce un final de línea. El objeto especial `std :: endl` genera un carácter especial de fin de línea. Otra forma de generar un final de línea es generar el carácter de nueva línea, `\ n`.
 8. Si se ejecuta el programa, escribiendo en la consola
    > g++ <nombre_del_programa>.cpp –o <nombre_del_programa>
    
    > .\\<nombre_del_programa>
    
    de forma interactiva, es decir, con el usuario ingresando valores cuando se le solicite, la salida de este programa aparecerá como se muestra a continuación. 
  
    > Por favor ingrese 2 numeros: 7  35
    
    > La suma es 42


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



# Expresiones

Una expression combina variables y literales con operadores para crear nuevos valores.

*Observación: 
 a) En todo momento, usamos var para denotar una variable o cualquier cosa a la que se le pueda asignar un valor. 
 b) Usamos exp para denotar una expresión y type para denotar un tipo.*

### Operadores Aritmeticos

Operador  | Descripción
----------|-----------
exp + exp |  adición
exp - exp |   sustracción
exp * exp |  multiplicación
exp / exp |  división
exp % exp |  modular

### Operadores de incremento y decremento

Operador  | Descripción
----------|-----------
var ++ |		post incremento
var −− 	|	post decremento
++ var 	|	pre incremento
−− var 	|	pre decremento

### Operadores relacionales y lógicos	

Operador  | Descripción
----------|-----------
exp < exp   |    menor que
exp > exp   |    mayor que
exp <= exp  |    menor o igual
exp > = exp |    mayor o igual que
exp == exp  |    igual a
exp ! = exp |    no es igual a
!exp       |    	 lógico no
exp && exp  |   	 lógico y 
exp || exp  |   	 lógico o

Los operadores `&&` y `||` evaluan secuencialmente de izquierda a derecha.

### Operadores de Asignación

Además del operador de asignación familiar (`=`), C ++ incluye una forma especial para cada uno de los operadores binarios aritméticos (`+`, `-`, `*`, `/`, `%`) y cada uno de los operadores binarios binarios (`&`, `|`, `^`, `<<`, `>>`), que combina una operación binaria con asignación. Por ejemplo, la declaración `n + = 2` significa `n = n + 2`. Algunos ejemplos se muestran a continuación.
```cpp
//..
{//..
int i =10;
int j =5;
string s="yes";
i -= 4; // i = i - 2
j *= -2;// j= j * 2
s += "or no";// s= s + "or no"  
//...
}
```
Estos operadores de asignación no solo brindan conveniencia de notación, sino que también pueden ser más eficientes para ejecutar. 

*Observación: Se debe tener cuidado al realizar asignaciones entre objetos agregados (matrices, cadenas y estructuras). Por lo general, el programador tiene la intención de que dicha tarea copie el contenido de un objeto al otro. Esto funciona para cadenas STL y estructuras de estilo C (siempre que tengan el mismo tipo). Sin embargo, como se discutió anteriormente, las cadenas y matrices de estilo C no se pueden copiar simplemente a través de una sola declaración de asignación.*



