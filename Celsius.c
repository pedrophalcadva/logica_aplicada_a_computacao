#include <stdio.h>

float fahrenheitParaCelsius(float fahrenheit){
    return 5*(fahrenheit-32)/9;
}

float celsiusParaFahrenheit(float celsius){
 
    return (9*celsius/5) + 32;
}

void main()
{
    
    int esc;
    float temperatura;
    
    printf("Digite a conversão. 1 para converter em C° e 2 - para Fº \n");
    scanf("%d", &esc);
    
    printf("Digite a temperatura \n");
    scanf("%f", &temperatura);
    
    switch(esc){
        case 1:
            printf("%.2f C°",fahrenheitParaCelsius(temperatura));
            break;
        case 2:
            printf("%.2f F°",celsiusParaFahrenheit(temperatura));
            break;
        default:
            printf("Erro");
    }

}
