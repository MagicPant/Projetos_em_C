#include<iostream>
using namespace std;
/*Escreva um programa que declare uma matriz 100x100 de inteiros.
Você deve inicializar a matriz com zeros usando ponteiros para endereçar
seus elementos.
Preencha depois a matriz com os números de 1 a 10000,
também usando ponteiros.*/
/* Problema das matrizes ---------------- */
#include <stdio.h>


int main (){
int mat[100][100];
int *p;
int soma = 0;

p = &mat[0][0];   /* Inicializa o ponteiro no inicio da matriz */

/* Inicializando a matriz com zeros.. */
for (int i=0; i<100; i++)
  for (int j=0; j<100; j++){
    *p = 0;
    p++;
    }

/* Preenchendo a matriz com numeros */
p = &mat[0][0];  /* Inicializa o ponteiro no inicio da matriz */
for (int i=0; i<100; i++)
  for (int j=0; j<100; j++){
    *p = soma;
    soma++;
    p++;
    }
}