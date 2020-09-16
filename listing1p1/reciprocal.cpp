#include<cassert> 
#include "reciprocal.hpp"

double reciprocal (int i){
	
	assert(i!=0);
	return 1.0/i;
	/*
	assert
	Se proveer de una macro llamada assert (en inglés aserción), que se comporta como una función del tipo “if” y permite evaluar la condición de manera booleana. En caso de ser verdadera la decisión no se realiza ninguna acción. Por lo contrario, si la decisión es falsa, se terminará el programa mostrando el tipo de error; el cual incluye el nombre del archivo fuente, el número de línea y el texto de la condición.
	*/
}