class Relogio{
    public:
        Relogio();
        Relogio(int hora, int minuto,int segundo);
        ~Relogio();
        void Avancar(int hora, int minuto, int segundo);
        void SetHora(int hora,int minuto,int segundo);
        int GetHora(int hora);
        int GetMin(int min);
        int GetSec(int sec);
    private:
       int minha_Hora,meu_Minuto,meu_Segundo;
       char meu_total;
};