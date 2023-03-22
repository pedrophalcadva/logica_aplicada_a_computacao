
//=======================================
//                                      |
// Lógica Aplicada à Computação!!!      |
//                                      |
//=======================================

#include <stdio.h>

int main()
{//Início

    char nome[10];
    float av1, av2, media;
    
    printf("Digite seu lindo nome: \n");
    scanf("%s",nome);
    
    printf("Digite a nota da AV1 do aluno: \n");
    scanf("%f",&av1);
    
    printf("Digite a nota da AV2 do aluno: \n");
    scanf("%f",&av2);
    
    media = (av1 + av2) / 2.0;
    
    printf("O Aluno %s ficou com a média: %.2f\n",nome, media);
    
//    printf("O Aluno %s tirou a nota: %.2f", nome, nota);
    
    return 0;
    
}//Fim


