#include "geometrico.h"
#include<iostream>
using namespace std;

geometrico::geometrico()
    :meu_num1(0),
    meu_num2(0),
    meu_num3(0),
    meu_num4(0)
{

}

geometrico::geometrico(int num1,int num2,int num3,int num4)
    :meu_num1(num1),
    meu_num2(num2),
    meu_num3(num3),
    meu_num4(num4)
{

}

geometrico::~geometrico()
{
    
}
void geometrico::forma(int num1)
{
    int area = num1*num1; 
    double perimetro = 2*num1;
    cout<<"A figura eh uma elipse\n"
    <<"A area da figura eh:"<<area<<"pi\n"
    <<"O perimetro da figura eh"<<perimetro<<"pi\n"
    <<"O raio eh: "<<num1
    <<endl;
}
void geometrico::forma(int num1,int num2)
{
    int area,perimetro;
    area = num1*num2;
    perimetro = (num1+num2)*2;
    
    cout<<"\n\n--A figura eh um retangulo--"
    <<"\nA area da figura eh:"<<area
    <<"\nO perimetro da figura eh:"<<perimetro
    <<"\nA base eh:"<<num1
    <<"\nA altura eh:"<<num2
    <<endl;
}
void geometrico::forma(int num1,int num2,int num3,int num4)
{ 
    int area,perimetro;
    perimetro = num1+num2+num3;
    area=(num1*num4)/2;
    cout<<"\n\n--A figura eh um triangulo--\n"
    <<"A area da figura eh: "<<area
    <<"\nO perimetro da figura eh: "<<perimetro
    <<"\nA base eh: "<<num1
    <<"\nA altura eh: "<<num4
    <<"\nO lado direito eh: "<<num2
    <<"\nO lado esquerdo eh: "<<num3
    <<endl;
}

