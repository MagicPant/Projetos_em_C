class Carro{
    public:
        Carro();
        Carro(int distancia, int combustivel);
        ~Carro();
        void SetCombustivel(int combustivel);
        void SetDistancia(int distancia);
        int GetCombustivel();
        int GetDistancia();
    private:
        float minha_distancia, meu_combustivel;
};