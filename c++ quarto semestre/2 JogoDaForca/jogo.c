#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
//jogo da forca, ta incompleto mas vc n deu muito tempo pra resolver isso
int main(void){
    int vida=2,  pontos=0, x,  i;
    char tam_palavra, palavra[25], letra[25], lacuna[25]="_";
    printf("\n\nDigite a palavra secreta? \n\n");
    gets(palavra);
    system("cls");
     
    for(i=0;i<strlen(palavra);i++){
        lacuna[i]=' __ ';
    }
    tam_palavra = strlen(palavra);
    
    
    while(vida>=0){
        x=0;
        printf("\n %s \n",lacuna);
        printf("\n Digite uma letra: ");
        gets(letra);
        for(i=0; i<strlen(palavra);i++){
            if(letra[i]==palavra[i]){
                lacuna[i]=palavra[i];
                pontos++;
                x++;
            }
        }
        if(x==0){
            if(vida == 0){
                printf("\n\n voce morreu!");
                printf("\n\n a palavra era: %s",palavra);
                break;
            }else{
                printf("\n voce errou! restam %d vidas",vida);
                vida--;
            }
        }
        if(pontos == tam_palavra){
          printf("\n\nvoce ganhou!");
          printf("\n\n a palavra eh %s",palavra);
          break;
        }else if(x!=0){
             printf("\n\nvoce acertou uma letra!!");
        } 
    }
    printf("\n\n");
    system("pause");
}