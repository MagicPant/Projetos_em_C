#include "agenda.h"


agenda::agenda()
    :meu_nome(0),
    meu_email(0),
    meu_telefone(0),
    meu_endereco(0),
    meu_aniversario(0)
{

}

agenda::agenda(char nome,char email,char telefone,char endereco,char aniversario)
    :meu_nome(nome),
    meu_email(email),
    meu_telefone(telefone),
    meu_endereco(endereco),
    meu_aniversario(aniversario)
{

}

agenda::~agenda()
{
    
}
int armazena_fidelidade,armazena_qualidade;
char armazena_nome[10],armazena_email[10],armazena_telefone[10],armazena_endereco[10],armazena_aniversario[10],armazena_data[10];
void agenda::SetGeral(char* nome,char* email,char* telefone,char* endereco,char* aniversario)
{
    for (int i = 0; i < 10; i++){
         armazena_nome[i] = static_cast<char>(nome[i]);
         armazena_email[i] = static_cast<char>(email[i]);
         armazena_telefone[i] = static_cast<char>(telefone[i]);
         armazena_endereco[i] = static_cast<char>(endereco[i]);
         armazena_aniversario[i] = static_cast<char>(aniversario[i]);
         
    }
}




void agenda::SetCliente(char* nome,char* email,char* telefone,char* endereco,char* aniversario,char* data,int fidelidade)
{
     armazena_fidelidade=fidelidade;
     for (int i = 0; i < 10; i++){
        armazena_nome[i] = static_cast<char>(nome[i]);
        armazena_email[i] = static_cast<char>(email[i]);
        armazena_telefone[i] = static_cast<char>(telefone[i]);
        armazena_endereco[i] = static_cast<char>(endereco[i]);
        armazena_aniversario[i] = static_cast<char>(aniversario[i]);
        armazena_data[i] = static_cast<char>(data[i]);
    }
}
void agenda::SetFornecedor(char* nome,char* email,char* telefone,char* endereco,char* aniversario,int qualidade)
{
    armazena_qualidade=qualidade;
     for (int i = 0; i < 10; i++){
        armazena_nome[i] = static_cast<char>(nome[i]);
        armazena_email[i] = static_cast<char>(email[i]);
        armazena_telefone[i] = static_cast<char>(telefone[i]);
        armazena_endereco[i] = static_cast<char>(endereco[i]);
        armazena_aniversario[i] = static_cast<char>(aniversario[i]);      
    }
}

char agenda::GetGeral(){
    cout<<"\nSeu nome: "<<armazena_nome
    <<"\nSeu email: "<<armazena_email
    <<"\nSeu telefone: "<<armazena_telefone
    <<"\nSeu endereco: "<<armazena_endereco
    <<"\naniversario: "<<armazena_aniversario
    <<endl;
    return meu_aniversario;
}
char agenda::GetCliente(){
    cout<<"\nSeu nome: "<<armazena_nome
    <<"\nSeu email: "<<armazena_email
    <<"\nSeu telefone: "<<armazena_telefone
    <<"\nSeu endereco: "<<armazena_endereco
    <<"\naniversario: "<<armazena_aniversario
    <<"\nData da ultima compra:"<<armazena_data
    <<endl;
    switch (armazena_fidelidade)
    {
    case 1:
       cout<<"\nApenas uma vez"<<endl;
    case 2:
        cout<<"\nPouco frequente"<<endl;
    case 3:
        cout<<"\nFrequente"<<endl;
    case 4:
        cout<<"\nFiel"<<endl;
    default: 
    break;
    }
    

    return 0;
}
char agenda::GetFornecedor(){
    cout<<"\nSeu nome: "<<armazena_nome
    <<"\nSeu email: "<<armazena_email
    <<"\nSeu telefone: "<<armazena_telefone
    <<"\nSeu endereco: "<<armazena_endereco
    <<"\naniversario: "<<armazena_aniversario
    <<"\nqualidade:"
    <<endl;
    return armazena_qualidade;
}

