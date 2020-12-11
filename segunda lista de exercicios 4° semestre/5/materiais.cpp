#include "materiais.h"
#include<string.h>
using namespace std;

materiais::materiais()
    :meu_codigo(0),
    meu_nome(0),
    meu_saldo(0)
{

}

materiais::materiais(int cod,char nome,double saldo)
    :meu_codigo(cod),
    meu_nome(nome),
    meu_saldo(saldo)
{

}

materiais::~materiais()
{
    
}
char armazena_nome[7];
void materiais::SetMateriais(int cod)
{
    meu_codigo = cod;
}
void materiais::SetMateriais(char* nome)
{
    for(int i=0;i<7;i++){
        armazena_nome[i] = static_cast<char>(nome[i]);
    }
}

void materiais::SetMateriais(double saldo)
{
    meu_saldo = saldo;
}

int materiais::GetCod()
{
    return meu_codigo;
}
double materiais::GetSaldo()
{
    return meu_saldo;
}
char materiais::GetNome()
{
    cout<<armazena_nome<<endl;
    return meu_nome;
}


