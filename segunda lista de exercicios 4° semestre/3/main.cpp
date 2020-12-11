/*Sistema de cálculo e impressão de informações de objetos geométricos.
O sistema deve permitir a impressão de uma forma geométrica
qualquer sem a necessidade de saber antecipadamente de qual tipo específico
a forma é. Entretanto, o sistema deve suportar apenas as seguintes formas:
retângulo, elipse e triângulo. Todas são formas geométricas, portanto,
possuem método de cálculo de área, cálculo do perímetro e impressão dos dados.
Dica: aqui deve ser usado o conceito de classe abstrata na modelagem e,
em caso de construção deste sistema,
use sobrecarga de operadores para impressão dos
dados e área das formas geométricas.*/
//colquei a formula de circunferencia no lugar da de elipse
#include<iostream>
#include <stdlib.h>
using namespace std;
#include "geometrico.cpp"
int main(){
    int opcao,num1,num2,num3,num4;
    geometrico calculo(0,0,0,0);
    repetir:
    cout<<"Digite a figura que deseja informar: \n1-duas variaveis\n2-quatro variaveis\n3-uma variavel\n0-sair\n";
    cin>>opcao;
    cout<<endl;
    switch (opcao){
    case 1:
        cout<<"Digite a base: ";
        cin>>num1;
        cout<<"Digite a altura: ";
        cin>>num2;
        calculo.forma(num1,num2);
    break;
    case 2:
        cout<<"\nDigite a base: ";
        cin>>num1;
        cout<<"\nDigite a altura: ";
        cin>>num4;
        cout<<"\nDigite o lado direito: ";
        cin>>num2;
        cout<<"\nDigite o lado esquerdo: ";
        cin>>num3;
        cout<<endl;
        calculo.forma(num1,num2,num3,num4);
    break;
    case 3:
        cout<<"Digite o raio ";
        cin>>num1;
        cout<<endl;
        calculo.forma(num1);
    break;
    case 0:
    break;
    default:
        goto repetir;
    }

}