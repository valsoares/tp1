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

///
/// Padrão para representação de endereço.
///
/// Regras de formato:
/// - Código é válido caso o endereco seja composto por 5 a 20 caracteres onde cada caracter pode ser letra (A-Z ou a-z), dígito (0 – 9), ponto ou espaço. 
/// - Apenas letras e dígitos podem estar em sequência. 
/// - Em termo cujo primeiro caracter é letra, a mesma é maiúscula. 
///

class Endereco {
    private:
        string endereco;

        void validaEndereco(string endereco);

    public:

///
/// Inicializa o objeto com o endereço informado se ele for válido.
///
/// Lança exceção caso o endereço informado seja inválido
/// @param valor do endereço
///
/// @throw invalid_argument
///
        void setEndereco(string endereco);
///
/// Retorna endereço
///
/// @return endereço
///
        string getEndereco() {
            return endereco;
        }
};

///
/// Padrão para representação de horário.
///
/// Regras de formato:
/// - Formato XY:ZW para representar horário entre 13:00 e 17:00 horas.
///

class Horario {
   private:
        string horario;

        void validaHorario(string horario);

    public:
///
/// Inicializa o objeto com o horário informado se ele for válido.
///
/// Lança exceção caso o horário informado seja inválido.
/// @param valor do horário.
///
/// @throw invalid_argument.
///
        void setHorario(string horario);

///
/// Retorna horário.
///
/// @return horário.
///
        string getHorario() {
            return horario;
        }

};

///
/// Padrão para representação de nome.
///
/// Regras de formato:
/// - Nome composto por 5 a 30 caracteres onde cada caracter pode ser letra (A-Z ou a-z) ou espaço, há pelo menos 5 letras, não há espaços em sequência, primeira letra de cada termo é letra maiúscula.
///

class Nome {
   private:
        string nome;

        void validaNome(string nome);

    public:
///
/// Inicializa o objeto com o nome informado se ele for válido.
///
/// Lança exceção caso o nome informado seja inválido.
/// @param valor do nome.
///
/// @throw invalid_argument.
///
        void setNome(string nome);
///
/// Retorna nome.
///
/// @return nome.
///
        string getNome() {
            return nome;
        }

};

///
/// Padrão para representação de número.
///
/// Regras de formato:
/// - Formato XXXXXX-Y onde cada X é dígito (0 – 9) e Y é dígito verificador calculado por meio de algorítmo apropriado.
/// - Cálculo do dígito: Somam os dígitos das multiplicações e divide o resultado por 10. Caso o resto for diferente de 0, o DV será 10 menos o resto.
///

class Numero {
    private:
        string numero;

        void validaNumero(string numero);

    public:
///
/// Inicializa o objeto com o número informado se ele for válido.
///
/// Lança exceção caso o número informado seja inválido.
/// @param valor do número.
///
/// @throw invalid_argument.
///
        void setNumero(string numero);
///
/// Retorna número.
///
/// @return número.
///
        string getNumero() {
            return numero;
        }
};

///
/// Padrão para representação de prazo.
///
/// Regras de formato:
/// - Valor 6, 12, 18, 24, 30, 36, 42, 48, 54, 60, 66 ou 72 (mêses).
///

class Prazo {
    private:
        int prazo;

        void validaPrazo(int prazo);

    public:
///
/// Inicializa o objeto com o prazo informado se ele for válido.
///
/// Lança exceção caso o prazo informado seja inválido.
/// @param valor do prazo.
///
/// @throw invalid_argument.
///
        void setPrazo(int prazo);
///
/// Retorna prazo.
///
/// @return prazo.
///
        int getPrazo() {
            return prazo;
        }
};

///
/// Padrão para representação de senha.
///
/// Regras de formato:
/// - Formato XXXXXX onde cada X é dígito (0 – 9) e não há dígito repetido.
///

class Senha {
    private:
        string senha;

        void validaSenha(string senha);

    public:
///
/// Inicializa o objeto com a senha informada se ela for válida.
///
/// Lança exceção caso a senha informada seja inválida.
/// @param valor da senha.
///
/// @throw invalid_argument.
///
        void setSenha(string senha);
///
/// Retorna senha.
///
/// @return senha.
///
        string getSenha() {
            return senha;
        }
};

///
/// Padrão para representação de taxa.
///
/// Regras de formato:
/// - Taxa na faixa de 0 a 200.
///

class Taxa {
    private:
        int taxa;

        void validaTaxa(int taxa);

    public:
///
/// Inicializa o objeto com a taxa informada se ela for válida.
///
/// Lança exceção caso a taxa informada seja inválida.
/// @param valor da taxa.
///
/// @throw invalid_argument.
///
        void setTaxa(int taxa);
///
/// Retorna taxa.
///
/// @return taxa.
///
        int getTaxa() {
            return taxa;
        }
};

///
/// Padrão para representação de valor de aplicação.
///
/// Regras de formato:
/// - Valor na faixa de 0 a 1.000.000,00.
///

class ValorAplicacao {
    private:
        double valorAplicacao;

        void validaValorAplicacao(double valorAplicacao);

    public:
///
/// Inicializa o objeto com o valor de aplicação informado se ele for válido.
///
/// Lança exceção caso o valor de aplicação informado seja inválido.
/// @param valor de aplicação.
///
/// @throw invalid_argument.
///
        void setValorAplicacao(double valorAplicacao);
///
/// Retorna valor de aplicação.
///
/// @return valor de aplicação.
///
        double getValorAplicacao() {
            return valorAplicacao;
        }
};

///
/// Padrão para representação de valor mínimo.
///
/// Regras de formato:
/// - Valor 1.000,00, 5.000,00, 10.000 ou 50.000,00.
///

class ValorMinimo {
    private:
        double valorMinimo;

        void validaValorMinimo(double valorMinimo);

    public:
///
/// Inicializa o objeto com o valor mínimo informado se ele for válido.
///
/// Lança exceção caso o valor mínimo informado seja inválido.
/// @param valor mínimo.
///
/// @throw invalid_argument.
///
        void setValorMinimo(double valorMinimo);
///
/// Retorna valor mínimo.
///
/// @return valor mínimo.
///
        double getValorMinimo() {
            return valorMinimo;
        }
};

#endif
