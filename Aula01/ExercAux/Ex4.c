/* Este programa apresenta uma solu��o para o exerc�cio 4 da aula 11
Descri��o: Escrever um programa que leia 3 valores, a, b e c e calcule:
A)  �rea do tri�ngulo que tem a por base e b por altura
B)  �rea do trap�zio que tem a e b por bases e c por altura
 ((base menor + base maior) *altura)/2
C)  �rea do c�rculo de raio c.
D) �rea do quadrado de lado b
E) �rea do ret�ngulo de lados a e b
Criado em: 17/05/2008 Por: Edemar Costa Oliveira
*/
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
int main()
{
   float a,b,c,triangulo,trapezio,circulo,quadrado,retangulo;
   system("color f1");
   
   // Este c�digo implementa um menu com caracteres ASCII
   printf("\xc9");
   printf("\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd");
   printf("\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd");
   printf("\xbb");   
   printf("\n\xba CALCULANDO AREAS  \t\xba");
   printf("\n\xba TRIANGULO \t\t\xba");
   printf("\n\xba TRAPEZIO \t\t\xba");
   printf("\n\xba CIRCULO \t\t\xba");
   printf("\n\xba QUADRADO \t\t\xba");
   printf("\n\xba RETANGULO \t\t\xba\n");
   printf("\xc8");  
   printf("\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd");
   printf("\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd");
   printf("\xbc\n\n");  
   // Fim Menu
          
    printf("\t Digite valor A: ");
    scanf("%f",&a);
    printf("\t Digite valor B: ");
    scanf("%f",&b);
    printf("\t Digite valor C: ");
    scanf("%f",&c);
    
    triangulo= a*b/2;
    trapezio= (a+b)*c/2;
    circulo= 3.1416 * (c*c);
    quadrado= b*b;
    retangulo= a*b;
    
    printf("\n A area do triangulo \x82: %.2f \n",triangulo);
    printf("A area do trapezio \x82: %.2f \n",trapezio);
    printf("A area do circulo \x82: %.2f \n",circulo);
    printf("A area do quadrado \x82: %.2f \n",quadrado);
    printf("A area do retanguloo \x82: %.2f \n\n",retangulo);
    
    system("pause");    
}

