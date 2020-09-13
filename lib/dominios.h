#ifndef DOMINIOS_H_INCLUDED
#define DOMINIOS_H_INCLUDED

#include <iostream>

using namespace std;

class Cep {
    private:
        int cep;

        void validaCep(int cep);
    
    public:
        void setCep(int cep);

        int getCep() {
            return cep;
        }
};

class Classe {
    private:
        string classe;

        void validaClasse(string classe);
    
    public:
        void setClasse(string classe);

        string getClasse() {
            return classe;
        }
};

class CodigoAgencia {
    private:
        string codigoAgencia;

        void validaCodigoAgencia(string codigoAgencia);
    
    public:
        void setCodigoAgencia(string codigoAgencia);

        string getCodigoAgencia() {
            return codigoAgencia;
        }
};

class CodigoAplicacao {
    private:
        string codigoAplicacao;

        void validaCodigoAplicacao(string codigoAplicacao);
    
    public:
        void setCodigoAplicacao(string codigoAplicacao);

        string getCodigoAplicacao() {
            return codigoAplicacao;
        }
};

class CodigoBanco {
    private:
        string codigoBanco;

        void validaCodigoBanco(string codigoBanco);
    
    public:
        void setCodigoBanco(string codigoBanco);

        string getCodigoBanco() {
            return codigoBanco;
        }
};

class CodigoProduto {
    private:
        string codigoProduto;

        void validaCodigoProduto(string codigoProduto);
    
    public:
        void setCodigoProduto(string codigoProduto);

        string getCodigoProduto() {
            return codigoProduto;
        }
};

class Cpf {
    private:
        string cpf;

        void validaCpf(string cpf);
    
    public:
        void setCpf(string cpf);

        string getCpf() {
            return cpf;
        }
};

class Data {
   private: 
        string data;

        void validaData(string data);

    public:
        void setData(string data);

        string getData() {
            return data;
        }

};

class Emissor {
   private: 
        string emissor;

        void validaEmissor(string emissor);

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

        bool validaNumero(int numero);

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

        bool validaSenha(int senha);

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