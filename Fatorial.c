#include <stdio.h>

int fatorial(int num){
    
    int resultado=1;
    
    for(int i = num; i >= 1;i--){
       
       resultado*= i;
    }
    
    return resultado;
}

int main()
{
    int numero;
    
    printf("Digite um número. \n");
    scanf("%d", &numero);
    
    printf("%d",fatorial(numero));

    return 0;
}
