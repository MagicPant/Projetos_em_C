#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>


int main(void){
    char Str1[100], Str2[100], Str3[100], telef[100];
    int ano, idade;
    /* Gerar arquivo TXT com o seguinte conteudo: Nome, Sobrenome: , endereco: , telefone:, 
    ano de nascimento: , idade: exibir idade realizando calculo atraves do ano de nascimento. */
    FILE *arquivo;
    //r - read lê arquivo
    //w - write gera arquivo
    //a - add adiciona informação no arquivo
    //criar arquivo texto.txt
    arquivo = fopen("texto.txt", "wt");
    //verificar se arquivo foi criado
    if(arquivo == NULL){
        printf("Problemas na criacao do arquivo");
    }

    printf("\nDigite seu nome: ");
    scanf("%s", &Str1);
    
    printf("\nDigite seu sobrenome: ");
    scanf("%s", &Str2);

    printf("\nDigite seu endereco: ");
    scanf("%s", &Str3);
    
    printf("\nDigite seu telefone: ");
    scanf("%s", &telef);

    printf("\nDigite em que ano voce nasceu: ");
    scanf("%d", &ano);

    idade= 2020-ano;

    fprintf(arquivo,"\nseu nome eh: %s",Str1);
    fprintf(arquivo,"\nseu sobrenome eh: %s",Str2);
    fprintf(arquivo,"\nseu endereco eh: %s",Str3);
    fprintf(arquivo,"\nseu telefone eh :%s",telef);
    fprintf(arquivo,"\no ano em que vc nasceu: %d",ano);
    fprintf(arquivo,"Sua idade eh: %d\n",idade);



    fclose(arquivo);
    system("pause");
}