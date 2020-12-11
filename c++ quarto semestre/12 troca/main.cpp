#include<iostream>
using namespace std;

void troca(float *a,float *b){
    float aux;
    aux = *a; 
    *a=*b;
    *b=aux;
    cout<<"\nO valor de A-- "
    <<*a
    <<"\nO valor de B-- "
    <<*b
    <<"\n";

}

int main(){
    float c,d;
    cout<<"\nO numero a--";
    cin>>c;
    cout<<endl;
    cout<<"\nO numero b--";
    cin>>d;
    cout<<endl;
    troca(&c,&d);
    system("pause");
    return 0;

}