#include <stdio.h>

int main()
{
    
    int alternativa;
    
    printf("Qual deles é uma estrutura de decisão de múltplica escolha: \n");
           printf("1 - Switch/Case \n");
            printf("2 - If/Else \n");
            printf("3 - While \n");
            printf("4 - Do While \n");
            
        scanf("%d", &alternativa);
            
    switch(alternativa){
        case 1:
        printf("Correto");
        break;
        default:
        printf("Errado");
    }       
    
    return 0;
}
