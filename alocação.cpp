#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main(){
    int j;
    float *n,soma=0,media,maior,menor;
    printf("\nDigite o numero de alunos: ");
    scanf("%d",&j);
    printf("\nn=%d",j);
    n = (float *) malloc (j*sizeof(float));
    for(int i=0;i<j;i++){
        printf("\nDigite a nota: ");
        scanf("%f",n+i);
        soma +=*(n+i);
    }
    maior = *n;
    menor = *n;
    for (int i = 0; i < j; i++){
        printf("\nEndereco: %d, nota: %.1f\n",n+i,*(n+i));
        if(*(n+i)>maior){
            maior = *(n+i);
        }
        if(*(n+i)<menor){
            menor = *(n+i);
        }
    }
    free(n);
    media=soma/j;
    printf("\nA media das notas eh: [%.2f]",media);
    printf("\nO maior numero eh: [%.2f]",maior);
    printf("\nO menor numero eh: [%.2f]\n",menor);
    getch();
}