#include "testes.h"

// inicialização de constantes

const int TCep::VALOR_VALIDO = 70510310;
const int TCep::VALOR_INVALIDO = 71510310;
const int TCep::SUCESSO;
const int TCep::FALHA;

const string TClasse::VALOR_VALIDO = "CDB";
const string TClasse::VALOR_INVALIDO = "SBT";
const int TClasse::SUCESSO;
const int TClasse::FALHA;
 
const string TCodigoAgencia::VALOR_VALIDO = "0356";
const string TCodigoAgencia::VALOR_INVALIDO = "03561";
const int TCodigoAgencia::SUCESSO;
const int TCodigoAgencia::FALHA;

const string TCodigoAplicacao::VALOR_VALIDO = "33256";
const string TCodigoAplicacao::VALOR_INVALIDO = "123456";
const int TCodigoAplicacao::SUCESSO;
const int TCodigoAplicacao::FALHA;

const string TCodigoBanco::VALOR_VALIDO = "001";
const string TCodigoBanco::VALOR_INVALIDO = "002";
const int TCodigoBanco::SUCESSO;
const int TCodigoBanco::FALHA;

const string TCodigoProduto::VALOR_VALIDO = "352";
const string TCodigoProduto::VALOR_INVALIDO = "3325";
const int TCodigoProduto::SUCESSO;
const int TCodigoProduto::FALHA;

const string TCpf::VALOR_VALIDO = "020.397.051-98";
const string TCpf::VALOR_INVALIDO = "020.397.051-97";
const int TCpf::SUCESSO;
const int TCpf::FALHA;

const string TData::VALOR_VALIDO = "29/02/2024";
const string TData::VALOR_INVALIDO = "29/02/2021";
const int TData::SUCESSO;
const int TData::FALHA;

const string TEmissor::VALOR_VALIDO = "Mateus35.7-0 Bitt";
const string TEmissor::VALOR_INVALIDO = "Mateus35.7 -0 Bitt";
const int TEmissor::SUCESSO;
const int TEmissor::FALHA;

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

const string TNumero::VALOR_VALIDO = "123456-9";
const string TNumero::VALOR_INVALIDO = "111111-0";
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

// Definições de métodos

void TCep::inicializarCep() {
    cep = new Cep();
    estado = SUCESSO;
}

void TCep::destruirCep() {
    delete cep;
}

void TCep::testeCepSucesso() {
    try {
        cep->setCep(VALOR_VALIDO);
        if (cep->getCep() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(const invalid_argument& excecao) {
        estado = FALHA;
    }
}

void TCep::testeCepFalha() {
    try{
        cep->setCep(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(const invalid_argument& excecao){
        return;
    }
}

int TCep::rodarTeste() {
    inicializarCep();
    testeCepSucesso();
    testeCepFalha();
    destruirCep();
    return estado;
}

void TClasse::inicializarClasse() {
    classe = new Classe();
    estado = SUCESSO;
}

void TClasse::destruirClasse() {
    delete classe;
}

void TClasse::testeClasseSucesso() {
    try {
        classe->setClasse(VALOR_VALIDO);
        if (classe->getClasse() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(const invalid_argument& excecao) {
        estado = FALHA;
    }
}

void TClasse::testeClasseFalha() {
    try{
        classe->setClasse(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(const invalid_argument& excecao){
        return;
    }
}

int TClasse::rodarTeste() {
    inicializarClasse();
    testeClasseSucesso();
    testeClasseFalha();
    destruirClasse();
    return estado;
}

void TCodigoAgencia::inicializarCodigoAgencia() {
    codigoAgencia = new CodigoAgencia();
    estado = SUCESSO;
}

void TCodigoAgencia::destruirCodigoAgencia() {
    delete codigoAgencia;
}

void TCodigoAgencia::testeCodigoAgenciaSucesso() {
    try {
        codigoAgencia->setCodigoAgencia(VALOR_VALIDO);
        if (codigoAgencia->getCodigoAgencia() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(const invalid_argument& excecao) {
        estado = FALHA;
    }
}

void TCodigoAgencia::testeCodigoAgenciaFalha() {
    try{
        codigoAgencia->setCodigoAgencia(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(const invalid_argument& excecao){
        return;
    }
}

int TCodigoAgencia::rodarTeste() {
    inicializarCodigoAgencia();
    testeCodigoAgenciaSucesso();
    testeCodigoAgenciaFalha();
    destruirCodigoAgencia();
    return estado;
}

void TCodigoAplicacao::inicializarCodigoAplicacao() {
    codigoAplicacao = new CodigoAplicacao();
    estado = SUCESSO;
}

void TCodigoAplicacao::destruirCodigoAplicacao() {
    delete codigoAplicacao;
}

void TCodigoAplicacao::testeCodigoAplicacaoSucesso() {
    try {
        codigoAplicacao->setCodigoAplicacao(VALOR_VALIDO);
        if (codigoAplicacao->getCodigoAplicacao() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(const invalid_argument& excecao) {
        estado = FALHA;
    }
}

void TCodigoAplicacao::testeCodigoAplicacaoFalha() {
    try{
        codigoAplicacao->setCodigoAplicacao(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(const invalid_argument& excecao){
        return;
    }
}

int TCodigoAplicacao::rodarTeste() {
    inicializarCodigoAplicacao();
    testeCodigoAplicacaoSucesso();
    testeCodigoAplicacaoFalha();
    destruirCodigoAplicacao();
    return estado;
}

void TCodigoBanco::inicializarCodigoBanco() {
    codigoBanco = new CodigoBanco();
    estado = SUCESSO;
}

void TCodigoBanco::destruirCodigoBanco() {
    delete codigoBanco;
}

void TCodigoBanco::testeCodigoBancoSucesso() {
    try {
        codigoBanco->setCodigoBanco(VALOR_VALIDO);
        if (codigoBanco->getCodigoBanco() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(const invalid_argument& excecao) {
        estado = FALHA;
    }
}

void TCodigoBanco::testeCodigoBancoFalha() {
    try{
        codigoBanco->setCodigoBanco(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(const invalid_argument& excecao){
        return;
    }
}

int TCodigoBanco::rodarTeste() {
    inicializarCodigoBanco();
    testeCodigoBancoSucesso();
    testeCodigoBancoFalha();
    destruirCodigoBanco();
    return estado;
}

void TCodigoProduto::inicializarCodigoProduto() {
    codigoProduto = new CodigoProduto();
    estado = SUCESSO;
}

void TCodigoProduto::destruirCodigoProduto() {
    delete codigoProduto;
}

void TCodigoProduto::testeCodigoProdutoSucesso() {
    try {
        codigoProduto->setCodigoProduto(VALOR_VALIDO);
        if (codigoProduto->getCodigoProduto() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(const invalid_argument& excecao) {
        estado = FALHA;
    }
}

void TCodigoProduto::testeCodigoProdutoFalha() {
    try{
        codigoProduto->setCodigoProduto(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(const invalid_argument& excecao){
        return;
    }
}

int TCodigoProduto::rodarTeste() {
    inicializarCodigoProduto();
    testeCodigoProdutoSucesso();
    testeCodigoProdutoFalha();
    destruirCodigoProduto();
    return estado;
}

void TCpf::inicializarCpf() {
    cpf = new Cpf();
    estado = SUCESSO;
}

void TCpf::destruirCpf() {
    delete cpf;
}

void TCpf::testeCpfSucesso() {
    try {
        cpf->setCpf(VALOR_VALIDO);
        if (cpf->getCpf() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(const invalid_argument& excecao) {
        estado = FALHA;
    }
}

void TCpf::testeCpfFalha() {
    try{
        cpf->setCpf(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(const invalid_argument& excecao){
        return;
    }
}

int TCpf::rodarTeste() {
    inicializarCpf();
    testeCpfSucesso();
    testeCpfFalha();
    destruirCpf();
    return estado;
}

void TData::inicializarData() {
    data = new Data();
    estado = SUCESSO;
}

void TData::destruirData() {
    delete data;
}

void TData::testeDataSucesso() {
    try {
        data->setData(VALOR_VALIDO);
        if (data->getData() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(const invalid_argument& excecao) {
        estado = FALHA;
    }
}

void TData::testeDataFalha() {
    try{
        data->setData(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(const invalid_argument& excecao){
        return;
    }
}

int TData::rodarTeste() {
    inicializarData();
    testeDataSucesso();
    testeDataFalha();
    destruirData();
    return estado;
}

void TEmissor::inicializarEmissor() {
    emissor = new Emissor();
    estado = SUCESSO;
}

void TEmissor::destruirEmissor() {
    delete emissor;
}

void TEmissor::testeEmissorSucesso() {
    try {
        emissor->setEmissor(VALOR_VALIDO);
        if (emissor->getEmissor() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(const invalid_argument& excecao) {
        estado = FALHA;
    }
}

void TEmissor::testeEmissorFalha() {
    try{
        emissor->setEmissor(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(const invalid_argument& excecao){
        return;
    }
}

int TEmissor::rodarTeste() {
    inicializarEmissor();
    testeEmissorSucesso();
    testeEmissorFalha();
    destruirEmissor();
    return estado;
}

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
    catch(const invalid_argument& excecao){
        return;
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