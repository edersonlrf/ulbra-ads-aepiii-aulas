/*
Neste exemplo a passagem de par�metros � ilustrada na chamada soma(v1,v2) de
main. Nesta chamada, os argumentos v1 e v2 s�o passados por valor e os
par�metros formais (p1 e p2) da fun��o soma usam c�pias dos valores de v1 e v2
respectivamente. Ainda, na fun��o soma o valor de p1 � alterado, mas a vari�vel
v1 de main permanece inalterada.
*/

#include <stdio.h>
#include <stdlib.h>

int soma(int p1, int p2) {
	p1 += p2;
	return p1;
}

int main() {
	int v1 = 3, v2 = 5;
	printf("%d\n", soma(v1,v2));
	system("pause");
}

