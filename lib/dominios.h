#ifndef DOMINIOS_H_INCLUDED
#define DOMINIOS_H_INCLUDED

#include <iostream>

using namespace std;

class Endereco {
    private: 
        string texto;

        bool validaTexto(string texto);

    public:
        void setTexto(string texto);

        string getTexto() {
            return texto;
        }
};

class Horario {
   private: 
        int valor;

        void validaValor(int valor);

    public:
        void setValor(int valor);

        int getValor() {
            return valor;
        }

};

class Nome {
   private: 
        string texto;

        void validaTexto(string texto);

    public:
        void setTexto(string texto);

        string getTexto() {
            return texto;
        }

};

class Numero {
    private: 
        int valor;

        void validaValor(int valor);

    public:
        void setValor(int valor);

        int getValor() {
            return valor;
        }
};

class Prazo {
    private: 
        int valor;

        void validaValor(int valor);

    public:
        void setValor(int valor);

        int getValor() {
            return valor;
        }
};

class Senha {
    private: 
        int valor;

        void validaValor(int valor);

    public:
        void setValor(int valor);

        int getValor() {
            return valor;
        }
};

class Taxa {
    private: 
        int valor;

        void validaValor(int valor);

    public:
        void setValor(int valor);

        int getValor() {
            return valor;
        }
};

class ValorAplicacao {
    private: 
        int valor;

        void validaValor(int valor);

    public:
        void setValor(int valor);

        int getValor() {
            return valor;
        }
};

class ValorMinimo {
    private: 
        int valor;

        void validaValor(int valor);

    public:
        void setValor(int valor);

        int getValor() {
            return valor;
        }
};

#endif