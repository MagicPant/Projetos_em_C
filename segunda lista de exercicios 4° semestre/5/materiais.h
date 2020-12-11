#include <iostream>
class materiais{
    public:
        materiais();
        materiais(int cod,char nome,double saldo);
        ~materiais();
        void SetMateriais(int cod);
        void SetMateriais(char* nome);
        void SetMateriais(double saldo);
        double GetSaldo();
        int GetCod();
        char GetNome();

    private:
        int meu_codigo;
        double meu_saldo;
        char meu_nome;
};