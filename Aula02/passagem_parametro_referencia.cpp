/*
Neste exemplo a passagem de par�metro � ilustrada na chamada troca(&a,&b) de
main. Nesta chamada, os endere�os dos argumentos a e b, escritos da forma &a e
&b s�o passados para as vari�veis ponteiros x e y. Assim, os valores de a e b s�o
atualizados de acordo com as modifica-��es em x e y.
*/

#include <stdio.h>
#include <stdlib.h>

void troca(int *x, int *y) {
	int aux;
	aux = *x;
	*x = *y;
	*y = aux;
}

int main() {
	int a = 0, b = 5;
	troca(&a, &b);
	printf("%d %d", a, b);
}

