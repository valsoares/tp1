#ifndef DOMINIOS_H_INCLUDED
#define DOMINIOS_H_INCLUDED

#include <iostream>

using namespace std;

class Cep {
    private:
        int cep;

        bool validaCep(int cep);
    
    public:
        void setCep(int cep);

        int getCep() {
            return cep;
        }
};

class Classe {
    private:
        string classe;

        bool validaClasse(string classe);
    
    public:
        void setClasse(string classe);

        string getClasse() {
            return classe;
        }
};

class CodigoAgencia {
    private:
        int codigo;

        bool validaCodigo(int codigo);
    
    public:
        void setCodigo(int codigo);

        int getCodigo() {
            return codigo;
        }
};

class CodigoAplicacao {
    private:
        int codigo;

        bool validaCodigo(int codigo);
    
    public:
        void setCodigo(int codigo);

        int getCodigo() {
            return codigo;
        }
};

class CodigoBanco {
    private:
        int codigo;

        bool validaCodigo(int codigo);
    
    public:
        void setCodigo(int codigo);

        int getCodigo() {
            return codigo;
        }
};

class CodigoProduto {
    private:
        int codigo;

        bool validaCodigo(int codigo);
    
    public:
        void setCodigo(int codigo);

        int getCodigo() {
            return codigo;
        }
};

class Cpf {
    private:
        int cpf;

        bool validaCpf(int cpf);
    
    public:
        void setCpf(int cpf);

        int getCpf() {
            return cpf;
        }
};

class Data {
   private: 
        string data;

        bool validaData(string data);

    public:
        void setData(string data);

        string getData() {
            return data;
        }

};

class Emissor {
   private: 
        string emissor;

        bool validaEmissor(string emissor);

    public:
        void setEmissor(string emissor);

        string getEmissor() {
            return emissor;
        }

};

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