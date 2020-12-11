//Atributos:
//Velocidade
//Direcao

//Comportametos:
//Acelerar
//Freiar
//VirarDireita
//VirarEsaquerda

class Carro{

    public:
        Carro();
        Carro(int velocidade, int direcao);
        ~Carro();
        void Acelerar(int velocidade);
        void Freiar(int Velocidade);
        void VirarDireita(int angulo);
        void VirarEsquerda(int angulo);
        int GetVelocidade();
        int GetDirecao();
    private:
        int minha_velocidade, minha_direcao;
};