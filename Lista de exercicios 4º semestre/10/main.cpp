#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>
#include<dirent.h>

/*Construir um programa em "C" que implementa uma agenda eletrônica.
 O programa deve ter um menu com as seguintes opções:
 • Entrar um novo nome na agenda.
 • Imprimir na tela os dados de uma das pessoas cadastradas (conforme solicitação).
 • Imprimir a lista de nomes cadastrados que comecem pela letra indicada.
 • Fim Cada entrada da agenda deve ter os seguintes campos: •char nome[30];•char endereco[100];•char fone[10];
 •long int CEP; Obs: a agenda deve ter capacidade para 100 entradas.
 ARMAZENAR OS VALORES DA AGENDA EM UM ARQUIVO .TXT */
char nome[30],endereco[100],fone[10],agenda[10];
char nomelido[30];
long int CEP;

    FILE *arquivo;
void novonome(){
    fflush(stdin);
    printf("\nDigite o nome: \n");
    gets(nome);
    printf("\nDigite o endereco: \n");
    gets(endereco);
    printf("\nDigite o fone: \n");
    gets(fone);
    printf("\nDigite o CEP: \n");
    scanf("%ld",&CEP);
    arquivo = fopen("Agenda.txt","a");
    if(arquivo== NULL){
        printf("\n\nArquivo nao existe\n\n");
    }
    fprintf(arquivo," %s ",nome);
    fprintf(arquivo, "%s ",endereco);
    fprintf(arquivo," %s ",fone);
    fprintf(arquivo," %ld\n",CEP);
    fclose(arquivo);
}
void imprimirdados(){
    bool cond=true;
    fflush(stdin);
    printf("\nQual o nome = ");
    gets(nome);
    arquivo = fopen("Agenda.txt","r");

    while(!feof(arquivo) && cond==true){
        fscanf(arquivo,"%s %s %s %ld\n",&nomelido,&endereco,&fone,&CEP);
        if(strcmp(nomelido,nome)==0){
            printf("\n\nNome=%s\nEndereco=%s\nFone=%s\nCEP=%ld\n",nomelido,endereco,fone,CEP);
            cond=false;
            system("pause");
        }
    }
    fclose(arquivo);    
}
void listanomes(){
    char letra[0];
    long tam;
    fclose(arquivo);
    fflush(stdin);
    printf("\nQual a letra? =");
    gets(letra);
    arquivo = fopen("Agenda.txt","r");
    while(fscanf(arquivo,"%s ",&nomelido) == 1){
        if(nomelido[0] == letra[0]){
            printf("\nNome= %s\n",nomelido);
        }
    }
    system("pause");
    fclose(arquivo);
}

int main(){
    FILE *arquivo;
    system("cls");
    int i=0;
    inicio:
    printf("\nQual acao deseja realizar? \n");
    printf("\n1-cadastrar um nome na agenda\n2-visualizar os dados de uma pessoa\n3-listar usuarios com a inicial indicada\n");
    scanf("%d",&i);
    switch (i){
    case 1:
        novonome();
        goto inicio;
    break;
    case 2:
        imprimirdados();
    break;
    case 3:
        listanomes();
    break;
    default:
        goto sair;
    break;
    }
    sair:
    fflush(stdin);
    printf("\nThats all folks");
    return 0;
}