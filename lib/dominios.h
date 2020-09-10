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
        string valor;

        bool validaValor(string valor);

    public:
        void setValor(string valor);

        string getValor() {
            return valor;
        }

};

class Nome {
   private: 
        string texto;

        bool validaTexto(string texto);

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

        bool validaValor(int valor);

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

        bool validaValor(int valor);

    public:
        void setValor(int valor);

        int getValor() {
            return valor;
        }
};

class ValorAplicacao {
    private: 
        double valor;

        bool validaValor(double valor);

    public:
        void setValor(double valor);

        double getValor() {
            return valor;
        }
};

class ValorMinimo {
    private: 
        double valor;

        bool validaValor(double valor);

    public:
        void setValor(int valor);

        double getValor() {
            return valor;
        }
};

#endif