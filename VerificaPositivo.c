#include <stdio.h>

void verificaPositivo(int a){
    
    if(a >= 0){
        printf("� positivo");
    }else{
       printf("� negativo"); 
    }
}

void main()
{
    
    int numero;
    
    printf("Digite um valor! \n");
    scanf("%d",&numero);
       
    verificaPositivo(numero);


}
