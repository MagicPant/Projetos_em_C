/*O almoxarifado de uma empresa estoca materiais e deve fazer o controle disso.
Para cada material ali depositado, deve-se saber o seu código numérico, seu nome e o seu saldo
(quantidade em estoque no momento). O saldo pode ser alterado quando há retiradas ou abastecimentos,
o nome pode ser mudado e deve-se mostrar os dados do material quando necessário.
O sistema deve permitir as operações de entrada e saída do estoque e montar uma lista de produtos em estoque
(baseado no exercício do prof. Aníbal Cardoso).*/
#include <iostream>
#include <stdlib.h>
using namespace std;
#include "materiais.cpp"
int main(){
    int cod,opcao;
    double saldo;
    char* nome;
    char armazena_nome[10];
    materiais caixa(0,0,0);
    pergunta:
    cout<<"\nDigite o que deseja realizar \n1-inserir dados \n2-ler dados \n3-alterar dados \n4-sair \n";
    cin>>opcao;
    cout<<endl;
    switch (opcao){
    case 1:
        cout<<"Digite o codigo do material: \n";
        cin>>cod;
        cout<<endl;
        caixa.SetMateriais(cod);

        cout<<"Digite o nome de sete caracteres do material: \n";
        cin>>armazena_nome;
        cout<<endl;
        for(int i=0;i<9;i++){
            nome[i]=armazena_nome[i];
        }
        caixa.SetMateriais(nome);

        cout<<"Digite o saldo do material: \n";
        cin>>saldo;
        cout<<endl;
        caixa.SetMateriais(saldo);
        goto pergunta;
    case 2:
        int opcao2;
        questao:
        cout<<"--Digite o que deseja ler \n1-nome \n2-saldo \n3-codigo\n";
        cin>>opcao2;
        cout<<endl;
            switch (opcao2){
            case 1:
                cout<<"\nSeu nome eh: "<<caixa.GetNome()<<endl;
            break;
            case 2:
               cout<<"\nSeu saldo eh: "<<caixa.GetSaldo()<<endl; 
            break;
            case 3:
                cout<<"\nSeu codigo eh: "<<caixa.GetCod()<<endl; 
            break;
            default:
            goto questao;
            }
        goto pergunta;
    case 3:
        int escolha;
        repete:
        cout<<"Digite o que deseja alterar: \n1-codigo \n2-nome \n3-saldo \n4-sair \n";
        cin>>escolha;
        cout<<endl;
        switch (escolha){
        case 1:
            cout<<"Digite o codigo do material: \n";
            cin>>cod;
            cout<<endl;
            cout<<cod<<endl;
            caixa.SetMateriais(cod);
            goto repete;
        case 2:
            cout<<"Digite o nome do material: \n";
            cin>>nome;
            cout<<endl;
            caixa.SetMateriais(nome);
            goto repete;
        case 3:
            cout<<"Digite o saldo do material: \n";
            cin>>saldo;
            cout<<endl;
            caixa.SetMateriais(saldo);
            goto repete;
        case 4:
            goto acaba;
        default:
            goto repete;
        }
        acaba:
        goto pergunta;
    case 4:
    goto sair;
    default:
    goto pergunta;
    }
    sair:
    return 0;
}