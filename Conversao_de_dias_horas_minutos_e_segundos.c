//===================================================================================================================
//                                                                                                                  |
// L�gica Aplicada � Computa��o!!!                                                                                  |
//                                                                                                                  |
//  2 - Fa�a um programa que leia quantidade de dias, horas, minutos e segundos e exiba o tempo real em segundo..   |                                    |
//                                                                                                                  |
//===================================================================================================================

#include <stdio.h>

int main()
{//In�cio

    int dias, horas, minutos, segundos, totalSegundos;

   printf("Digite a quantidade de dias: ");
   scanf("%d", &dias);

   printf("Digite a quantidade de horas: ");
   scanf("%d", &horas);

   printf("Digite a quantidade de minutos: ");
   scanf("%d", &minutos);

   printf("Digite a quantidade de segundos: ");
   scanf("%d", &segundos);

   totalSegundos = (dias * 24 * 60 * 60) + (horas * 60 * 60) + (minutos * 60) + segundos;
   printf("O tempo total em segundos �: %d\n", totalSegundos);
   
    return 0;
    
}//Fim

