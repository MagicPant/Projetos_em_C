#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>
#include<dirent.h>
/* (30%) Fazer um programa que lê uma lista de 15 produtos
e e preços e armazena-los em um vetor do tipo da estrutura abaixo.
O programa deve, em seguida
ordenar o vetor em ordem alfabética de nome de produto e inflacionar os produtos cujo valor for menor que 100
em 5%. 
Por fim a lista de produtos/preços deve ser impressa.
Salvar a lista em um arquivo .txt chamado preços.txt*/
char produto[15][60];
float preco[15];

void ordenarListaDeProdutos(){
    int retorno = 0;
    char auxiliar[60];
    float auxiliarPreco;
    for(int i=0;i < 15;i++){
        printf("Produto[%d]: %s\n",i,produto[i]);
        for (int j = 0; j < 15; j++){
           retorno = strcmp(produto[i], produto[j]);
           printf("Retorno: %d\n",retorno);
           if(retorno > 0){
               strcpy(auxiliar, produto[i]);
               strcpy(produto[i],produto[j]);
               strcpy(produto[j],auxiliar);
               printf("%d - Produto[%d]: %s  | %d- Produto[%d]: %s\n",i,produto[i],j,produto[j]);
               system("pause");
               auxiliarPreco=preco[i];
               preco[i]=preco[j];
               preco[j]=auxiliarPreco;
           }
        }
        printf("Produto %s - valor: %f",produto[i],preco[i]);
    }
}
void inflacionar(){
    for(int i=0;i<15;i++){
        if(preco[i] < 100){
            preco[i]*=1.05;
        }
    }
}
void imprimirProdutos(){
    for(int i=0;i<15;i++){
        if(produto[i]!= NULL){
            printf("%d - produto: %s | valor: %.2f\n",i,produto[i],preco[i]);
        }
        system("pause");
    }
}
void lancarProdutos(){
    for(int i=0;i<15;i++){
        printf("%d - informe o produto: \n",i+1);
        gets(produto[i]);
        printf("%d - informe o preco: \n",i+1);
        scanf("%f", &preco[i]);
        fflush(stdin);
        system("cls");
    }
}
void imprimirNoArquivo(){
    char texto[1000];
    FILE *arquivo =fopen("precos.txt","a");
    for(int i=0;i<15;i++){
        fprintf(arquivo,"Produto: %s | valor: %.2f\n",i,produto[i],preco[i]);
    }
}
int main(){
    for(int i=0;i <15;i++){
        printf("%d - Informe o nome do produto: \n",i+1);
        gets(produto[i]);
        printf("%d - Informe o preco do produto: \n",i+1);
        scanf("%f", &preco[i]);
        fflush(stdin);
        system("cls");
    }
    ordenarListaDeProdutos();
    inflacionar();
    imprimirProdutos();
    imprimirNoArquivo();
    return 0;
}