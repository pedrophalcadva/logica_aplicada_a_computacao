#include <stdio.h>

void exibirNumeros(int num){ 
    for(int i = 1; i <= num;i++){
        printf("%d \n", i);
    }
}

int main()
{
    int numero;
    
    printf("Digite um número. \n");
    scanf("%d", &numero);
    exibirNumeros(numero);

    return 0;
}
