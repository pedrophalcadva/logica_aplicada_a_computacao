#include <stdio.h>

int main()
{
    
    int carta[4][13] = 
    {
        {1,2,3,4,5,6,7,8,9,10,11,12,13},
        {1,2,3,4,5,6,7,8,9,10,11,12,13},
        {1,2,3,4,5,6,7,8,9,10,11,12,13},
        {1,2,3,4,5,6,7,8,9,10,11,12,13}
    };
    
    int naipe;
    int valor_carta;
    
    for(int i = 1; i <= 3; i++){
        printf("Digite o Naipe - 0 a 3 \n");
        scanf("%d", &naipe);
        
        printf("Digite a posicao da carta - 0 a 12. \n");
        scanf("%d",&valor_carta);
        
        switch(valor_carta){
            case 0:
                printf("Ás de ");
                break;
            case 1 ... 9:
                printf("%d de ",carta[naipe][valor_carta]);
                break;
            case 10:
                printf("Valete de ");
                break;
            case 11:
                printf("Rainha de ");
                break;   
            case 12:
                printf("Rei de ");
                break;
        }
        
        switch(naipe){
            case 0:
                printf("Copas");
                break;
            case 1:
                printf("Espadas ");
                break;
            case 2:
                printf("Ouros");
                break;
            case 3:
                printf("Paus");
                break;   
        }
        
        printf("\n");
    }

    return 0;
}
