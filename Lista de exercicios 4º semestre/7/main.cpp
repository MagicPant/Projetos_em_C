#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>
#include<dirent.h>
#include<conio.h>

/*Fazer um programa que lê valores para uma matriz do tipo "float"de 5 linhas por 3 colunas e 
imprime a diferença entre a média dos elementos das colunas pares e a média dos elementos das linhas ímpares. */

int main(){
    float matriz[5][3],med_linha,med_coluna,soma_lin=0,soma_col=0,diferenca;
    for(int i=0;i<5;i++){
        for(int j=0;j<3;j++){
            printf("\n[%d][%d]-",i,j);
            scanf("%f", &matriz[i][j]);
        }
    }
    for(int x=0;x<5;x++){
        for(int y=0;y<3;y++){
            if(y%2==0){
                soma_col += matriz[x][y];
            }
            if(x%2){
                soma_lin += matriz[x][y];
            }
        }
    }
    med_linha=soma_lin/9;
    med_coluna=soma_col/3;
    diferenca=med_coluna-med_linha;
    printf("\nA diferenca entre a media das colunas pares e a media das linhas impares: %.2f\n",diferenca);

}