#include<iostream>
using namespace std;

int main(){
    //declara ponteiro do tipo int e inicializando ponteiro no new int
    int *ponteiroInt = new int;
    
    int valor = 150;
    ponteiroInt = &valor;
    //definindo valor do ponteiro
    cout << "\n*ponteiroInt = " 
    << *ponteiroInt 
    << "\tEndereco = " 
    << ponteiroInt 
    <<"\nValor ="
    << valor
    <<"\tEndereco = "
    << &valor; 

    delete ponteiroInt;
    *ponteiroInt=300;

    cout << "\n*ponteiroInt = " 
    << *ponteiroInt 
    << "\tEndereco = " 
    << ponteiroInt 
    <<"\n"; 
    return 0;
}