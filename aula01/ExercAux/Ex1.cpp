/* Este programa apresenta uma solu��o para o exerc�cio 1 da aula 11
Descri��o: L� um n�mero inteiro e calcula o dobro e o cubo deste n�mero
Criado em: 17/05/2008 Por: Edemar Costa Oliveira
*/
#include <stdio.h>
#include <conio.h>

int numero, dobro, cubo;

int main()
{
    printf("\n Informe o n�mero inteiro: ");
    scanf("%d", &numero); 

    dobro = numero * numero;
    cubo = numero * numero * numero; // poderia ser dobro * numero

    printf("\n O dobro deste n�mero �: %d", dobro);
    printf("\n O cubo deste n�mero �: %d", cubo);

    getch();
}
