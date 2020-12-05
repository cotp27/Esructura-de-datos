# Funciones

Una función es un fragmento de código al que se puede llamar para realizar una tarea bien definida, como calcular el área de un rectángulo, calcular el impuesto de retención semanal para un empleado de la empresa u ordenar una lista de nombres en orden ascendente.

Para definir una función, debemos proporcionar la siguiente información al compilador:

* Tipo de retorno (Return type): Esto especifica el tipo de valor u objeto que devuelve la función. Por ejemplo, una función que calcula el área de un rectángulo podría devolver un valor de tipo 	`double`. 

*Observación: No se requiere una función para devolver un valor. Por ejemplo, puede simplemente producir alguna salida o modificar alguna estructura de datos. Si es así, el tipo de retorno es nulo. Una función que no devuelve ningún valor a veces se denomina **procedimiento**.*
	
*	Nombre de la función (Function name): Esto indica el nombre que se le da a la función. Idealmente, el nombre de la función debe proporcionar una pista al programador sobre lo que hace la función.

* Lista de argumentos (Argument list): Esto sirve como una lista de marcadores de posición para los valores que se pasarán a la función. Los valores reales se proporcionarán cuando se invoque la 	función. Por ejemplo, una función que calcula el área de un polígono podría tomar cuatro argumentos `double`; las coordenadas `x` e `y` de la esquina inferior izquierda del rectángulo y las coordenadas `x` e `y` de la esquina superior derecha del rectángulo.

* Observación: La lista de argumentos se proporciona como una lista separada por comas entre paréntesis, donde cada entrada consiste en el nombre del argumento y su tipo. Una función puede tener cualquier número de argumentos y la lista de argumentos puede incluso estar vacía.*
	
* Cuerpo de la función (Function body): Esta es una colección de declaraciones de C++ que definen las acciones reales que debe realizar la función, éste está encerrado entre llaves. Si la función devuelve un valor, el cuerpo generalmente terminará con una declaración de `return`, que especifica el valor final de la función.

```c++
[<tipo_retorno> <nombre_funcion>] ([<lista_argumentos>]){
  [<cuerpo_funcion>];
}
```

## Argumentos de Referencia

Por defecto, **los argumentos en los programas de C++ se pasan por valor**. A veces es útil que la función modifique uno de sus argumentos. Para hacerlo, podemos definir explícitamente que un argumento formal sea un **tipo de referencia**.

Cuando hacemos esto, cualquier modificación hecha a un argumento en la función modifica el argumento real correspondiente. Esto se llama **pasar el argumento por referencia**. A continuación se muestra un ejemplo, donde un argumento se pasa por valor y el otro se pasa por referencia.

```c++
#include <iostream>

using namespace std;

//declaro la funcion
void funcion(int , int&);

//funcion principal
int main(){
    int cat = 1;
    int dog = 2;

    funcion(cat,dog);
    
    cout<<"cat(valor) =" << cat <<endl;
    cout<<"dog(referencia) =" << dog <<endl;
 
    return 0;
}

// definicion de la funcion
void funcion(int valor, int& referencia){
    valor++;
    referencia++;
    
    cout<<"Luego de aplicar la función:"<<endl;
    cout<<"valor = "<<valor<<endl;
    cout<<"referencia = "<< referencia <<endl;
}
```
El resultado, es el sgte.

> valor = 2

> referencia = 3

> Luego de aplicar la función:

> cat(valor) = 1

> dog(referencia) = 3

Observe que alterar el argumento del valor no tuvo efecto en el argumento real (cat), mientras que modificar el argumento de referencia sí. Se considera que modificar los argumentos de una función es una forma bastante astuta de pasar información de una función, especialmente si la función devuelve un valor no nulo. 

Otra forma de modificar un argumento es pasar la dirección del argumento, en lugar del argumento en sí. Aunque un puntero se pasa por valor (y, por lo tanto, la dirección de donde está apuntando no se puede cambiar), podemos acceder al puntero y modificar las variables a las que apunta. Los argumentos de referencia logran esencialmente el mismo resultado con menos carga de notación.


