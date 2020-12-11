/*
Crie uma classe em C++ chamada Relogio para armazenar um horário, composto por hora, minuto e segundo.
A classe deve representar esses componentes de horário e deve apresentar os métodos descritos a seguir:

um método chamado setHora, que deve receber o horário desejado por parâmetro (hora, minuto e segundo);
um método chamado getHora para retornar o horário atual, através de 3 variáveis passadas por referência;
um método para avançar o horário para o próximo segundo 
(lembre-se de atualizar o minuto e a hora, quando for o caso).
*/
#include<iostream>
using namespace std;
#include "relogio.cpp"

int main(){
    int hora,min,sec;
    Relogio corda(0,0,0);
    cout<<"\nhora:";
    cin>>hora;
    cout<<"\nminuto:";
    cin>>min;
    cout<<"\nsegundo:";
    cin>>sec;
    corda.SetHora(hora,min,sec);
    corda.Avancar(1,1,1);
    cout
    <<corda.GetHora(hora)
    <<":"
    <<corda.GetMin(min)
    <<":"
    <<corda.GetSec(sec)
    <<endl;
    return 1;
}