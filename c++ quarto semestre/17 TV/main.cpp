/*
Implemente uma televisão. A televisão tem um controle de volume do som e um controle de seleção de canal.
O controle de volume permite aumentar ou diminuir a potência do volume de som em uma unidade de cada vez.
O controle de canal também permite aumentar e diminuir o número do canal em uma unidade, porém,
também possibilita trocar para um canal indicado.
Também devem existir métodos para consultar o valor do volume de som e o canal selecionado.
No programa principal, crie uma televisão e troque de canal algumas vezes.
Aumente um pouco o volume, e exiba o valor de ambos os atributos.
*/
#include<iostream>
using namespace std;
#include "tv.cpp"

int main(){
    int opcao,canal;
    Televisao controle(0,0);
    questao:
    cout<<"Digite:\n1 para aumentar volume\n2 para diminuir\n3 para subir o canal\n4 para descer\n5 escolher canal especifico\n0 encerrar\n";
    cin>>opcao;
    cout<<flush;
    cout<<endl;
    switch (opcao)
    {
    case 1:
        controle.volume_aumenta(1);
        break;
    case 2:
        controle.volume_diminui(1);
        break;
    case 3:
        controle.canal_sobe(1);
        break;
    case 4:
        controle.canal_desce(1);
        break;
    case 5:
        cout<<"Digite o canal que deseja ser direcionado: ";
        cin>>canal;
        cout<<endl;
        controle.SetCanal(canal);
        break;
    default:
        goto encerrar;
    }
    cout << "Controle televisao"
         << "\nCanal:" << controle.GetCanal()
         << "\nVolume: " << controle.GetVolume() 
         << endl;
    goto questao;
    encerrar:
    return 1;
}