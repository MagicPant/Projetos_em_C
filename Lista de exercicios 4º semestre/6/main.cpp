#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>
#include<dirent.h>

/*Fazer um programa em "C" que lê um conjunto de 10 valores inteiros e verifica se algum dos valores é igual a média dos mesmos. */

int main(){//terminar
    int var[10]={0},soma=0;
    float media=0;
    printf("\ninsira 10 valores: ");
    for(int i=0;i<10;i++){
        printf("\n[%d]- ",i);
        scanf("%d",&var[i]);
    }
    for(int j=0;j<10;j++){
        soma += var[j];
    }
    printf("soma dos valores = %d\n",soma);
        media = soma/10;
    printf("A media dos valores eh: %.1f ", media);
    for(int x=0;x<10;x++){
        if(media==var[x]){
            printf("\n\n[%d]-[%d] eh igual a media\n\n",x,var[x]);
        }
    }
}