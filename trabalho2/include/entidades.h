#ifndef ENTIDADES_H
#define ENTIDADES_H

#include "dominios.h" // Nao precisa desse include no codeblocks

class Aplicacao {

private:

    CodigoAplicacao codigo;
    ValorAplicacao valor;
    Data data;

public:

    void setCodigoAplicacao(const CodigoAplicacao &codigo);

    CodigoAplicacao getCodigoAplicacao(){
        return codigo;
    }

    void setValorAplicacao(const ValorAplicacao &valor);

    ValorAplicacao getValorAplicacao(){
        return valor;
    }

    void setData(const Data &data);

    Data getData(){
        return data;
    }
};


class Produto {

private:

    CodigoProduto codigo;
    Classe classe;
    Emissor emissor;
    Prazo prazo;
    Data vencimento;
    Taxa taxa;
    Horario horario;
    ValorMinimo valor;

public:

    void setCodigoProduto(const CodigoProduto &codigo);

    CodigoProduto getCodigoProduto(){
        return codigo;
    }

    void setClasse(const Classe &classe);

    Classe getClasse(){
        return classe;
    }

    void setEmissor(const Emissor &emissor);

    Emissor getEmissor(){
        return emissor;
    }

    void setPrazo(const Prazo &prazo);

    Prazo getPrazo(){
        return prazo;
    }

    void setData(const Data &vencimento);

    Data getData(){
        return vencimento;
    }

    void setTaxa(const Taxa &taxa);

    Taxa getTaxa(){
        return taxa;
    }

    void setHorario(const Horario &horario);

    Horario getHorario(){
        return horario;
    }

    void setValorMinimo(const ValorMinimo &valor);

    ValorMinimo getValorMinimo(){
        return valor;
    }
};

///
/// Padrão para representação de Conta.
///

class Conta {
private:
    CodigoBanco codigoBanco;
    CodigoAgencia codigoAgencia;
    Numero numero;

public:

    ///
    /// Inicializa o objeto com o código do banco informado se ele for válido.
    ///
    /// @param valor do código do banco
    ///
    ///

    void setCodigoBanco(const CodigoBanco &codigoBanco);

    ///
    /// Retorna código do banco
    ///
    /// @return código do banco
    ///

    CodigoBanco getCodigoBanco(){
        return codigoBanco;
    }

    void setCodigoAgencia (const CodigoAgencia &codigoAgencia);

    CodigoAgencia getCodigoAgencia(){
        return codigoAgencia;
    }

    void setNumero (const Numero &numero);

    Numero getNumero(){
        return numero;
    }
};

class Usuario {
private:
    Nome nome;
    Endereco endereco;
    Cep cep;
    Cpf cpf;
    Senha senha;

public:
    void setNome(const Nome &nome);

    Nome getNome(){
        return nome;
    }

    void setEndereco(const Endereco &endereco);

    Endereco getEndereco(){
        return endereco;
    }

    void setCep(const Cep &cep);

    Cep getCep(){
        return cep;
    }

    void setCpf(const Cpf &cpf);

    Cpf getCpf(){
        return cpf;
    }

    void setSenha(const Senha &senha);

    Senha getSenha(){
        return senha;
    }
};

#endif // ENTIDADES_H
