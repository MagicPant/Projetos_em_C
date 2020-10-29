#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>
#include<dirent.h>

/* Escrever um programa em "C" que solicita as notas das duas provas feitas por cada um dos alunos de uma turma
 (as notas tem de estar no intervalo [0 10]) e imprime para cada um a média das notas.
  O programa deve parar imediatamente após ter sido digitado o valor 50 para a nota da primeira prova.*/

int main(){
    float nota1, nota2, media;
do{
    do{
        printf("\nDigite a nota da primeira prova entre 0 e 10: \n");
        scanf("%f",&nota1);
          if(nota1==50){
            return 0;
          }
        printf("\nDigite a nota da segunda prova entre 0 e 10: \n");
        scanf("%f",&nota2);
        
        if((nota1 < 0) || (nota1 > 10) || (nota2 < 0) || (nota2 >10)){
              printf("Escreva novamente as notas!\n\n");
          }
    }while((nota1 < 0) || (nota1 > 10) || (nota2 < 0) || (nota2 > 10));
      media = (nota1+nota2)/2;
      printf("\nSua media eh: %.2f\n",media);
    }while(nota1 != 50);
    system("pause");
    return 0; 
}