/*Calculadora básica.
Modelar e programar, uma calculadora que executa as operações aritméticas básicas:
adição (+), subtração (-), multiplicação (*), divisão (/) e módulo (%).
As operações devem ser realizadas sobre número do tipo double.
O programa deve criar uma calculadora, mostrar um menu das opções de operação,
ler uma opção, solicitar o cálculo a calculadora e imprimir o resultado.
O programa deve permanecer em operação até o usuário escolha a opção de sair. */
#include <iostream>
#include <stdlib.h>
using namespace std;
#include "calculadora.cpp"
int main(){
    int opcao;
    double num1,num2;
    Calculadora basica(0,0);
    pergunta:
    cout<<"Digite o primeiro numero: ";
    cin>>num1;
    cout<<"Digite o segundo numero: ";
    cin>>num2;
    cout<<"Digite um numero para a operacao desejada:\n1)soma\n2)subtracao\n3)multiplicacao\n4)divisao\n5)modulo\n0)sair\n";
    cin>>opcao;
    cout<<endl;
    switch (opcao){
    case 1:
        cout<<"A soma dos valores eh: "<< basica.Soma(num1,num2) <<"\n"<<endl;
        goto pergunta;
    case 2:
        cout<<"A subtracao dos valores eh: "<< basica.Subtracao(num1,num2) <<"\n"<<endl;
        goto pergunta;
    case 3:
        cout<<"A multiplicacao dos valores eh: "<< basica.multiplicacao(num1,num2) <<"\n"<<endl;
        goto pergunta;
    case 4:
        cout<<"A divisao dos valores eh: "<< basica.divisao(num1,num2) <<"\n"<<endl;
        goto pergunta;
    case 5:
        cout<<"A modulo dos valores eh: "<< basica.modulo(num1,num2) <<"\n"<<endl;
        goto pergunta;
    case 0:
        goto sair;
    break;
    default:
        goto pergunta;
    }
    sair:
    return 1;
}