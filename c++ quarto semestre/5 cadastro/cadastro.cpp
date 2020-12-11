#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
//vai realizar leitura do arquivo cadastro.txt
//ler nome e armazenar em uma variavel chamada nome
//exibir esta variavel no terminal

int main(void){
    char nome[100];
    FILE *arquivo;

    arquivo = fopen("cadastro.txt", "w");

    if(arquivo == NULL){
        printf("Problemas na criacao do arquivo");
    }

    printf("\nDigite seu nome: ");
    scanf("%s",&nome);
    fputs(nome,arquivo);

    fclose(arquivo);

    arquivo = fopen("cadastro.txt","rt");
    if(arquivo == NULL){
        printf("Problemas na leitura do arquivo");
    }
    printf("\nnome: %s\n",nome);

    fclose(arquivo);
    system("pause");
}