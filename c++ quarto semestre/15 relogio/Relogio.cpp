#include "relogio.h"
Relogio::Relogio()
    :minha_Hora(0),
    meu_Minuto(0),
    meu_Segundo(0)
{

}
//construtor da classe
Relogio::Relogio(int hora,int minuto,int segundo)
    :meu_Segundo(segundo),
    meu_Minuto(minuto),
    minha_Hora(hora)
{

}
Relogio::~Relogio()
{
    
}
//comportamentos - Métodos

//avança um segundo
void Relogio::Avancar(int hora,int minuto,int segundo)
{
    if(meu_Segundo+1 >= 60){
				meu_Segundo=0;
				meu_Minuto++;
			}
			else meu_Segundo+=1;
			
			if(meu_Minuto >= 60){
				meu_Segundo = 0;
				meu_Minuto = 0;
				minha_Hora++;
            }
}

int Relogio::GetHora(int hora)
{
    hora = minha_Hora;
    return hora;
}
int Relogio::GetMin(int min)
{
    min = meu_Minuto;
    return min;
}
int Relogio::GetSec(int sec)
{
    sec = meu_Segundo;
    return sec;
}
//escolhe a hora
void Relogio::SetHora(int hora,int minuto,int segundo){
    minha_Hora += hora;
    meu_Minuto += minuto;
    meu_Segundo += segundo;
}
