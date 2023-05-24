#include <stdio.h>

int main() {
    float num1, num2, result;
    char op;

    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);

    while (1) {
        printf("Digite a operacao (+, -, *, /) ou 'q' para sair: ");
        scanf(" %c", &op);

        if (op == 'q') {
            break;
        }

        printf("Digite o segundo numero: ");
        scanf("%f", &num2);

        switch (op) {
            case '+':
                result = num1 + num2;
                printf("%.2f + %.2f = %.2f\n", num1, num2, result);
                break;
            case '-':
                result = num1 - num2;
                printf("%.2f - %.2f = %.2f\n", num1, num2, result);
                break;
            case '*':
                result = num1 * num2;
                printf("%.2f * %.2f = %.2f\n", num1, num2, result);
                break;
            case '/':
                if (num2 == 0) {
                    printf("Nao eh possivel dividir por zero!\n");
                } else {
                    result = num1 / num2;
                    printf("%.2f / %.2f = %.2f\n", num1, num2, result);
                }
                break;
            default:
                printf("Operacao invalida!\n");
        }

        num1 = result;
    }

    printf("Resultado final: %.2f\n", num1);

    return 0;
}
