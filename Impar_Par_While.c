#include <stdio.h>

int main()
{
    int op = 1;
    int pares = 0;
    int impares = 0;
    int numero;
    
    while(op == 1){
        printf("Digite um n�mero. \n");
        scanf("%d",&numero);
        
        if(numero % 2 == 0){
            pares++;
        }else{
            impares++;
        }
        
        printf("Digite 1 para continuar.\n");
        scanf("%d",&op);
    }

    printf("Pares: %d \n", pares);
    printf("�mpares: %d \n", impares);
    
    return 0;
}
