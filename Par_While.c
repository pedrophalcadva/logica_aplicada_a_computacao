#include <stdio.h>

int main()
{
    int repeticao;
    int contador=1;
    int valor;
    
    printf("Quantas vezes voc� quer repetir?\n");
    scanf("%d", &repeticao);
    
    while(contador <= repeticao){
        
        printf("Digite um n�mero");
        scanf("%d",&valor);
        
        if(valor % 2 == 0){
            printf("%d \n",valor);
        }
        
        
        contador++;
    }

    return 0;
}
