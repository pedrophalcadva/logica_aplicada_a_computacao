//===============================================================================================
//                                                                                              |
// L�gica Aplicada � Computa��o!!!                                                              |
//                                                                                              |
//  Algoritmo que informe o nome do funcion�rio,salario e fa�a o acr�scimo de 10% do sal�rio e  |           |
//  ent�o exiba o nome do funcion�rio com o novo sal�rio.                                       |
//                                                                                              |
//===============================================================================================

#include <stdio.h>

int main()
{//In�cio

    char nome[40];
    float salario, novoSalario;
    
    printf("Digite o nome do funcion�rio: \n");
    scanf("%s",nome);
    
    printf("Digite o sal�rio atual do funcin�rio: \n");
    scanf("%f",&salario);
    
    novoSalario = salario * 0.1;
    printf("O novo salario do %s �: R$%.2f\n\n", nome, novoSalario);
    
    return 0;
    
}//Fim

