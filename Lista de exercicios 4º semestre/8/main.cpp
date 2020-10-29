#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>
#include<dirent.h>

/*Fazer um programa em "C" que leia nomes de pessoas compostos por um prénome e um sobrenome separados por um espaço em branco e imprima:
 -A lista de nomes em ordem alfabética do pré-nome;
 -A lista de nomes em ordem alfabética de sobrenomes;
 -O número médio de letras por nome. */


int main(){
      char nome1[100],sobrenome1[100],nome2[100],sobrenome2[100],nome3[100],sobrenome3[100];
      int tamanho1,tamanho2,tamanho3,tamanho4,tamanho5,tamanho6,opcao;
      float media_nome,media_sobr;
      printf("\nDigite seu nome:\n");
      gets(nome1);
      tamanho1 = strlen(nome1);

      printf("\nDigite seu sobrenome:\n");
      gets(sobrenome1);
      tamanho2 = strlen(sobrenome1);

      printf("\nDigite seu nome:\n");
      gets(nome2);
      tamanho3 = strlen(nome2);

      printf("\nDigite seu sobrenome:\n");
      gets(sobrenome2);
      tamanho4 = strlen(sobrenome2);


      printf("\nDigite seu nome:\n");
      gets(nome3);
      tamanho5 = strlen(nome3);

      printf("\nDigite seu sobrenome:\n");
      gets(sobrenome3);
      tamanho6 = strlen(sobrenome3);
      
      

       //media funcionando abaixo: 
      media_nome=(tamanho1+tamanho3+tamanho5)/3;
      media_sobr=(tamanho2+tamanho4+tamanho6)/3;
      printf("\nA media de letras por nome eh: %.2f",media_nome);
      printf("\nA media de letras por sobrenome eh: %.2f",media_sobr);
      questao:
      printf("\nDigite 1-A lista de nomes em ordem alfabetica do pre-nome \n2-A lista de nomes em ordem alfabetica de sobrenomes\n");
      scanf("%d",&opcao);
      switch (opcao){
      case 1:
      printf("\nNomes: \n");
      if(strcmp(nome1,nome2)<0 && strcmp(nome1,nome3)<0 &&strcmp(nome2,nome3)<0){
            printf("\n\n%s\n%s\n%s",nome1,nome2,nome3);
      }else if(strcmp(nome1,nome2)<0 && strcmp(nome1,nome3)<0 && strcmp(nome3,nome2)<0){
            printf("\n\n%s\n%s\n%s",nome1,nome3,nome2);
      }else if(strcmp(nome2,nome1)<0 && strcmp(nome2,nome3)<0 && strcmp(nome1,nome3)<0){
            printf("\n\n%s\n%s\n%s",nome2,nome1,nome3);
      }else if(strcmp(nome2,nome1)<0 && strcmp(nome2,nome3)<0 && strcmp(nome3,nome1)<0){
            printf("\n\n-%s\n%s\n%s",nome2,nome3,nome1);
      }else if(strcmp(nome3,nome1)<0 && strcmp(nome3,nome2)<0 && strcmp(nome1,nome2)<0){
            printf("\n\n%s\n%s\n%s",nome3,nome1,nome2);
      }else if(strcmp(nome3,nome1)<0 && strcmp(nome3,nome2)<0 && strcmp(nome2,nome1)<0){
            printf("\n\n%s\n%s\n%s",nome3,nome2,nome1);
      }
      break;
      case 2:
      printf("\nSobrenomes: \n");
      if(strcmp(sobrenome1,sobrenome2)<0 && strcmp(sobrenome1,sobrenome3)<0 &&strcmp(sobrenome2,sobrenome3)<0){
            printf("\n\n%s\n%s\n%s",sobrenome1,sobrenome2,sobrenome3);
      }else if(strcmp(sobrenome1,sobrenome2)<0 && strcmp(sobrenome1,sobrenome3)<0 && strcmp(sobrenome3,sobrenome2)<0){
            printf("\n\n%s\n%s\n%s",sobrenome1,sobrenome3,sobrenome2);
      }else if(strcmp(sobrenome2,sobrenome1)<0 && strcmp(sobrenome2,sobrenome3)<0 && strcmp(sobrenome1,sobrenome3)<0){
            printf("\n\n%s\n%s\n%s",sobrenome2,sobrenome1,sobrenome3);
      }else if(strcmp(sobrenome2,sobrenome1)<0 && strcmp(sobrenome2,sobrenome3)<0 && strcmp(sobrenome3,sobrenome1)<0){
            printf("\n\n%s\n%s\n%s",sobrenome2,sobrenome3,sobrenome1);
      }else if(strcmp(sobrenome3,sobrenome1)<0 && strcmp(sobrenome3,sobrenome2)<0 && strcmp(sobrenome1,sobrenome2)<0){
            printf("\n\n%s\n%s\n%s",sobrenome3,sobrenome1,sobrenome2);
      }else if(strcmp(sobrenome3,sobrenome1)<0 && strcmp(sobrenome3,sobrenome2)<0 && strcmp(sobrenome2,sobrenome1)<0){
            printf("\n\n%s\n%s\n%s",sobrenome3,sobrenome2,sobrenome1);
      }
      break;
      default:
            goto questao;
      break;
      }
} 