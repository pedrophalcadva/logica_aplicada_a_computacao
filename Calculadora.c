#include <stdio.h>

int main()
{
    char operador;
    int n1,n2;
    float resultado;
    
    printf("Digite o operador. + , - , * , / \n");
    scanf("%c",&operador);
    
    printf("Digite o primeiro valor \n");
    scanf("%d",&n1);
    printf("Digite o segundo valor \n");
    scanf("%d",&n2);
    
    switch(operador){
        case '+':
            resultado = n1 + n2;
        break;
        case '-':
            resultado = n1 - n2;
        break;   
        case '*':
            resultado = n1 * n2;
        break;   
        case '/':
            resultado = n1 / n2;
        break;  
        default:
        printf("operador inválido");
    }
    
    printf("Resultado %.2f",resultado);
    
    
    return 0;
}
