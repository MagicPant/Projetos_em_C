/*Armazenar em Vetores,Nomes e Notas
PR1 e PR2 de 6 alunos.
Calcular a média de cada aluno e imprimir aprovado
se a méida for maior que 5 e reprovado se média for menor ou igual a 5.
OBS.: 2 vetores para as notas tipo float. 1 vetor para os nomes.
1 vetor para a média. 1 vetor para situação.*/
#include<string.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
    char nome[6][20];
    int media[6];
    float nota1[6],nota2[6];
    for(int i=0;i<6;i++){
        printf("\nDigite um nome de aluno:");
        scanf("%s",&nome[i]);
        printf("\nDigite a nota da P1 do aluno:");
        scanf("%f",&nota1[i]);
        printf("\nDigite a nota da P2 do aluno:");
        scanf("%f",&nota2[i]);
        media[i] = nota1[i]+nota2[i]/2; 
        if(media[i]>5){
            printf("\naluno %s Aprovado",nome[i]);
        }else if(media[i]<=5){
            printf("\naluno %s Reprovado",nome[i]);
        }
    }
}
