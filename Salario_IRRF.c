#include <stdio.h>

int main()
{
    float salario, desconto, salario_liquido;
    
    printf("Digite o salário \n");
    scanf("%f",&salario);
    
    if(salario <= 1903.98){
        printf("Isento");
        desconto = 0;
    }else if(salario <= 2826.65){
        printf("7,5%%");
        desconto = salario * 0.75;
    }else if(salario <= 3751.05){
        printf("15%%");
        desconto = salario * 0.15;
    }else if(salario <= 4664.68){
        printf("22.5%%");
        desconto = salario * 0.225;
    }else{
        printf("27.5%%");
        desconto = salario * 0.275;
    }
    
    salario_liquido = salario - desconto;
    
    printf("Desconto R$ %.2f \n",desconto);
    printf("Salario Liquido R$ %.2f",salario_liquido);

    return 0;
}
