#include <stdio.h>
#include <stdlib.h>
void trocar(int *x,int *y,int *z);

int main(){
    int a,b,c;

    printf("Digite o valor de a:\n");
    scanf("%d",&a);
    printf("\nDigite o valor de b:\n");
    scanf("%d",&b);
    printf("\nDigite o valor de c:\n");
    scanf("%d",&c);
    trocar(&a,&b,&c);
    printf("\nO valor de a: %d",a);
    printf("\nO valor de b: %d",b);
    printf("\nO valor de c: %d",c);

    return 0;
}

void trocar(int *x,int *y,int *z){
    int aux1,aux2;
    if(*x>=*y && *x>=*z && *z>=*y){
        aux1 = *y;
        *y = *z;
        *z = aux1;
    }else if(*y>=*x && *y>=*z && *z>=*x){
        aux1 = *x;
        *x = *y;
        *y = *z;
        *z = aux1;
    }else if(*y>=*x && *y>=*z && *x>=*z){
        aux1 = *x;
        *x = *y;
        *y = aux1;
    }else if(*z>=*x && *z>=*y && *y>=*x){
        aux1 = *x;
        *x = *z;
        *z = aux1;
    }else if(*z>=*x && *z>=*y && *x>=*y){
        aux1 = *x;
        aux2 = *y;
        *x = *z;
        *y = aux1;
        *z = aux2;
    }
}
