#include <iostream>
#include <string>

#include "dominios.h"
#include "testes.h"

using namespace std;

int main() {
    TCep teste;
    switch(teste.rodarTeste()) {
        case TCep::SUCESSO :
            cout << "SUCESSO" << endl;
            break;
        case TCep::FALHA :
            cout << "FALHA" << endl;
            break;
    }

    TClasse testeclasse;
    switch(testeclasse.rodarTeste()) {
        case TClasse::SUCESSO :
            cout << "SUCESSO" << endl;
            break;
        case TClasse::FALHA :
            cout << "FALHA" << endl;
            break;
    }

    TCodigoAgencia testeagencia;
    switch(testeagencia.rodarTeste()) {
        case TCodigoAgencia::SUCESSO :
            cout << "SUCESSO" << endl;
            break;
        case TCodigoAgencia::FALHA :
            cout << "FALHA" << endl;
            break;
    }

    TCodigoAplicacao testeaplicacao;
    switch(testeaplicacao.rodarTeste()) {
        case TCodigoAplicacao::SUCESSO :
            cout << "SUCESSO" << endl;
            break;
        case TCodigoAplicacao::FALHA :
            cout << "FALHA" << endl;
            break;
    }

    TCodigoBanco testebanco;
    switch(testebanco.rodarTeste()) {
        case TCodigoBanco::SUCESSO :
            cout << "SUCESSO" << endl;
            break;
        case TCodigoBanco::FALHA :
            cout << "FALHA" << endl;
            break;
    }

    TCodigoProduto testeproduto;
    switch(testeproduto.rodarTeste()) {
        case TCodigoProduto::SUCESSO :
            cout << "SUCESSO" << endl;
            break;
        case TCodigoProduto::FALHA :
            cout << "FALHA" << endl;
            break;
    }

    TCpf testecpf;
    switch(testecpf.rodarTeste()) {
        case TCpf::SUCESSO :
            cout << "SUCESSO" << endl;
            break;
        case TCpf::FALHA :
            cout << "FALHA" << endl;
            break;
    }

    TData testedata;
    switch(testedata.rodarTeste()) {
        case TData::SUCESSO :
            cout << "SUCESSO" << endl;
            break;
        case TData::FALHA :
            cout << "FALHA" << endl;
            break;
    }

    TEmissor testeemissor;
    switch(testeemissor.rodarTeste()) {
        case TEmissor::SUCESSO :
            cout << "SUCESSO" << endl;
            break;
        case TEmissor::FALHA :
            cout << "FALHA" << endl;
            break;
    }

    TEndereco testeendereco;
    switch(testeendereco.rodarTeste()) {
        case TEndereco::SUCESSO :
            cout << "SUCESSO" << endl;
            break;
        case TEndereco::FALHA :
            cout << "FALHA" << endl;
            break;
    }

    THorario testehorario;
    switch(testehorario.rodarTeste()) {
        case THorario::SUCESSO :
            cout << "SUCESSO" << endl;
            break;
        case THorario::FALHA :
            cout << "FALHA" << endl;
            break;
    }

    TNome testenome;
    switch(testenome.rodarTeste()) {
        case TNome::SUCESSO :
            cout << "SUCESSO" << endl;
            break;
        case TNome::FALHA :
            cout << "FALHA" << endl;
            break;
    }

    TNumero testenumero;
    switch(testenumero.rodarTeste()) {
        case TNumero::SUCESSO :
            cout << "SUCESSO" << endl;
            break;
        case TNumero::FALHA :
            cout << "FALHA" << endl;
            break;
    }

    TPrazo testeprazo;
    switch(testeprazo.rodarTeste()) {
        case TPrazo::SUCESSO :
            cout << "SUCESSO" << endl;
            break;
        case TPrazo::FALHA :
            cout << "FALHA" << endl;
            break;
    }

    TSenha testesenha;
    switch(testesenha.rodarTeste()) {
        case TSenha::SUCESSO :
            cout << "SUCESSO" << endl;
            break;
        case TSenha::FALHA :
            cout << "FALHA" << endl;
            break;
    }

    TTaxa testetaxa;
    switch(testetaxa.rodarTeste()) {
        case TTaxa::SUCESSO :
            cout << "SUCESSO" << endl;
            break;
        case TTaxa::FALHA :
            cout << "FALHA" << endl;
            break;
    }

    TValorAplicacao testevalorap;
    switch(testevalorap.rodarTeste()) {
        case TValorAplicacao::SUCESSO :
            cout << "SUCESSO" << endl;
            break;
        case TValorAplicacao::FALHA :
            cout << "FALHA" << endl;
            break;
    }


    TValorMinimo testevalormin;
    switch(testevalormin.rodarTeste()) {
        case TValorMinimo::SUCESSO :
            cout << "SUCESSO" << endl;
            break;
        case TValorMinimo::FALHA :
            cout << "FALHA" << endl;
            break;
    }

    return 0;
}
