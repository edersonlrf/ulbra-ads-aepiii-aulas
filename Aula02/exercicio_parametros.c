/*
Fa�a um programa em C que declara e l� um vetor [10] local, de inteiros na fun��o
principal. A seguir, o programa principal passa o vetor a uma fun��o. Essa fun��o
ir� inverter a ordem dos dados desse array. No final o programa principal ir� mostrar
o array com a nova ordem dos elementos.
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <iostream>

void inverte(int *vetor);

int main() {
	int vetor[10];
	int i;

	for (i=0; i<=9; i++) {
		printf("%d \n", i+1);
		scanf("%d", &vetor[i]);
		fflush(stdin);
	}
	inverte(vetor);

	for (i=0; i<=9; i++) {
		printf("%d \n",vetor[i]);
	}

	system("pause");
}

void inverte(int *vetorparam) {
	int vaux[10], i;

	for (i=0; i<=9; i++) {
		vaux[i] = vetorparam[i];
	}

	for (i=9; i>=0; i--) {
		vetorparam[i] = vaux[9-i];
	}
}

