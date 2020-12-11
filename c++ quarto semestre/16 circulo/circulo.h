
class Circulo{
    public:
        Circulo();
        Circulo(int raio,int x, int y);
        ~Circulo();
        void SetRaio(int raio);
        void SetAumenta_Raio(int percentual);
        void SetCentro(int x,int y);
        int GetRaio();
        int GetCentroX(int x);
        int GetCentroY(int y);
        int GetArea();
    private:
        void Area_circulo(int raio);
        void Distancia_dois(int raio);
        void Circunferencia(int raio);
        int meu_Raio,meu_x,meu_y,minha_Area;
};