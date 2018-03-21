#include <stdio.h>

int elevado(int x, int y); // Prot�tipo da fun��o.

int main() {
	int local, b, e;
	printf("Digite a base e o expoente: \n");
	scanf("%d %d", &b, &e);
	fflush(stdin);
	local = elevado(b, e); // Chamada passando par�metros.
	printf("\nResultado: %d \n", local);
}

// Implementa��o da fun��o.
int elevado(int x, int y) {
	int retorno = 1;
	if (y <= 0) {
		retorno = 1;
	} else {
		for (;y > 0; y--) {
			retorno = retorno * x;
		}
	}
	return (retorno);
}

