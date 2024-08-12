class Configuracion{ 
    private:
        int valorX;
        int valorY;
        int valorZ;
    public:
        int getValorX();
        void setValorX(int x);
        int getValorY();
        void setValorY(int x);
        int getValorZ();
        void setValorZ(int x);

        void cargarFichero();
        void guardaFichero();
};