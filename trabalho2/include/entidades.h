#ifndef ENTIDADES_H
#define ENTIDADES_H

#include "dominios.h"

///
/// Entidade para representação de Aplicação.
///

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
    /// Retorna o atributo código da aplicação
    ///
    /// @return código da aplicação
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

///
/// Entidade para representação de Produto.
///

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
    /// Retorna o atributo código do produto
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
/// Entidade para representação de Conta.
///

class Conta {
private:
    CodigoBanco codigoBanco;
    CodigoAgencia codigoAgencia;
    Numero numero;

public:

    ///
    /// Inicializa o atributo código do banco com o parâmetro informado.
    ///
    /// @param valor do código do banco
    ///
    ///

    void setCodigoBanco(const CodigoBanco &codigoBanco);

    ///
    /// Retorna atributo código do banco
    ///
    /// @return código do banco
    ///

    CodigoBanco getCodigoBanco(){
        return codigoBanco;
    }

    ///
    /// Inicializa o atributo código da agência com o parâmetro informado.
    ///
    /// @param valor do código da agência
    ///
    ///

    void setCodigoAgencia (const CodigoAgencia &codigoAgencia);

    ///
    /// Retorna atributo código da agência
    ///
    /// @return código da agência
    ///

    CodigoAgencia getCodigoAgencia(){
        return codigoAgencia;
    }

    ///
    /// Inicializa o atributo número com o parâmetro informado.
    ///
    /// @param valor do número
    ///
    ///

    void setNumero (const Numero &numero);

    ///
    /// Retorna atributo número
    ///
    /// @return número
    ///

    Numero getNumero(){
        return numero;
    }
};

///
/// Entidade para representação de Usuário.
///

class Usuario {
private:
    Nome nome;
    Endereco endereco;
    Cep cep;
    Cpf cpf;
    Senha senha;

public:

    ///
    /// Inicializa o atributo nome com o parâmetro informado.
    ///
    /// @param valor do nome
    ///
    ///

    void setNome(const Nome &nome);

    ///
    /// Retorna atributo nome
    ///
    /// @return nome
    ///

    Nome getNome(){
        return nome;
    }

    ///
    /// Inicializa o atributo endereço com o parâmetro informado.
    ///
    /// @param valor do endereço
    ///
    ///

    void setEndereco(const Endereco &endereco);

    ///
    /// Retorna atributo endereço
    ///
    /// @return endereço
    ///

    Endereco getEndereco(){
        return endereco;
    }

    ///
    /// Inicializa o atributo cep com o parâmetro informado.
    ///
    /// @param valor do cep
    ///
    ///

    void setCep(const Cep &cep);

    ///
    /// Retorna atributo cep
    ///
    /// @return cep
    ///

    Cep getCep(){
        return cep;
    }

    ///
    /// Inicializa o atributo cpf com o parâmetro informado.
    ///
    /// @param valor do cpf
    ///
    ///

    void setCpf(const Cpf &cpf);

    ///
    /// Retorna atributo cpf
    ///
    /// @return cpf
    ///

    Cpf getCpf(){
        return cpf;
    }

    ///
    /// Inicializa o atributo senha com o parâmetro informado.
    ///
    /// @param valor do senha
    ///
    ///

    void setSenha(const Senha &senha);

    ///
    /// Retorna atributo senha
    ///
    /// @return senha
    ///

    Senha getSenha(){
        return senha;
    }
};

#endif // ENTIDADES_H
