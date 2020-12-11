
class Televisao{

    public:
        Televisao();
        Televisao(int canal, int volume);
        ~Televisao();
        void canal_sobe(int canal);
        void canal_desce(int canal);
        void volume_aumenta(int volume);
        void volume_diminui(int volume);
        void SetCanal(int canal);
        int GetCanal();
        int GetVolume();
    private:
        int meu_som, meu_canal;
};