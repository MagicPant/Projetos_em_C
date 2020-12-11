#include "3.h"

//Construtor da classe
Carro::Carro()
    :minha_distancia(0),
    meu_combustivel(0)
{

}

//Construtor da classe
Carro::Carro(int distancia, int combustivel)
    :minha_distancia(distancia),
    meu_combustivel(combustivel)
{

}

Carro::~Carro()
{
    
}
void Carro::SetDistancia(int distancia)
{
    minha_distancia = distancia;
}
void Carro::SetCombustivel(int combustivel)
{
    if(combustivel<=50){
        meu_combustivel=combustivel;
    }
}
// Comportamentos - Metodos
int Carro::GetDistancia()
{
    return minha_distancia;
}

int Carro::GetCombustivel()
{
    float combustivel,resto;
    combustivel = minha_distancia/15;
    resto = meu_combustivel - combustivel;
    return resto;
}