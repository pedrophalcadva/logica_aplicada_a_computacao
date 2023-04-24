#include <stdio.h>

int main()
{
    int salario;
    int desconto, salario_liquido;
    
    printf("Digite salário \n");
    scanf("%d", &salario);
    
    switch(salario){
        case 0 ... 1302:
            printf("7,5%%");
            desconto = salario * 0.075;
        break;
        case 1303 ... 2571:
            printf("9%%");
            desconto = salario * 0.9;
        break;
        case 2572 ... 3857:
            printf("12%%");
            desconto = salario * 0.12;
        break;
        case 3858 ... 7508:
            printf("14%%");
            desconto = salario * 0.14;
        break;
        default:
        desconto = 877;
        
    }
    
    salario_liquido = salario - desconto;
    
    printf("Desconto R$%d \n", desconto);
    printf("Salário Líquido R$%d", salario_liquido);

    return 0;
}
