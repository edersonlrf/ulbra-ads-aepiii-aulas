/* Este programa apresenta uma solu��o para o exerc�cio 7 da aula 11
Descri��o: Escreva um programa que leia um caracter digitado pelo usu�rio, 
imprima o caracter digitado e o c�digo ASCII correspondente a este caracter.
Criado em: 29/05/2008 Por: Edemar Costa Oliveira
*/
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
int main()
{
    char letra;
    system("color f1");
    printf("\t\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0");
    printf("\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\n");
    printf("\t\xb0 Caracter ASCII  \xb0\n");
    printf("\t\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0");
    printf("\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\n\n");
   
    printf("Digite um caracter: ");
    scanf("%c", &letra);
    letra = getch();
    printf("C\xA2 digo ASCII corresponde a %c = % d \n\n", letra, letra);
    system("pause");    
}
