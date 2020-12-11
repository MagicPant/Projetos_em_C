/*Agenda de contatos.
O sistema de agenda deve manter uma lista de contatos.
Um contato padrão tem: nome, e-mail, telefone, endereço e data do aniversário.
Porém o contato pode ser enquadrado como de algum tipo específico:
geral, cliente ou fornecedor. Para fornecedor, é interessante manter-se um índice
de qualidade, pois pode ser necessário ter de escolher 1 entre vários fornecedores
de um mesmo produto. Já para o cliente, deve-se atribuir uma data da última compra
e uma classificação de fidelidade :
(ou valores possíveis são: fiel, freqüente, pouco freqüente e apenas uma vez).
Por fim, da categoria geral, não é necessário guardar mais nenhum dado além dos do contato.
O programa da agenda deve manter um menu de opções do programa:
incluir contato (acrescenta no array), excluir
OBS: repare que a remoção de um contato do início ou “meio” array implica em mover os posteriores para a frente.
A inclusão de contatos ocorrente sempre no final do array.
Dica: manter um apontador para o último índice utilizado.
Por exemplo, supondo que o array tem capacidade para 20 elementos e apenas cinco contatos foram incluídos,
então esta variável deveria estar com valor 4 (array começa com zero...)*/
#include<iostream>
#include <stdlib.h>
using namespace std;
#include "agenda.cpp"
int main(){
    agenda contato(0,0,0,0,0);
    int qualidade,fidelidade;

    char armazena_nome[10];char armazena_email[10];char armazena_telefone[10];
    char armazena_endereco[10];char armazena_aniversario[10];char armazena_data[10];

    int opcao1,opcao2;
    questao:
    cout<<"Digite a opcao que deseja registrar: \n1-geral \n2-cliente \n3-fornecedor \n0-sair \n";
    cin>>opcao1;
    cout<<endl;
    switch (opcao1){
    case 1:
        cout<<"\nDigite o nome : ";
        cin>>armazena_nome;
        cout<<flush<<endl;
        cout<<"\nDigite o  email: ";
        cin>>armazena_email;
        cout<<flush<<endl;
        cout<<"\nDigite o  telefone: ";
        cin>>armazena_telefone;
        cout<<flush<<endl;
        cout<<"\nDigite o  endereco: ";
        cin>>armazena_endereco;
        cout<<flush<<endl;
        cout<<"\nDigite o  aniversario: ";
        cin>>armazena_aniversario;
        cout<<flush<<endl;
        contato.SetGeral(armazena_nome,armazena_email,armazena_telefone,armazena_endereco,armazena_aniversario);    
        goto sair;
    case 2:
        cout<<"\nDigite o nome : ";
        cin>>armazena_nome;
        cout<<"\nDigite o  email: ";
        cin>>armazena_email;
        cout<<"\nDigite o  telefone: ";
        cin>>armazena_telefone;
        cout<<"\nDigite o  endereco: ";
        cin>>armazena_endereco;
        cout<<"\nDigite o  aniversario: ";
        cin>>armazena_aniversario;
        cout<<"\nDigite a data da ultima compra: ";
        cin>>armazena_data;
        cout<<"\nEm uma escala de um a quatro, digite o numero de fidelidade que voce tem com nossa loja: ";
        cin>>fidelidade;
        cout<<endl;
        contato.SetCliente(armazena_nome,armazena_email,armazena_telefone,armazena_endereco,armazena_aniversario,armazena_data,fidelidade); 
        goto sair;
    case 3:
        cout<<"\nDigite o nome : ";
        cin>>armazena_nome;
        cout<<"\nDigite o  email: ";
        cin>>armazena_email;
        cout<<"\nDigite o  telefone: ";
        cin>>armazena_telefone;
        cout<<"\nDigite o  endereco: ";
        cin>>armazena_endereco;
        cout<<"\nDigite o  aniversario: ";
        cin>>armazena_aniversario;
        cout<<"\nDigite o índice de qualidade: ";
        cin>>qualidade;
        cout<<endl;
        contato.SetFornecedor(armazena_nome,armazena_email,armazena_telefone,armazena_endereco,armazena_aniversario,qualidade);
        goto sair;
    case 0:
        goto sair;  
    default:
        goto questao;
    }
    sair:
    cout<<"Digite a opcao que deseja acessar: \n1-geral \n2-cliente \n3-fornecedor \n0-sair \n";
    cin>>opcao1;
    cout<<endl;
    switch (opcao1)
    {
    case 1:
        contato.GetGeral();
        goto sair;
    case 2:
        contato.GetCliente();
        goto sair;
    case 3:
        contato.GetFornecedor();
        goto sair;
    case 0:
        goto finalizar;
    default:
        goto sair;
    break;
    }
    finalizar:
    return 0;

}