#include <stdio.h>
#include <malloc.h> // aloca��o din�mica de mem�ria 

//  o c�digo aloca dinamicamente mem�ria para um inteiro,
// atribui o valor 20 a essa mem�ria e, em seguida,
// imprime o valor armazenado nessa mem�ria e o tamanho de um inteiro em bytes.

int main(){
	int* y = (int*) malloc(sizeof(int));
	*y = 20;
	int z = sizeof(int);
	printf("*y= %i, z= %i\n", *y, z);
}
