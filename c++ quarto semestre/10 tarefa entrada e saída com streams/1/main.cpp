#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;

int main(){
    float val,nul,bra,tot;
    
    cout << "Insira o numero total de votos: ";
    cin >> tot;
    cout << endl;

    cout << "Insira o numero de votos em branco : ";
    cin >> bra;
    cout << endl;

    cout << "Insira o numero de votos nulos: ";
    cin >> nul;
    cout << endl;

    cout << "Insira o numero de votos validos:  ";
    cin >> val;
    cout << endl;

    cout << "\nO percentual de votos brancos em relacao ao total eh: " << bra / tot*100 << "%\nO percentual de nulos em relacao ao total: " << (nul / tot)*100 << "%\nO percentual de validos em relacao ao total: " << (val / tot)*100 <<"%\n";
    system("pause");
    return 0;
}