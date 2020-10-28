#ifndef ENTIDADES_H
#define ENTIDADES_H

#include "dominios.h" // Nao precisa desse include no codeblocks

class Aplicacao {

private:

    CodigoAplicacao codigo;
    ValorAplicacao valor;
    Data data;

public:

    ///
    /// Inicializa o atributo codigo com o parâmetro informado.
    ///
    /// @param codigo da aplicação
    ///
    ///

    void setCodigoAplicacao(const CodigoAplicacao &codigo);

    ///
    /// Retorna o atributo c�digo da aplicação
    ///
    /// @return c�digo da aplicação
    ///

    CodigoAplicacao getCodigoAplicacao(){
        return codigo;
    }

    ///
    /// Inicializa o atributo valor com o parâmetro informado.
    ///
    /// @param valor da aplicação
    ///
    ///

    void setValorAplicacao(const ValorAplicacao &valor);

    ///
    /// Retorna o atributo valor da aplicação
    ///
    /// @return valor da aplicação
    ///

    ValorAplicacao getValorAplicacao(){
        return valor;
    }

    ///
    /// Inicializa o atributo data com o parâmetro informado.
    ///
    /// @param data da aplicação
    ///
    ///

    void setData(const Data &data);
    
    ///
    /// Retorna o atributo data da aplicação
    ///
    /// @return data da aplicação
    ///

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

    ///
    /// Inicializa o atributo codigo com o parâmetro informado.
    ///
    /// @param codigo do produto
    ///
    ///

    void setCodigoProduto(const CodigoProduto &codigo);

    ///
    /// Retorna o atributo c�digo do produto
    ///
    /// @return c�digo do produto
    ///

    CodigoProduto getCodigoProduto(){
        return codigo;
    }

    ///
    /// Inicializa o atributo classe com o parâmetro informado.
    ///
    /// @param classe do produto
    ///
    ///

    void setClasse(const Classe &classe);

    ///
    /// Retorna o atributo classe do produto
    ///
    /// @return classe do produto
    ///

    Classe getClasse(){
        return classe;
    }

    ///
    /// Inicializa o atributo emissor com o parâmetro informado.
    ///
    /// @param emissor do produto
    ///
    ///

    void setEmissor(const Emissor &emissor);

    ///
    /// Retorna o atributo emissor do produto
    ///
    /// @return emissor do produto
    ///

    Emissor getEmissor(){
        return emissor;
    }

    ///
    /// Inicializa o atributo prazo com o parâmetro informado.
    ///
    /// @param prazo do produto
    ///
    ///

    void setPrazo(const Prazo &prazo);

    ///
    /// Retorna o atributo prazo do produto
    ///
    /// @return prazo do produto
    ///

    Prazo getPrazo(){
        return prazo;
    }

    ///
    /// Inicializa o atributo vencimento com o parâmetro informado.
    ///
    /// @param vencimento do produto
    ///
    ///

    void setData(const Data &vencimento);

    ///
    /// Retorna o atributo vencimento do produto
    ///
    /// @return data de vencimento do produto
    ///

    Data getData(){
        return vencimento;
    }

    ///
    /// Inicializa o atributo taxa com o parâmetro informado.
    ///
    /// @param taxa do produto
    ///
    ///

    void setTaxa(const Taxa &taxa);

    ///
    /// Retorna o atributo taxa do produto
    ///
    /// @return taxa do produto
    ///

    Taxa getTaxa(){
        return taxa;
    }

    ///
    /// Inicializa o atributo horário com o parâmetro informado.
    ///
    /// @param horario do produto
    ///
    ///

    void setHorario(const Horario &horario);

    ///
    /// Retorna o atributo horario do produto
    ///
    /// @return horario do produto
    ///

    Horario getHorario(){
        return horario;
    }

    ///
    /// Inicializa o atributo valor com o parâmetro informado.
    ///
    /// @param valor mínimo do produto
    ///
    ///

    void setValorMinimo(const ValorMinimo &valor);

    ///
    /// Retorna atributo valor do produto
    ///
    /// @return valor mínimo do produto
    ///

    ValorMinimo getValorMinimo(){
        return valor;
    }
};

///
/// Padr�o para representa��o de Conta.
///

class Conta {
private:
    CodigoBanco codigoBanco;
    CodigoAgencia codigoAgencia;
    Numero numero;

public:

    ///
    /// Inicializa o objeto com o c�digo do banco informado se ele for v�lido.
    ///
    /// @param valor do c�digo do banco
    ///
    ///

    void setCodigoBanco(const CodigoBanco &codigoBanco);

    ///
    /// Retorna c�digo do banco
    ///
    /// @return c�digo do banco
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
