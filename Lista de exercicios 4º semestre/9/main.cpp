#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>
#include<dirent.h>

/*Fazer uma função em "C" que retorna a razão entre dois números. A função deve retornar pelo comando return o valor 1 
se a operação foi possível e o valor 0 se a operação não foi possível (divisão por zero, por exemplo).
 O resultado da divisão deve retonar por um parâmetro por referência. */

int razao(float *num1,float *num2,float *div){
     if(*num2==0){
        return 0;
    }  
    *div= *num1/ *num2;
    printf("A razao entre ambos eh : %.2f \n",*div);
    system("pause");
    return 1;
}

int main(){
    float x1,x2,z=0;

    printf("Digite um numero: ");
    scanf("%f", &x1);  
    printf("Digite outro numero: ");
    scanf("%f", &x2);

    razao(&x1,&x2,&z); 
    
}