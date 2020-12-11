/*Criar uma classe criptografia que contenha a sobrecarga dos operadores + e - 
para, respectivamente, criptografar e descriptografar uma mensagem de texto.
O algoritmo de criptografia é de livre escolha para o programador.
É sugerido o algoritmo de substituição por deslocamento.
Por exemplo, para o deslocamento 2, uma letra ‘A’ é cifrada como ‘C’,
a ‘L’ como ‘N’, a ‘Z’ como ‘B’, ... Para decifrar,
basta diminuir o deslocamento: um ‘C’ volta para ‘A’, ‘B’ volta para ‘Z’,... 
No programa principal ler uma mensagem do usuário e imprimir os resultados
das operações de cifrar e decifrar uma mensagem. Exemplo de uso das operações:

Criptografia cript(2);
char *cmsg = “algum texto” + cript; char *dmsg = cmsg – cript;*/
#include<iostream>
#include<string.h>
#include <stdlib.h>
using namespace std;
#include "crypto.cpp"
int main(){
    Crypto seguranca(0);
    char armazena[7];
    char* mensagem;
    cout<<"Digite algo: ";
    cin>>armazena;
    cout<<endl;
    for(int i=0;i<6;i++){
        mensagem[i] = armazena[i];
    }
    seguranca.Encrypt(mensagem);
    cout<<"\nSua senha voltou a ser:"<<seguranca.Decrypt()<<endl;
}
