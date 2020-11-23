# Expresiones

Una expression combina variables y literales con operadores para crear nuevos valores.

*Observación: 
 a) En todo momento, usamos var para denotar una variable o cualquier cosa a la que se le pueda asignar un valor. 
 b) Usamos exp para denotar una expresión y type para denotar un tipo.*
## Operadores Aritmeticos

Operador  | Descripción
----------|-----------
exp + exp |  adición
exp - exp |   sustracción
exp * exp |  multiplicación
exp / exp |  división
exp % exp |  modular

## Operadores de incremento y decremento

Operador  | Descripción
----------|-----------
var ++ |		post incremento
var −− 	|	post decremento
++ var 	|	pre incremento
−− var 	|	pre decremento

## Operadores relacionales y lógicos	

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

## Operadores de Asignación

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

