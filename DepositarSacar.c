#include <stdio.h>

float sacar(float saldo,float valor){
    
    if(valor > saldo)
    {
        printf("Saldo insuficiente");
    }else{
        saldo -= valor;
    }
    
    return saldo;
}

float depositar(float saldo,float valor){
   
        saldo += valor;

    return saldo;
}

int main()
{
    float saldo = 100.52;
    
    
    sacar(saldo,100);
    
    saldo = sacar(saldo,100);
    printf("%.2f \n", saldo);
    
    saldo = depositar(saldo,200);
    printf("%.2f", saldo);
    
    return 0;
}
