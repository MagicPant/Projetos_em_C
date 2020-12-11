class geometrico{
    public:
        geometrico();
        geometrico(int num1,int num2,int num3,int num4);
        ~geometrico();
        void forma(int num1);
        void forma(int num1,int num2);
        void forma(int num1,int num2,int num3,int num4);
    private:
        double meu_num1,meu_num2,meu_num3,meu_num4;
};