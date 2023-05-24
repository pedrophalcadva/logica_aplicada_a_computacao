#include <stdio.h>

int main() {
    float altura, maiorAltura = 0, menorAltura = 999;
    int i;
    
    for (i = 1; i <= 5; i++) {
        printf("Digite a altura da pessoa %d: ", i);
        scanf("%f", &altura);
        
        if (altura > maiorAltura) {
            maiorAltura = altura;
        }
        
        if (altura < menorAltura) {
            menorAltura = altura;
        }
    }
    
    printf("Maior altura: %.2f\n", maiorAltura);
    printf("Menor altura: %.2f\n", menorAltura);
    
    return 0;
}
