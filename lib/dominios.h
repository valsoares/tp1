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
        string endereco;

        bool validaEndereco(string endereco);

    public:
        void setEndereco(string endereco);

        string getEndereco() {
            return endereco;
        }
};

class Horario {
   private: 
        string horario;

        bool validaHorario(string horario);

    public:
        void setHorario(string horario);

        string getHorario() {
            return horario;
        }

};

class Nome {
   private: 
        string nome;

        bool validaNome(string nome);

    public:
        void setNome(string nome);

        string getNome() {
            return nome;
        }

};

class Numero {
    private: 
        int numero;

        void validaNumero(int numero);

    public:
        void setNumero(int numero);

        int getNumero() {
            return numero;
        }
};

class Prazo {
    private: 
        int prazo;

        bool validaPrazo(int prazo);

    public:
        void setPrazo(int prazo);

        int getPrazo() {
            return prazo;
        }
};

class Senha {
    private: 
        int senha;

        void validaSenha(int senha);

    public:
        void setSenha(int senha);

        int getSenha() {
            return senha;
        }
};

class Taxa {
    private: 
        int taxa;

        bool validaTaxa(int taxa);

    public:
        void setTaxa(int taxa);

        int getTaxa() {
            return taxa;
        }
};

class ValorAplicacao {
    private: 
        double valorAplicacao;

        bool validaValorAplicacao(double valorAplicacao);

    public:
        void setValorAplicacao(double valorAplicacao);

        double getValorAplicacao() {
            return valorAplicacao;
        }
};

class ValorMinimo {
    private: 
        double valorMinimo;

        bool validaValorMinimo(double valorMinimo);

    public:
        void setValorMinimo(int valorMinimo);

        double getValorMinimo() {
            return valorMinimo;
        }
};

#endif