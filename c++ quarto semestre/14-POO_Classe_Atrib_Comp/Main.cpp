#include<iostream>
using namespace std;
#include "Carro.cpp"

int main(){

    //Objeto Honda
    Carro honda(100, 90);
    cout << "Carro Honda"
         << "\nVelocidade:" << honda.GetVelocidade() << "Km/h" 
         << "\nGraus: " << honda.GetDirecao() 
         << endl;
        
    return 1;
}
