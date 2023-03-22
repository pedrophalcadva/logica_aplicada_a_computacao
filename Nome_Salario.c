//===============================================================================================
//                                                                                              |
// Lógica Aplicada à Computação!!!                                                              |
//                                                                                              |
//  Algoritmo que informe o nome do funcionário,salario e faça o acréscimo de 10% do salário e  |           |
//  então exiba o nome do funcionário com o novo salário.                                       |
//                                                                                              |
//===============================================================================================

#include <stdio.h>

int main()
{//Início

    char nome[40];
    float salario, novoSalario;
    
    printf("Digite o nome do funcionário: \n");
    scanf("%s",nome);
    
    printf("Digite o salário atual do funcinário: \n");
    scanf("%f",&salario);
    
    novoSalario = salario * 0.1;
    printf("O novo salario do %s é: R$%.2f\n\n", nome, novoSalario);
    
    return 0;
    
}//Fim

