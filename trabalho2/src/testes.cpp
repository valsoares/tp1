#include "testes.h"

void TUAplicacao::setUp(){
    aplicacao = new Aplicacao();
    estado = SUCESSO;
}

void TUAplicacao::tearDown(){
    delete aplicacao;
}

void TUAplicacao::testarCenarioSucessoCodigo(){
    CodigoAplicacao codigo;
    codigo.setCodigoAplicacao(VALOR_VALIDO_CODIGO);
    aplicacao->setCodigoAplicacao(codigo);
    if(aplicacao->getCodigoAplicacao().getCodigoAplicacao() != VALOR_VALIDO_CODIGO)
        estado = FALHA;
}

void TUAplicacao::testarCenarioSucessoValor(){
    ValorAplicacao valor;
    valor.setValorAplicacao(VALOR_VALIDO_VALOR);
    aplicacao->setValorAplicacao(valor);
    if(aplicacao->getValorAplicacao().getValorAplicacao() != VALOR_VALIDO_VALOR)
        estado = FALHA;
}

void TUAplicacao::testarCenarioSucessoData(){
    Data data;
    data.setData(VALOR_VALIDO_DATA);
    aplicacao->setData(data);
    if(aplicacao->getData().getData() != VALOR_VALIDO_DATA)
        estado = FALHA;
}

int TUAplicacao::run(){
    setUp();
    testarCenarioSucessoCodigo();
    testarCenarioSucessoValor();
    testarCenarioSucessoData();
    tearDown();
    return estado;
}




void TUProduto::setUp(){
    produto = new Produto();
    estado = SUCESSO;
}

void TUProduto::tearDown(){
    delete produto;
}

void TUProduto::testarCenarioSucessoCodigo(){
    CodigoProduto codigo;
    codigo.setCodigoProduto(VALOR_VALIDO_CODIGO);
    produto->setCodigoProduto(codigo);
    if(produto->getCodigoProduto().getCodigoProduto() != VALOR_VALIDO_CODIGO)
        estado = FALHA;
}

void TUProduto::testarCenarioSucessoClasse(){
    Classe classe;
    classe.setClasse(VALOR_VALIDO_CLASSE);
    produto->setClasse(classe);
    if(produto->getClasse().getClasse() != VALOR_VALIDO_CLASSE)
        estado = FALHA;
}

void TUProduto::testarCenarioSucessoEmissor(){
    Emissor emissor;
    emissor.setEmissor(VALOR_VALIDO_EMISSOR);
    produto->setEmissor(emissor);
    if(produto->getEmissor().getEmissor() != VALOR_VALIDO_EMISSOR)
        estado = FALHA;
}

void TUProduto::testarCenarioSucessoPrazo(){
    Prazo prazo;
    prazo.setPrazo(VALOR_VALIDO_PRAZO);
    produto->setPrazo(prazo);
    if(produto->getPrazo().getPrazo() != VALOR_VALIDO_PRAZO)
        estado = FALHA;
}

void TUProduto::testarCenarioSucessoVencimento(){
    Data vencimento;
    vencimento.setData(VALOR_VALIDO_VENCIMENTO);
    produto->setData(vencimento);
    if(produto->getData().getData() != VALOR_VALIDO_VENCIMENTO)
        estado = FALHA;
}

void TUProduto::testarCenarioSucessoTaxa(){
    Taxa taxa;
    taxa.setTaxa(VALOR_VALIDO_TAXA);
    produto->setTaxa(taxa);
    if(produto->getTaxa().getTaxa() != VALOR_VALIDO_TAXA)
        estado = FALHA;
}

void TUProduto::testarCenarioSucessoHorario(){
    Horario horario;
    horario.setHorario(VALOR_VALIDO_HORARIO);
    produto->setHorario(horario);
    if(produto->getHorario().getHorario() != VALOR_VALIDO_HORARIO)
        estado = FALHA;
}

void TUProduto::testarCenarioSucessoValor(){
    ValorMinimo valor;
    valor.setValorMinimo(VALOR_VALIDO_VALOR);
    produto->setValorMinimo(valor);
    if(produto->getValorMinimo().getValorMinimo() != VALOR_VALIDO_VALOR)
        estado = FALHA;
}

int TUProduto::run(){
    setUp();
    tearDown();
    testarCenarioSucessoCodigo();
    testarCenarioSucessoClasse();
    testarCenarioSucessoEmissor();
    testarCenarioSucessoPrazo();
    testarCenarioSucessoVencimento();
    testarCenarioSucessoTaxa();
    testarCenarioSucessoHorario();
    testarCenarioSucessoValor();
    return estado;
}