#include <stdio.h>

int main() {
    int num, positivos = 0, negativos = 0;

    do {
        printf("Digite um numero (digite 0 para sair): ");
        scanf("%d", &num);
        if (num > 0) {
            positivos++;
        } else if (num < 0) {
            negativos++;
        }
    } while (num != 0);

    printf("Quantidade de valores positivos: %d\n", positivos);
    printf("Quantidade de valores negativos: %d\n", negativos);

    return 0;
}
