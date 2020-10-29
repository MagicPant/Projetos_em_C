#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>
#include<dirent.h>

/*Fazer uma rotina que recebe um array do tipo double e o 
número de valores que devem ser solicitados ao usuário e devolve o array preenchido com os valores digitados. */

int main(){
    int v;
    printf("\nDigite a quantidade de valores: \n");
    scanf("%d",&v);
    double vetor[v];
    for(int j=0;j<v;j++){
        printf("\n%d-",j);
        scanf("%lf",&vetor[j]);
    }
    printf("\nos valores digitados foram: \n");
    for(int w=0;w<v;w++){
        printf(" %d-[%.2lf] ",w,vetor[w]);
    }
}