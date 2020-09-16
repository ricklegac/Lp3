#include<stdio.h>
#include <stdlib.h>
#include <string.h>
#include "reciprocal.hpp"
int main(int argc, char **argv){

	int i;
	i = atoi(argv[1]);
	printf("el reciproco de %d is %g\n",i,reciprocal(i));//ctrl+shift+u 5c \ 
	return 0;
	/*
		atoi: cadena a numerico
	*/
}