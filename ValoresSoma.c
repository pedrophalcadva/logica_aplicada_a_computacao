#include <stdio.h>

int main()
{
    int numero[5];
    int soma;
    float media;
    
    for(int i = 0; i < 5; i++){
        printf("Digite o numero - %d \n", i+1);
        scanf("%d",&numero[i]);
        
        soma += numero[i];
    }
    
    media = soma/5;
    
    printf("Soma é %d \n", soma);
    printf("Média é %.2f \n", media);

    return 0;
}