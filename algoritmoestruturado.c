#include <stdio.h>

int main() {
    int num, pares = 0, impares = 0, soma_pares = 0, soma_total = 0, qtd_total = 0;
    float media_pares = 0, media_total = 0;

    printf("Digite os numeros positivos (digite 0 para sair):\n");

    while (1) {
        scanf("%d", &num);

        if (num == 0) {
            break;
        }

        if (num % 2 == 0) {
            pares++;
            soma_pares += num;
        } else {
            impares++;
        }

        soma_total += num;
        qtd_total++;
    }

    media_pares = (float) soma_pares / pares;
    media_total = (float) soma_total / qtd_total;

    printf("Quantidade de numeros pares: %d\n", pares);
    printf("Quantidade de numeros impares: %d\n", impares);
    printf("Media dos valores pares: %.2f\n", media_pares);
    printf("Media geral dos numeros: %.2f\n", media_total);

    return 0;
}
