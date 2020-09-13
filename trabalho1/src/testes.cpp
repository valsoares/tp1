#include "testes.h"

const string TEndereco::VALOR_VALIDO = "Rua 23. Casa 18.";
const string TEndereco::VALOR_INVALIDO = "Rua 23  Casa 18.";
const int TEndereco::SUCESSO;
const int TEndereco::FALHA;

const string THorario::VALOR_VALIDO = "14:45";
const string THorario::VALOR_INVALIDO = "12:30";
const int THorario::SUCESSO;
const int THorario::FALHA;

const string TNome::VALOR_VALIDO = "Valesca Gomes Soares";
const string TNome::VALOR_INVALIDO = "valesca";
const int TNome::SUCESSO;
const int TNome::FALHA;

const string TNumero::VALOR_VALIDO = "123456";
const string TNumero::VALOR_INVALIDO = "11111111";
const int TNumero::SUCESSO;
const int TNumero::FALHA;

const int TPrazo::VALOR_VALIDO = 12;
const int TPrazo::VALOR_INVALIDO = 44;
const int TPrazo::SUCESSO;
const int TPrazo::FALHA;

const string TSenha::VALOR_VALIDO = "123456";
const string TSenha::VALOR_INVALIDO = "112345";
const int TSenha::SUCESSO;
const int TSenha::FALHA;

const int TTaxa::VALOR_VALIDO = 2;
const int TTaxa::VALOR_INVALIDO = 202;
const int TTaxa::SUCESSO;
const int TTaxa::FALHA;

const double TValorAplicacao::VALOR_VALIDO = 100.50;
const double TValorAplicacao::VALOR_INVALIDO = 1000000.50;
const int TValorAplicacao::SUCESSO;
const int TValorAplicacao::FALHA;

const double TValorMinimo::VALOR_VALIDO = 5000;
const double TValorMinimo::VALOR_INVALIDO = 1000.50;
const int TValorMinimo::SUCESSO;
const int TValorMinimo::FALHA;


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


void THorario::inicializarHorario() {
    horario = new Horario();
    estado = SUCESSO;
}

void THorario::destruirHorario() {
    delete horario;
}

void THorario::testeHorarioSucesso() {
    try {
        horario->setHorario(VALOR_VALIDO);
        if (horario->getHorario() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(const invalid_argument& excecao) {
        estado = FALHA;
    }
}

void THorario::testeHorarioFalha() {
    try{
        horario->setHorario(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(const invalid_argument& excecao){
        return;
    }
}

int THorario::rodarTeste() {
    inicializarHorario();
    testeHorarioSucesso();
    testeHorarioFalha();
    destruirHorario();
    return estado;
}


void TNome::inicializarNome() {
    nome = new Nome();
    estado = SUCESSO;
}

void TNome::destruirNome() {
    delete nome;
}

void TNome::testeNomeSucesso() {
    try {
        nome->setNome(VALOR_VALIDO);
        if (nome->getNome() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(const invalid_argument& excecao) {
        estado = FALHA;
    }
}

void TNome::testeNomeFalha() {
    try{
        nome->setNome(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(const invalid_argument& excecao){
        return;
    }
}

int TNome::rodarTeste() {
    inicializarNome();
    testeNomeSucesso();
    testeNomeFalha();
    destruirNome();
    return estado;
}


void TNumero::inicializarNumero() {
    numero = new Numero();
    estado = SUCESSO;
}

void TNumero::destruirNumero() {
    delete numero;
}

void TNumero::testeNumeroSucesso() {
    try {
        numero->setNumero(VALOR_VALIDO);
        if (numero->getNumero() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(const invalid_argument& excecao) {
        estado = FALHA;
    }
}

void TNumero::testeNumeroFalha() {
    try{
        numero->setNumero(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(const invalid_argument& excecao){
        return;
    }
}

int TNumero::rodarTeste() {
    inicializarNumero();
    testeNumeroSucesso();
    testeNumeroFalha();
    destruirNumero();
    return estado;
}


void TPrazo::inicializarPrazo() {
    prazo = new Prazo();
    estado = SUCESSO;
}

void TPrazo::destruirPrazo() {
    delete prazo;
}

void TPrazo::testePrazoSucesso() {
    try {
        prazo->setPrazo(VALOR_VALIDO);
        if (prazo->getPrazo() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(const invalid_argument& excecao) {
        estado = FALHA;
    }
}

void TPrazo::testePrazoFalha() {
    try{
        prazo->setPrazo(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(const invalid_argument& excecao){
        return;
    }
}

int TPrazo::rodarTeste() {
    inicializarPrazo();
    testePrazoSucesso();
    testePrazoFalha();
    destruirPrazo();
    return estado;
}


void TSenha::inicializarSenha() {
    senha = new Senha();
    estado = SUCESSO;
}

void TSenha::destruirSenha() {
    delete senha;
}

void TSenha::testeSenhaSucesso() {
    try {
        senha->setSenha(VALOR_VALIDO);
        if (senha->getSenha() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(const invalid_argument& excecao) {
        estado = FALHA;
    }
}

void TSenha::testeSenhaFalha() {
    try{
        senha->setSenha(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(const invalid_argument& excecao){
        return;
    }
}

int TSenha::rodarTeste() {
    inicializarSenha();
    testeSenhaSucesso();
    testeSenhaFalha();
    destruirSenha();
    return estado;
}


void TTaxa::inicializarTaxa() {
    taxa = new Taxa();
    estado = SUCESSO;
}

void TTaxa::destruirTaxa() {
    delete taxa;
}

void TTaxa::testeTaxaSucesso() {
    try {
        taxa->setTaxa(VALOR_VALIDO);
        if (taxa->getTaxa() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(const invalid_argument& excecao) {
        estado = FALHA;
    }
}

void TTaxa::testeTaxaFalha() {
    try{
        taxa->setTaxa(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(const invalid_argument& excecao){
        return;
    }
}

int TTaxa::rodarTeste() {
    inicializarTaxa();
    testeTaxaSucesso();
    testeTaxaFalha();
    destruirTaxa();
    return estado;
}


void TValorAplicacao::inicializarValorAplicacao() {
    valorAplicacao = new ValorAplicacao();
    estado = SUCESSO;
}

void TValorAplicacao::destruirValorAplicacao() {
    delete valorAplicacao;
}

void TValorAplicacao::testeValorAplicacaoSucesso() {
    try {
        valorAplicacao->setValorAplicacao(VALOR_VALIDO);
        if (valorAplicacao->getValorAplicacao() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(const invalid_argument& excecao) {
        estado = FALHA;
    }
}

void TValorAplicacao::testeValorAplicacaoFalha() {
    try{
        valorAplicacao->setValorAplicacao(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(const invalid_argument& excecao){
        return;
    }
}

int TValorAplicacao::rodarTeste() {
    inicializarValorAplicacao();
    testeValorAplicacaoSucesso();
    testeValorAplicacaoFalha();
    destruirValorAplicacao();
    return estado;
}


void TValorMinimo::inicializarValorMinimo() {
    valorMinimo = new ValorMinimo();
    estado = SUCESSO;
}

void TValorMinimo::destruirValorMinimo() {
    delete valorMinimo;
}

void TValorMinimo::testeValorMinimoSucesso() {
    try {
        valorMinimo->setValorMinimo(VALOR_VALIDO);
        if (valorMinimo->getValorMinimo() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(const invalid_argument& excecao) {
        estado = FALHA;
    }
}

void TValorMinimo::testeValorMinimoFalha() {
    try{
        valorMinimo->setValorMinimo(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(const invalid_argument& excecao){
        return;
    }
}

int TValorMinimo::rodarTeste() {
    inicializarValorMinimo();
    testeValorMinimoSucesso();
    testeValorMinimoFalha();
    destruirValorMinimo();
    return estado;
}
