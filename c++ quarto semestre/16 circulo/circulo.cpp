#include "circulo.h"

//Construtor da classe
Circulo::Circulo()
    :meu_Raio(0),
    meu_x(0),
    meu_y(0)
{

}

//Construtor da classe
Circulo::Circulo(int raio,int x,int y)
    :meu_Raio(raio),
    meu_x(x),
    meu_y(y)
{

}
Circulo::~Circulo()
{
    
}
// Comportamentos - Metodos
void Circulo::SetRaio(int raio)
{
    meu_Raio = 0;
    meu_Raio +=raio ;
}
void Circulo::SetAumenta_Raio(int raio)
{
    meu_Raio +=raio ;
}
void Circulo::SetCentro(int x,int y)
{
    meu_x +=x;
    meu_y +=y;
}

int Circulo::GetRaio()
{
    return meu_Raio;
}
//não sabia como usar parametro de referencia, então só coloquei um cout dentro
int Circulo::GetCentroX(int x)
{
    x = meu_x;
    return x;
}
int Circulo::GetCentroY(int y)
{
    y=meu_y;
    return y;
}
int Circulo::GetArea()
{
    minha_Area = meu_Raio*meu_Raio;
    return minha_Area;
}
void Circulo::Area_circulo(int raio)
{
    meu_Raio += raio;
    minha_Area = 3*(meu_Raio*meu_Raio);
}
void Circulo::Distancia_dois(int raio)
{
    meu_Raio += raio;
    meu_Raio + meu_Raio;
}
void Circulo::Circunferencia(int raio)
{
    meu_Raio += raio;
    2*3*meu_Raio;
}
