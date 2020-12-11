/*Implemente um carro.
O tanque de combustível do carro armazena no máximo 50 litros de gasolina.
O carro consome 15 km/litro. Deve ser possível:

Abastecer o carro com uma certa quantidade de gasolina;

Mover o carro em uma determinada distância (medida em km);

Retornar a quantidade de combustível e a distância total percorrida.

No programa principal, crie 2 carros.
Abasteça 20 litros no primeiro e 30 litros no segundo.
Desloque o primeiro em 200 km e o segundo em 400 km.
Exiba na tela a distância percorrida e o total de combustível
restante para cada um.*/

#include<iostream>
using namespace std;
#include "3.cpp"

int main(){
    //Objeto Honda
    int opcao,combustivel,distancia;
    Carro honda(200,20);
    Carro fiat(400,30);
     questao:
     cout<<"Digite o carro que deseja preencher: \n1-honda \n2-fiat \nqualquer outro numero-sair \n";
     cin>>opcao;
     cout<<endl;
     switch (opcao){
     case 1:
          cout<<"Digite qual foi a distancia percorrida pelo carro: ";
          cin>>distancia;
          cout<<endl;
          cout<<"Digite quanto foi abastecido(o carro suporta apenas 50 litros): ";
          cin>>combustivel;
          cout<<endl;
          honda.SetDistancia(distancia);
          if(combustivel<=50){
               honda.SetCombustivel(combustivel);
          }
          goto questao;
     case 2:
          cout<<"Digite qual foi a distancia percorrida pelo carro: ";
          cin>>distancia;
          cout<<endl;
          cout<<"Digite quanto foi abastecido(o carro suporta apenas 50 litros): ";
          cin>>combustivel;
          cout<<endl;
          fiat.SetDistancia(distancia);
          if(combustivel<=50){
               fiat.SetCombustivel(combustivel);
          }
          goto questao;
     default:
     break;
     }
    cout << "Carro Honda"
         << "\nDistancia percorrida:" << honda.GetDistancia() << "Km" 
         << "\nCombustivel restante: " << honda.GetCombustivel() <<" litros"
         << endl;
    cout << "\nCarro fiat"
         << "\nDistancia percorrida:" << fiat.GetDistancia() << "Km" 
         << "\nCombustivel restante: " << fiat.GetCombustivel()  <<" litros"
         << endl;        
    return 0;
}