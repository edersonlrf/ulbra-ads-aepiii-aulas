/* Este programa apresenta uma solu��o para o exerc�cio 2 da aula 11
Descri��o: L� uma quantidade de chuva dada em polegadas e imprime
o equivalente em mil�metros ( 1 pol = 25,4mm)
Criado em: 17/05/2008 Por: Edemar Costa Oliveira
*/
#include <stdio.h>
#include <conio.h>

float Qtd_Chuva_em_polegadas, Qtd_Chuva_em_mm;

int main()
{
    printf("\n Informe a quantidade de chuva em polegadas: ");
    scanf("%f", &Qtd_Chuva_em_polegadas); 

    Qtd_Chuva_em_mm = Qtd_Chuva_em_polegadas * 25.4;

    printf("\n A quantidade de chuva em mm �: %f", Qtd_Chuva_em_mm);

    getch();
}
