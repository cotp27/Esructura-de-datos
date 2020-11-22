# Introducción
La construcción de estructuras de datos y algoritmos requiere comunicar instrucciones a una computadora, y una excelente manera de realizar dicha comunicación es usar un lenguaje informático de alto nivel, como `C ++`.

C ++ evolucionó del lenguaje de programación C y, con el tiempo, ha experimentado una mayor evolución y desarrollo desde su definición original. Ha incorporado muchas características que no formaban parte de C, como constantes simbólicas, sustitución de funciones en línea, tipos de referencia, polimorfismo paramétrico a través de plantillas y excepciones. Como resultado, C ++ se ha convertido en un lenguaje de programación complejo. Afortunadamente, no necesitamos conocer cada detalle de este lenguaje sofisticado para poder usarlo de manera efectiva.

En estas notas presentamos un recorrido rápido por el lenguaje de programación C ++ y sus características. Sin embargo, sería imposible presentar una presentación completa del lenguaje en este breve espacio.

**Asunción:** El alumno ya está familiarizado con la programación en C++, por tal motivo las descripciones serán cortas.

C ++ es un lenguaje de programación potente y flexible, que fue diseñado para construir sobre las construcciones del lenguaje de programación C. Por lo tanto, con excepciones menores, C ++ es un superconjunto del lenguaje de programación C, compartiendo la capacidad de éste para tratar de manera eficiente el hardware a nivel de bits, bytes, palabras, direcciones, etc. Además, C ++ agrega varias mejoras sobre C (que motiva el nombre "C ++"), siendo una de la principales mejoras el concepto de una clase orientada a objetos.

Brevemente, podemos decir que una clase es un tipo (`type`) de dato abstracto (`TAD`) definido por el usuario que encapsula muchos mecanismos importantes, como la inicialización garantizada, la conversión implícita de tipos, el control de la gestión de la memoria, la sobrecarga del operador y el polimorfismo (que son temas importantes que veremos más adelante en estas notas). 

Una clase también tiene la capacidad de ocultar sus datos subyacentes. Esto permite que una clase oculte los detalles de su implementación y permite a los usuarios conceptualizar la clase en términos de una interfaz bien definida. Las clases permiten a los programadores dividir una aplicación en piezas u objetos pequeños y manejables; en consecuencia los programas resultantes son más fáciles de entender y de mantener.

Al igual que muchos lenguajes de programación, crear y ejecutar un programa C ++ requiere varios pasos
  1. Creamos un archivo fuente C ++ en el que ingresamos las líneas de nuestro programa
  2. Guardar este archivo
  3. Ejecutamos el programa (llamado compilador, que crea una interpretación de código máquina de este programa)
     > g++ <nombre_del_programa>.cpp –o <nombre_del_programa>

  4. Otro programa, llamado enlazador (que normalmente es invocado automáticamente por el compilador), incluye cualquier función de código de biblioteca necesaria y produce el       archivo ejecutable por máquina final.
  5. Para ejecutar nuestro programa, el usuario solicita que el sistema ejecute este archivo.
     > .\<nombre_del_programa>
# Un programa simple en C ++ 
Este programa ingresa dos enteros, que se almacenan en las variables x e y. Luego calcula su suma y almacena el resultado en una suma variable, y finalmente genera esta suma.

```cpp
#include <cstdlib>
#include <iostream>
/* This program inputs two numbers x and y and outputs their sum */
int main(){
    int x, y;
    long int n;
    n = 1234567891010L;
    std::cout << "Por favor ingrese 2 numeros: ";
    std::cin >> x >> y; // input x and y
    int sum = x + y; // compute their sum
    std::cout << "La suma es " << sum << std::endl;
    std::cout << n << std::endl;
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
  
     El nombre `std :: cout` indica que la salida se enviará a la secuencia de salida estándar (standard output stream). Hay otros dos flujos de E/S (I/O) importantes en C ++, la entrada estándar (standard input) es donde se lee típicamente la entrada y el error estándar (standard error) es donde se escribe la salida de error. Estos se denotan `std :: cin` y `std :: cerr`, respectivamente.

  

