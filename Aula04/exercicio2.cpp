/*
2. C�lculo do resto da divis�o de dois n�meros.
- Considere a seguinte fun��o que calcula o resto da divis�o de dois n�meros, atrav�s
da sucessiva subtra��o ao 1� n�mero do valor do 2� n�mero.
- M�todo Recursivo.
- Implementar, testar e fazer o m�todo interativo e a sequ�ncia temporal para os
valores: 20/3 e 12/4
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int res(int x, int y) {
	if (x < y) {
		return(x);
	}
	return(res(x - y, y));
}

int main() {
	int numerador;
	int divisor;
	printf("Numerador: ");
	scanf("%d", &numerador);
	printf("Divisor: ");
	scanf("%d", &divisor);
	printf("%d \n", res(numerador, divisor));
	system("pause");
}

