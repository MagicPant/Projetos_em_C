#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;

int main(){
    int custo;
    cout << "Insira o custo de fabrica: ";
    cin >> custo;
    cout << endl;

    cout << "\nO custo final do consumidor: " << custo + custo*0.28 + custo*0.45 <<"\n";
    system("pause");
    return 0;
}