#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>


int main(void){
    char Str[100];
    int result ;
    //instancia para trabalhar com arquivos
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


    strcpy(Str, "Linha de teste");
    //insere uma string no texto
    fputs(Str, arquivo);

    for(int i = 0; i < 10; i++){
        result = fprintf(arquivo,"Linha %d\n",i);
        if(result == EOF){
            printf("Erro de gravacao.");
        }
    }
    fclose(arquivo);

    arquivo = fopen("texto.txt","rt");

     //verificar se arquivo foi aberto para leitura
    if(arquivo == NULL){
        printf("Problemas na abertura do arquivo\n");
    }
    
    int i = 1;
    char *resultado;
    //feof - found end of file
    while(!feof(arquivo)){
        //Le uma linha
        //fgets le ate 99 caracteres ou ate o \n
        resultado = fgets(Str, 100, arquivo);
        if(resultado){
            printf("Linha %d: %s", i, Str);
        }
        i++;
    }
    system("pause");

}