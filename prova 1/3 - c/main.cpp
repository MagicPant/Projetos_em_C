#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>
#include<dirent.h>
#include<conio.h>
/* Uma agência bancária possui dois tipos de investimentos,
conforme o quadro abaixo.
Faça um algoritmo que receba o tipo do investimento e o valor do investimento,
calcule e mostre o valor corrigido de acordo com o tipo de investimentoescolhido.
Tipo - Descrição - Rendimento Mensal
1 - Poupança - 3%
2 - Fundos de Renda Fixa - 4% */
int main(){
    int tipo=1;
    float valor,poup,fund;
    printf("\nDigite o valor de investimento: ");
    scanf("%f", &valor);
    pergunta:
    printf("\nDigite o tipo de investimento: \n1 - Poupanca - 3 por cento \n2 - Fundos de Renda Fixa - 4 por cento \n");
    scanf("%d",&tipo);
    switch (tipo){
    case 1:
        poup= valor*0.03;
        printf("\nO valor mensal ganho com poupanca eh: %.2f\n ", poup);
        printf("\nO valor mensal ganho com a poupanca somado com o valor inicial eh: %.2f\n", (poup+valor));
    break;
    case 2:
        fund = valor*0.04;
        printf("\nO valor mensal ganho com fundos de renda fixa eh: %.2f\n ", fund);
        printf("\nO valor mensal ganho com fundos de renda fixa somados com o valor inicial eh: %.2f\n", (fund+valor));
    break;
    default:
        goto pergunta;
    break;
    }
    system("pause");
    return 0;
}