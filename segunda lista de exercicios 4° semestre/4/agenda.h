#include <iostream>
class agenda{
    public:
        agenda();
        agenda(char nome,char email,char telefone,char endereco,char aniversario);
        ~agenda();
        void SetGeral(char* nome,char* email,char* telefone,char* endereco,char* aniversario);
        void SetCliente(char* nome,char* email,char* telefone,char* endereco,char* aniversario,char*data,int fidelidade);
        void SetFornecedor(char* nome,char* email,char* telefone,char* endereco,char* aniversario,int qualidade);
        char GetGeral();
        char GetCliente();
        char GetFornecedor();
    private:
        char meu_nome,meu_email,meu_telefone,meu_endereco,meu_aniversario;
};