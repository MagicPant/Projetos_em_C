#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>
#include<dirent.h>

/*Fazer um programa em "C" que lê o preço de um produto e 
 inflaciona esse preço em 10% se ele for menor que 100 e em 20% se ele for maior ou igual a 100.
 OBS: não use o comando "if" ou o operador de condição "?".  */



int main(){
    int tipo;
    float preco,infla1=0,infla2=0;
    printf("\nDigite um preco: \n");
    scanf("%f",&preco);
    escolha:
    printf("\nDigite 1 se o preco foi abaixo de cem e 2 se o preco foi acima de cem: \n");
    scanf("%d",&tipo);
    switch (tipo)
    {
    case 1 :
        infla1 = preco - preco * 0.1;
        printf("\n o valor do preco com inflacao abaixo de 100 eh: %.2f \n", infla1);
    break;
    case 2 :
        infla2 = preco - preco * 0.2;
        printf("\n[---O valor do preco com inflacao acima de 100 eh: %.2f---]\n", infla2);
    break;
    default:
        goto escolha;
    break;
    }
return 0;   
}        

    



    

