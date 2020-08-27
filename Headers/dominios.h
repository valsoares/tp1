#ifndef DOMINIOS_H_INCLUDED
#define DOMINIOS_H_INCLUDED

#include <iostream>

using namespace std;

class Endereco {
    private: 
        string texto;

        void valida(string texto);

    public:
        void setTexto(string texto);

        string getTexto() {
            return texto;
        }
};

class Horario {
    private:

    public:

};

class Nome {
    private:

    public:


};

class Numero {
    private:

    public:
};

class Prazo {
    private:

    public:
};

class Senha {
    private:

    public:
};

class Taxa {
    private:

    public:
};

class ValorAplicacao {
    private:

    public:
};

class ValorMinimo {
    private:

    public:
};

#endif