/*O sistema deve manter informações de um usuário em disco.
O próprio usuário pode ler e editar as suas informações dentro do sistema,
porém os demais usuários não têm esta permissão. Este controle deve ser feito por senha.
As informações importantes do usuário são: nome, login, senha, e-mail, CPF e RG.
O arquivo com as informações do usuário deve ser gravado em modo texto e, portanto,
as informações do usuário estarão visíveis para quem abrir o arquivo.
Para evitar a “publicação” das informações, deve-se criptografá-las.
Quando for necessário carregar os dados para visualização ou edição,
o sistema deve descriptografá-los do arquivo.*/
// não consegui criar um método para editar as informações, mas o resto ta ok
#include <iostream>
#include <stdlib.h>
using namespace std;
#include "usuario.cpp"
int main(){
    int opcao1,opcao2;
    char armazena_nome[7],armazena_login[7],armazena_senha[7],armazena_email[7],armazena_cpf[7],armazena_rg[7];
    usuario admin(0,0,0,0,0,0);
    questao:
    cout<<"Digite o que deseja fazer:\n1-registrar \n2-sair\n";
    cin>>opcao1;
    cout<<endl;
    switch (opcao1)
    {
    case 1:
        cout<<"Digite um nome: ";
        cin>>armazena_nome;
        cout<<"\nDigite um login: ";
        cin>>armazena_login;
        cout<<"\nDigite uma senha: ";
        cin>>armazena_senha;
        cout<<"\nDigite um email: ";
        cin>>armazena_email;
        cout<<"\nDigite um cpf: ";
        cin>>armazena_cpf;
        cout<<"\nDigite um RG: ";
        cin>>armazena_rg;
        cout<<endl;

        admin.SetUsuario(armazena_nome,armazena_login,armazena_senha,armazena_email,armazena_cpf,armazena_rg);
        goto questao;
    case 2:
        goto sair;
    default:
    goto questao;
    }
    sair:
    cout<<"Digite o que deseja fazer:\n1-acessar \n2-sair\n";
    cin>>opcao2;
    cout<<endl;
    switch (opcao2)
    {
    case 1:
        admin.GetUsuario();
        goto sair;
    case 2:
        goto finalizar;
    default:
        goto sair;
    }
    finalizar:
    return 0;
}