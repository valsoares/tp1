#include "entidades.h"

// Defini��es de m�todos

void Aplicacao::setCodigoAplicacao(const CodigoAplicacao &codigo){
    this->codigo = codigo;
}

void Aplicacao::setValorAplicacao(const ValorAplicacao &valor){
    this->valor = valor;
}

void Aplicacao::setData(const Data &data){
    this->data = data;
}

void Aplicacao::setProduto(Produto* produto){
    this->produto = produto;
}




void Produto::setCodigoProduto(const CodigoProduto &codigo){
    this->codigo = codigo;
}

void Produto::setClasse(const Classe &classe){
    this->classe = classe;
}

void Produto::setEmissor(const Emissor &emissor){
    this->emissor = emissor;
}

void Produto::setPrazo(const Prazo &prazo){
    this->prazo = prazo;
}

void Produto::setData(const Data &vencimento){
    this->vencimento = vencimento;
}

void Produto::setTaxa(const Taxa &taxa){
    this->taxa = taxa;
}

void Produto::setHorario(const Horario &horario){
    this->horario = horario;
}

void Produto::setValorMinimo(const ValorMinimo &valor){
    this->valor = valor;
}



void Conta::setCodigoBanco(const CodigoBanco &codigoBanco){
    this->codigoBanco = codigoBanco;
}

void Conta::setCodigoAgencia(const CodigoAgencia &codigoAgencia){
    this->codigoAgencia = codigoAgencia;
}

void Conta::setNumero(const Numero &numero){
    this->numero = numero;
}

void Conta::setAplicacao(Aplicacao aplicacao){
    this->aplicacao.push_back(aplicacao);
}




void Usuario::setNome(const Nome &nome){
    this->nome = nome;
}

void Usuario::setEndereco(const Endereco &endereco){
    this->endereco = endereco;
}

void Usuario::setCep(const Cep &cep){
    this->cep = cep;
}

void Usuario::setCpf(const Cpf &cpf){
    this->cpf = cpf;
}

void Usuario::setSenha(const Senha &senha){
    this->senha = senha;
}

void Usuario::setConta(Conta* conta){
    this->conta = conta;
}
