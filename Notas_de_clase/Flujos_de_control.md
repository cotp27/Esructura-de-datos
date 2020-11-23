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
