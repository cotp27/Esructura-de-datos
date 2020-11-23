


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

# Flujos de control

## Declaración If 

```cpp
if (condicion_logica){
	if_sentecia;
}	
```

```cpp
if (condicion_logica){
	if_sentecia;
}else{
	else_sentecia;
}	
```

```cpp
if (condicion_logica){
	if_sentecia;
}else if (condicion_logica){
	else_if_sentecia;
}else{
	else_sentecia;
}	
```
## Declaración Switch

```cpp
switch (expresion){
	case (valor_constante_expresion):
		sentencia;
		break;
	case (valor_constante_expresion):
		sentencia;
		break;
	.
	.
	.
	case (valor_constante_expresion):
		sentencia;
		break;
	default:
		sentencia;
		break;
		
}
```

## Declaración While-Do y While

```cpp
while (condicion_logica){
	sentencia_1;
	sentencia_2;
	.
	.
	.
	sentencia_n;
		
}
```

```cpp
do{
	sentencia_1;
	sentencia_2;
	.
	.
	.
	sentencia_n;
		
}while (condicion_logica);
```

## Declaración While-Do y While
```cpp
for (type i = i_inicial ; i <= i_final ; i = i+const ){
	sentencia_1;
	sentencia_2;
	.
	.
	.
	sentencia_n;
}
```

# Funciones
