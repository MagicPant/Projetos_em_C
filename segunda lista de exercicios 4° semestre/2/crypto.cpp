#include "crypto.h"
#include<string.h>
#include<stdlib.h>


Crypto::Crypto()
    :minha_string(0)
{

}

Crypto::Crypto(char mensagem)
    :minha_string(mensagem)
{

}

Crypto::~Crypto()
{
    
}
char registro[7];
void Crypto::Encrypt(char* mensagem)
{
    for (int i = 0; i < 6; i++){
         registro[i] = static_cast<char>(mensagem[i] + 3);
    }
   cout<<"Sua senha esta como: "<<registro<<"\n"<<endl;
}

char Crypto::Decrypt()
{
    char registra[7];
    for (int i = 0; i < 6; i++) 
    {
        registra[i] = registro[i] - 3;
    }
    cout<<"\n"<<registra<<endl;    
    return 0;
}
