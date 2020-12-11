#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>
#include<dirent.h>
#include<conio.h>
/*Faça um programa em C que calcula o produto dos números digitados
pelo usuário.
O programa em C deve permitir que o usuário digite
uma quantidade não determinada de números.
O programa em C encerra quando o usuário digita o valor zero. */
int main(){
    int num1, num2, prod;
    while(num1!=0 && num2!=0){
        printf("\nDigite um numero: \n");
        scanf("%d",&num1);
        if(num1==0){
            return 0;
        }
        printf("\nDigite outro numero: \n");
        scanf("%d",&num2);
        if(num2==0){
            return 0;
        }
        prod= num1*num2;
        printf("\nO produto dos numeros eh: %d \n", prod);
    }
}