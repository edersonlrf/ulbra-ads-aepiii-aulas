/*
2 - Criar um programa que leia um caracter e um string do teclado, e informe se o
caracter est� contido no texto lido.
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(void) {
	char s1[80], s2;
	int i;
	printf("Ler string: \n");
	gets(s1);
	printf("Ler caracter: \n");
	scanf("%c",&s2);

	for(i=0; i < strlen(s1); i++) {
		if (s1[i] == s2) {
			printf("%c est� contido na posi��o %d em %s \n", s2, i, s1);
		}
	}
	system("pause");
}

