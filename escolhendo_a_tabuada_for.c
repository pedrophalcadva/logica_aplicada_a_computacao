#include <stdio.h>

int main()
{
   int resultado;
   int tabuada;
   
   printf("Digite o n�mero da tabuada! \n");
   scanf("%d", &tabuada);
   
   for(int i=0; i <= 10; i++){
       resultado = i * tabuada;
       printf("%d X %d = %d \n", tabuada,i,resultado);
   }
   
    return 0;
}
