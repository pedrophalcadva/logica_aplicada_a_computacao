#include <stdio.h>

int main()
{
    
    int alternativa;
    
    printf("Qual deles � uma estrutura de decis�o de m�ltplica escolha: \n");
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
