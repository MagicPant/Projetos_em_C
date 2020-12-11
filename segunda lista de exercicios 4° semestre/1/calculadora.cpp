#include "calculadora.h"


Calculadora::Calculadora()
    :meu_num1(0),
    meu_num2(0)
{

}

Calculadora::Calculadora(double num1, double num2)
    :meu_num1(num1),
    meu_num2(num2)
{

}

Calculadora::~Calculadora()
{
    
}
double Calculadora::Soma(double num1,double num2)
{
    double resp;
    resp = num1+num2;
    return resp;
}

double Calculadora::Subtracao(double num1,double num2)
{
    double resp;
    resp = num1-num2;
    return resp;
}

double Calculadora::multiplicacao(double num1,double num2)
{
    double resp;
    resp = num1*num2;
    return resp;
}

double Calculadora::divisao(double num1,double num2)
{
    double resp;
    resp = num1/num2;
    return resp;
}
double Calculadora::modulo(int num1,int num2)
{
    int resp;
    resp = num1%num2;    
    return resp;
}
