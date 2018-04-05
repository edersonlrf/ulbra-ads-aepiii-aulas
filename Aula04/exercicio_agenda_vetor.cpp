//  Agenda utilizando ponteiros e structs simulando um vetor alocado din�micamente.
//================================================================================
// Exerc�cio 2 da aula 3: Cada posi��o do vetor dever� armazenar:
// Hor�rio: composto de hora, minutos e segundos.
// Data: composto de dia, m�s e ano.
//�Compromisso: composto de uma data, hor�rio e texto que descreve o compromisso.
//===============================================================================
// A solu��o abaixo resolve o exerc�cio, por�m s� tem informa��o de hor�rio.
// Complete com as demais informa��es solicitadas no exerc�cio.
//�Fazer o cadastro de 3 compromissos completos e depois mostrar.

#include <stdio.h>
#include <stdlib.h>

struct agenda {
	int hora;
	int minutos;
	int segundos;
};

int main() {
	// Declara um ponteiro do tipo agenda.
	struct agenda *alunos;
	int n, i;

	// Aloca mem�ria para o vetor do tipo agenda na quantidade solicitada.
	alunos = (agenda *) malloc(sizeof(agenda) * n);

	printf("\n Informe a quantidade de cadastros : ");
	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		printf("\n Informe a agenda : %d \n hora/minuto/segundo : ", i+1);
		scanf("%d", &alunos[i].hora);
		scanf("%d", &alunos[i].minutos);
		scanf("%d", &alunos[i].segundos);
	}

	printf("\n Foram cadastrados :");
	for (i = 0; i < n; i++) {
		printf("%d ", alunos[i].hora);
		printf("%d ", alunos[i].minutos);
		printf("%d ", alunos[i].segundos);
	}

	// free(alunos);
	return(0);
}

