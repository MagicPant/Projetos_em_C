/*
Definir uma classe que represente um círculo.

Esta classe deve possuir métodos Privados para:

calcular a área do círculo;
calcular a distância entre os centros de 2 círculos;
calcular a circunferência do círculo.
E métodos Públicos para:

definir o raio do círculo, dado um número real;
aumentar o raio do círculo, dado um percentual de aumento;
definir o centro do círculo, dada uma posição (X,Y);
imprimir o valor do raio; imprimir o centro do círculo. imprimir a área do círculo.
Criar um programa principal para testar a classe.
*/
#include<iostream>
using namespace std;
#include "circulo.cpp"

int main(){
    int raio,x,y;
    Circulo oval(0,0,0);
    cout <<"Digite o raio: ";
    cin>>raio;
    cout <<"\no x do centro: ";
    cin>>x;
    cout <<"\no y do centro: ";
    cin>>y;
    cout<<endl;
    oval.SetRaio(4);
    oval.SetCentro(x,y);
    cout << "Raio:"<<oval.GetRaio()
    << "\nCentro: X-" << oval.GetCentroX(x)<<" Y-"<<oval.GetCentroY(y) 
    << "\nArea:" << oval.GetArea() <<"*pi"
    << endl;
    return 1;
}