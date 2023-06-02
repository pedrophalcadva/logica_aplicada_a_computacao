#include <stdio.h>

float adicao(float num1, float num2){
    return num1 + num2;
}

float subtracao(float num1, float num2){
    return num1 - num2;
}

float multiplicacao(float num1, float num2){
    return num1 * num2;
}

float divisao(float num1, float num2){
    
    if(num2 == 0){
        num2 = 1;
    }
    return num1 / num2;
}

int main()
{
    float n1,n2;
    char operacao;
    
    printf("Digite o primeiro n�mero \n");
    scanf("%f",&n1);
    
    printf("Digite o segundo n�mero \n");
    scanf("%f",&n2);
    
    printf("Escolha a operacao \n");
    printf("+ - adi��o \n");
    printf("- - subtra��o \n");
    printf("* - multiplica��o \n");
    printf("/ - divis�o \n");
    
    scanf(" %c", &operacao);
    
    switch(operacao)
    {
        case '+': 
            printf("%.2f",adicao(n1,n2));
        break;  
        case '-': 
            printf("%.2f",subtracao(n1,n2));
        break;
        case '*': 
            printf("%.2f",multiplicacao(n1,n2));
        break;
        case '/': 
            printf("%.2f",divisao(n1,n2));
        break;
        default:
        printf("Operador inv�lido");
    }
    

    return 0;
}
