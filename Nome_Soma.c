
//=======================================
//                                      |
// L�gica Aplicada � Computa��o!!!      |
//                                      |
//=======================================

#include <stdio.h>

int main()
{//In�cio

    char nome[10];
    float nota;
    
    printf("Digite seu lindo nome: \n");
    scanf("%s",nome);
    
    printf("Digite a nota do aluno: \n");
    scanf("%f",&nota);
    
    printf("O Aluno %s tirou a nota: %.2f", nome, nota);
    
    return 0;
    
}//Fim

