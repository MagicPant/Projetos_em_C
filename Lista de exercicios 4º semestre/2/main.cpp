#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>
#include<dirent.h>
#include<windows.h>

/*Fazer um programa que lê um valor, um operador (+,-,*,/)
 e outro valor e imprime o resultado da expressão: <valor 1> <operador> <valor 2> */

int main(){
    int valor1,valor2,resultado,operador;
        inicio:
        printf("\nDigite um valor : ");
        scanf("%d",&valor1);
        printf("\nDigite um operador : 1(+) 2(-) 3(*) 4(/) \n");
        scanf("%d",& operador);
        printf("\nDigite outro valor  : ");
        scanf("%d",&valor2);
        switch (operador)
        {
        case 1 :
            resultado=valor1+valor2;
            printf("\nO resultado da expressao eh: %d", resultado);
        break;
        case 2 :
            resultado=valor1-valor2;
            printf("\nO resultado da expressao eh: %d", resultado);
        break;
        case 3 :
            resultado=valor1*valor2;
            printf("\nO resultado da expressao eh: %d", resultado);
        break;
        case 4 :
            resultado=valor1/valor2;
            printf("\nO resultado da expressao eh: %d", resultado);
        break;
        default:
            goto inicio;
        break;                    
    }
    system("pause");
}