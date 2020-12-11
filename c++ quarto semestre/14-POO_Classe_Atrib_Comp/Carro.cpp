//Atributos:
//Velocidade
//Direcao

//Comportametos:
//Acelerar
//Freiar
//VirarDireita
//VirarEsaquerda

#include "Carro.h"

//Construtor da classe
Carro::Carro()
    :minha_velocidade(0),
    minha_direcao(0)
{

}

//Construtor da classe
Carro::Carro(int velocidade, int direcao)
    :minha_velocidade(velocidade),
    minha_direcao(direcao)
{

}

Carro::~Carro()
{
    
}
// Comportamentos - Metodos
void Carro::Acelerar(int velocidade)
{
    minha_velocidade += velocidade;
}

void Carro::Freiar(int velocidade)
{
    minha_velocidade -= velocidade;
}

void Carro::VirarDireita(int angulo)
{
    minha_direcao += angulo;
}

void Carro::VirarEsquerda(int angulo)
{
    minha_direcao -= angulo;
}

int Carro::GetVelocidade()
{
    return minha_velocidade;
}

int Carro::GetDirecao()
{
    return minha_direcao;
}