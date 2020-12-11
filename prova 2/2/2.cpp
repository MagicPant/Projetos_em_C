#include "2.h"

//Construtor da classe
Televisao::Televisao()
    :meu_som(0),
    meu_canal(0)
{

}

//Construtor da classe
Televisao::Televisao(int canal, int volume)
    :meu_som(volume),
    meu_canal(canal)
{

}

Televisao::~Televisao()
{
    
}
// Comportamentos - Metodos
void Televisao::canal_sobe(int canal)
{
    meu_canal += canal;
}
void Televisao::canal_desce(int canal)
{
    meu_canal -= canal;
}
void Televisao::volume_aumenta(int volume)
{
    meu_som += volume;
}
void Televisao::volume_diminui(int volume)
{
    meu_som -= volume;
}
void Televisao::SetCanal(int canal)
{
    meu_canal=0;
    meu_canal += canal;
}
int Televisao::GetVolume()
{
    return meu_som;
}

int Televisao::GetCanal()
{
    return meu_canal;
}
