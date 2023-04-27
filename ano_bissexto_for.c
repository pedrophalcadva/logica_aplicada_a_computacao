#include <stdio.h>

int main()
{
    int contarBissextos = 0;
    
   for(int anos = 100; anos <= 2100;anos++){
       if(anos % 4 == 0){
           printf("%d \n",anos);
           contarBissextos++;
       }
   }
    printf("Quantidade anos bissextos %d", contarBissextos);
    return 0;
}
