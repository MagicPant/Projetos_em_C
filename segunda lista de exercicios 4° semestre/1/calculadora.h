#include <iostream>
class Calculadora{
    public:
        Calculadora();
        Calculadora(double num1,double num2);
        ~Calculadora();
        double Soma(double num1,double num2);
        double Subtracao(double num1,double num2);
        double multiplicacao(double num1,double num2);
        double divisao(double num1,double num2);
        double modulo(int num1,int num2);
    private:
        double meu_num1,meu_num2;
};