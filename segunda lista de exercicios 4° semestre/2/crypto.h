#include<string.h>
class Crypto{
    char *guarda;
    public:
        Crypto();
        Crypto(char mensagem);
        ~Crypto();
        void Encrypt(char* mensagem);
        char Decrypt();
        
    private:
        char minha_string;
        int cript;
};