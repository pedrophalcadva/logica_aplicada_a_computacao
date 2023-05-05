#include <stdio.h>

int main()
{
    int soma = 0;
    int valor;
    int op = 1;
    
    while(op == 1){
        printf("Digite um numero");
        scanf("%d", &valor);
        soma+=valor;
        //soma = soma + valor;
        
        printf("Deseja continuar? 1 para continuar ou 0 parar");
        scanf("%d",&op);
    }
    
    printf("Soma é : %d", soma);
    

    return 0;
}
