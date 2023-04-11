#include <stdio.h>

int main() {
    float salario, comissao;

    printf("Informe o seu salario: ");
    scanf("%f", &salario);

    if (salario > 2000.0) {
        comissao = salario * 0.05;
    } else {
        comissao = salario * 0.10;
    }

    printf("Sua comissao eh de R$%.2f e seu novo salario eh de R$%.2f.\n", comissao, salario + comissao);

    return 0;
}

