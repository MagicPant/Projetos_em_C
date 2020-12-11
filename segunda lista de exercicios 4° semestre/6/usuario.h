#include <iostream>
#include <string.h>
class usuario{
    public:
        usuario();
        usuario(char nome,char login,char senha,char email,char cpf,char RG);
        ~usuario();
        void SetUsuario(char* nome,char* login,char* senha,char* email,char* cpf,char* RG);
        char GetUsuario();
    private:
        double meu_nome,meu_login,minha_senha,meu_email,meu_cpf,meu_RG;
};