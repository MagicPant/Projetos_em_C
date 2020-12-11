#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>
#include<dirent.h>
#include<conio.h>

/*(40%) Dado um vetor de 100 posições preenchido com valores seqüenciais a partir de zero e outro
 vetor preenchido com os valores que estão em índices ímpar do primeiro vetor,
 crie um algoritmo que escreva os dois vetores em um arquivo de texto (um vetor em cada linha)
 e também a soma dos valores dos vetores (determinada por uma função).
 Salve os tres vetores no arquivo resultVetor.txt
*/
char vetor1[100],vetor2[100],somaVet[100],resto;


FILE *arquivo;

void PreencheVetor(){
    printf("\nDigite um algo: ");
    scanf("%s", &vetor1);
    arquivo = fopen("resultVetor.txt","a");
     if(arquivo== NULL){
        printf("\n\nArquivo nao existe\n\n");
    }
    fprintf(arquivo,"%s",vetor1);
    fclose(arquivo);
   
    
}
void LerVetor(){
    char ler1[100],soma[100];
    arquivo = fopen("resultVetor.txt","r");
    while(fscanf(arquivo,"%s ",ler1) != EOF){
        printf("\n%s",ler1);
        for(int i=0;i<100;i++){
            resto =  ler1[i] % 2;
            if(resto == 1){
                printf("\n%s",vetor2[i]);
                soma[i] = vetor1[i] + vetor2[i];
                printf("\n%s",soma);
            }
        }
        

        
    }
}


int main(){
    int opcao;
    pergunta:
    printf("\nDigite o que deseja realizar: \n1-digitar os valores \n2-ler os valores\n");
    scanf("%d",&opcao);
    switch (opcao){
    case 1:
        PreencheVetor();
    break;
    case 2:
        LerVetor();
    break;
    default:
        goto pergunta;
    break;
    }



}