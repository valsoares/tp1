#include "entidades.h"

void Aplicacao::setCodigoAplicacao(const CodigoAplicacao &codigo){
    this->codigo = codigo;
}

void Aplicacao::setValorAplicacao(const ValorAplicacao &valor){
    this->valor = valor;
}

void Aplicacao::setData(const Data &data){
    this->data = data;
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




