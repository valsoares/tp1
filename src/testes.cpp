#include "testes.h"

const string TEndereco::VALOR_VALIDO;
const string TEndereco::VALOR_INVALIDO;
const int TEndereco::SUCESSO;
const int TEndereco::FALHA;

void TEndereco::inicializarEndereco() {
    endereco = new Endereco();
    estado = SUCESSO;
}

void TEndereco::destruirEndereco() {
    delete endereco;
}

void TEndereco::testeEnderecoSucesso() {
    try {
        endereco->setEndereco(VALOR_VALIDO);
        if (endereco->getEndereco() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(const invalid_argument& excecao) {
        estado = FALHA;
    }
}

void TEndereco::testeEnderecoFalha() {
    try{
        endereco->setEndereco(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(const invalid_argument& excecao){
        return;
    }
}

int TEndereco::rodarTeste() {
    inicializarEndereco();
    testeEnderecoSucesso();
    testeEnderecoFalha();
    destruirEndereco();
    return estado;
}