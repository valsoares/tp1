#include <iostream>
#include <string>

#include "dominios.h"

using namespace std;


void Cep::validaCep(int cep) {
    if((cep < 1000000 || cep >= 71000000) || (cep >= 6000000 && cep < 8000000) || 
       (cep >= 8500000 && cep < 20000000) || (cep >= 26601000 && cep < 40000000) || 
       (cep>= 42000000 && cep < 60000000) || (cep >= 61000000 && cep < 70000000)) {
           throw invalid_argument("Argumento invalido!");
       }
}

void Cep::setCep(int cep) {
    validaCep(cep);
    this->cep = cep;
}

void Classe::validaClasse(string classe) {
    if(classe != "CDB" && classe != "LCA" && classe != "LCI" && classe != "LF" && classe != "LC"){
        throw invalid_argument("Argumento invalido!");
    }
}

void Classe::setClasse(string classe) {
    validaClasse(classe);
    this->classe = classe;
}

void CodigoAgencia::validaCodigoAgencia(string codigoAgencia) {
    if(codigoAgencia.length() != 4 || codigoAgencia == "0000") {
        throw invalid_argument("Argumento invalido");
    }
    for(int i = 0; i<4; i++){
        if(codigoAgencia[i] < '0' || codigoAgencia[i] > '9') {
            throw invalid_argument("Argumento invalido");
        }
    }
}

void CodigoAgencia::setCodigoAgencia(string codigoAgencia) {
    validaCodigoAgencia(codigoAgencia);
    this->codigoAgencia = codigoAgencia;
}

void CodigoAplicacao::validaCodigoAplicacao(string codigoAplicacao) {
    if(codigoAplicacao.length() != 5 || codigoAplicacao == "00000"){
        throw invalid_argument("Argumento invalido!");
    }
    for(int i = 0; i<5; i++){
        if(codigoAplicacao[i] < '0' || codigoAplicacao[i] > '9'){
            throw invalid_argument("Argumento invalido!");
        }
    }
}

void CodigoAplicacao::setCodigoAplicacao(string codigoAplicacao){
    validaCodigoAplicacao(codigoAplicacao);
    this->codigoAplicacao = codigoAplicacao;
}

void CodigoBanco::validaCodigoBanco(string codigoBanco){
    if(codigoBanco != "341" && codigoBanco != "001" && codigoBanco != "237" && codigoBanco != "104" && codigoBanco != "033"){
        throw invalid_argument("Argumento invalido!");
    }
}

void CodigoBanco::setCodigoBanco(string codigoBanco){
    validaCodigoBanco(codigoBanco);
    this->codigoBanco = codigoBanco;
}

void CodigoProduto::validaCodigoProduto(string codigoProduto){
    if(codigoProduto.length() != 3 || codigoProduto == "000"){
        throw invalid_argument("Argumento invalido!");
    }
    for(int i = 0; i<3; i++){
        if(codigoProduto[i] < '0' || codigoProduto[i] > '9'){
            throw invalid_argument("Argumento invalido!");
        }
    }
}

void CodigoProduto::setCodigoProduto(string codigoProduto){
    validaCodigoProduto(codigoProduto);
    this->codigoProduto = codigoProduto;
}

// Falta ver o algoritmo pra gerar cpf's validos
void Cpf::validaCpf(string cpf){
    if(cpf.length() != 14){
        throw invalid_argument("Argumento invalido!");
    }
    if(cpf[3] != '.' || cpf[7] != '.' || cpf[11] != '-'){
        throw invalid_argument("Argumento invalido!");
    }
    for(int j = 0; j<4; j++){
        for(int i = 0; i<3; i++){
            if(j == 3 && i == 2){
                break;
            }
            if(cpf[4*j+i] < '0' || cpf[4*j+i] > '9'){
                throw invalid_argument("Argumento invalido!");
            }
        }
    }
}

void Cpf::setCpf(string cpf){
    validaCpf(cpf);
    this->cpf = cpf;
}

//Falta limitar dias 30 e 31 dependendo do mes e limitar feveiro para 28 ou 29 dependendo do ano
void Data::validaData(string data){
    // Verifica que esta no formato DD/MM/AAAA
    if(data.length() != 10 || data[2] != '/' || data[5] != '/'){
        throw invalid_argument("Argumento invalido!");
    }
    for(int j = 0; j<2; j++){
        for(int i = 0; i<2; i++){
            if(data[3*j+i] < '0' || data[3*j+i] > '9'){
                throw invalid_argument("Argumento invalido!");
            }
        }
    }
    for(int i = 6; i<10; i++){
        if(data[i] < '0' || data[i] > '9'){
            throw invalid_argument("Argumento invalido!");
        }
    }
    
    int dia = stoi(data.substr(0,2));
    int mes = stoi(data.substr(3,5));
    int ano = stoi(data.substr(6,10));

    // Verifica que o ano vai de 2020 até 2099
    if(ano < 2020 || ano > 2099){
        throw invalid_argument("Argumento invalido!");
    }

    // Verifica que não há dia nem mês 0
    if(dia == 0 || mes == 0){
        throw invalid_argument("Argumento invalido!");
    }

    // Verifica o limite superior do dia pra cada mes
    if((mes  == 1 || mes  == 3 ||  mes  == 5 ||  mes  == 7 || 
        mes  == 8 || mes  == 10 || mes  == 12) && dia > 31){
        throw invalid_argument("Argumento invalido!");
    }

    if((mes  == 4 ||  mes  == 6 ||  mes  == 9 || mes  == 11 || mes  == 10) && dia > 30){
        throw invalid_argument("Argumento invalido!");
    }

    // Tratamento especial para fevereiro
    if(ano%4 == 0 && mes == 2 && dia > 29){
        throw invalid_argument("Argumento invalido!");
    }

    if(ano%4 != 0 && mes == 2 && dia > 28){
        throw invalid_argument("Argumento invalido!");
    }
}

void Data::setData(string data){
    validaData(data);
    this->data = data;
}

void Emissor::validaEmissor(string emissor){
    if(emissor.length() < 5 || emissor.length() > 30){
        throw invalid_argument("Argumento invalido!");
    }

    if(emissor[0] >= 'a' && emissor[0] <= 'z'){
        throw invalid_argument("Argumento invalido!");
    }

    for(int i = 0; i < emissor.length(); i++){
        // Restringe a entrada para letras, numeros, ponto, hifen e espaço
        if(emissor[i] < 'A' && emissor[i] > 'z' && emissor[i]<'0' && emissor[i] > '9' && 
           emissor[i] != '.' && emissor[i] != '-' && emissor[i] != ' '){
               throw invalid_argument("Argumento invalido!");
        }
        // Apenas letras e numeros se sucedem
        if(i+1 != emissor.length() && (emissor[i] == '.' || emissor[i] == '-' || emissor[i] == ' ') && 
          (emissor[i+1] == '.' || emissor[i+1] == '-' || emissor[i+1] == ' ')) {
               throw invalid_argument("Argumento invalido!");  
        }
        // Garante a letra maisucula no inicio de um texto
        if(i+1 != emissor.length() && emissor[i] == ' ' && emissor[i+1] >= 'a' && emissor[i+1] <= 'z'){
            throw invalid_argument("Argumento invalido!");
        }
    }

}

void Emissor::setEmissor(string emissor){
    validaEmissor(emissor);
    this->emissor = emissor;
}

bool Endereco::validaEndereco(string endereco) {
    /*endereco composto por 5 a 20 caracteres onde cada caracter pode ser letra (A-Z ou a-z), dígito
    (0 – 9), ponto ou espaço. Apenas letras e dígitos podem estar em sequência. Em termo cujo
    primeiro caracter é letra, a mesma é maiúscula*/
    if(endereco.length() < 5 || endereco.length() > 20) {
        return false;
    }

    for (size_t i = 0; i < endereco.length(); i++) {
        if(endereco[i] >= 'A' && endereco[i] <= 'z');
        else if(endereco[i] == '.') {
            if(endereco[i+1] == '.' && (i+1) != endereco.length()) {
                return false;
            }
        }
        else if(endereco[i] == ' ') {
            if(endereco[i+1] == ' ' && (i+1) != endereco.length()) {
                return false;
            }
            if((endereco[i+1] >= 'a' && endereco[i+1] <= 'z') && (i+1) != endereco.length()) {
                return false;
            }
        }
        else if(endereco[i] >= '0' && endereco[i] <= '9');
    }

    return true;
    
}

void Endereco::setEndereco(string endereco) {
    if(validaEndereco(endereco)) {
        this->endereco = endereco;
    }
    else {
        cout << "Entre um endereço válido" << endl;
    }
}

bool Horario::validaHorario(string horario) {
/*Formato XY:ZW para representar horário entre 13:00 e 17:00 horas.*/
    int hora = stoi(horario.substr(0,2));
    int minuto = stoi(horario.substr(3,5));
    if(hora >= 13 && hora < 17 && minuto > 0 && minuto < 60) {
        return true;
    }
    else if(hora == 17 && minuto == 0) {
        return true;
    }
    else {
        return false;
    }

}

void Horario::setHorario(string horario) {
    if(validaHorario(horario)) {
        this->horario = horario;
    }
    else {
        cout << "Entre um horário válido" << endl;
    }
}

bool Nome::validaNome(string nome) {
/*nome composto por 5 a 30 caracteres onde cada caracter pode ser letra (A-Z ou a-z) ou
espaço, há pelo menos 5 letras, não há espaços em sequência, primeira letra de cada termo é
letra maiúscula*/
    if(nome.length() < 5 || nome.length() > 30) {
        return false;
    }
    if(nome[0] >= 'a' && nome[0] <= 'z') {
        return false;
    }
    for (size_t i = 0; i < nome.length(); i++) {
        if(nome[i] == ' ') {
            if((nome[i+1] >= 'a' && nome[i+1] <= 'z') && (i+1) != nome.length()) {
                return false;
            }
            else if(nome[i+1] == ' ' && (i+1) != nome.length()) {
                return false;
            }
        }
    }

    return  true;

}

void Nome::setNome(string nome) {
    if(validaNome(nome)) {
        this->nome = nome;
    }
    else {
        cout << "Entre um nome válido" << endl;
    }
}

//falta calcular o digito verificador
bool Numero::validaNumero(string numero) {
/*Formato XXXXXX-Y onde cada X é dígito (0 – 9) e Y é dígito verificador calculado por
meio de algorítmo apropriado.*/
    
    if(numero.length() != 6) {
        return false;
    }

    for (int i = 0; i < numero.length(); i++) {
        if(numero[i] >= '0' && numero[i] <= '9');
        else {
            return false;
        }
    }

    return true;
}

void Numero::setNumero(string numero) {
    if(validaNumero(numero)) {
        this->numero = numero;
    }
    else {
        cout << "Entre um número válido" << endl;
    }
}

bool Prazo::validaPrazo(int prazo) {
    if(prazo == 6 || prazo == 12 || prazo == 18 || prazo == 24 || prazo == 30 ||
      prazo == 36 || prazo == 42 || prazo == 48 || prazo == 54 || prazo == 60 ||
      prazo == 66 || prazo == 72) {
          return true;
    }
    else {
        return false;
    }
}

void Prazo::setPrazo(int prazo) {
    if(validaPrazo(prazo)) {
        this->prazo = prazo;
    }
    else {
        cout << "Entre um prazo válido" << endl;
    }
}

bool Senha::validaSenha(string senha) {
/*Formato XXXXXX onde cada X é dígito (0 – 9) e não há dígito repetido*/

    if(senha.length() != 6) {
        return false;
    }

    for (int i = 0; i < senha.length(); i++) {
        if(senha[i] >= '0' && senha[i] <= '9');
        else {
            return false;
        }

        for(int j = 0; j < senha.length(); j++) {
            if(i != j) {
                if(senha[i] == senha[j]){
                    return false;
                }
            }
        }
    }

    return true;
}

void Senha::setSenha(string senha) {
    if(validaSenha(senha)) {
        this->senha = senha;
    }
    else {
        cout << "Entre uma senha válida" << endl;
    }
}

bool Taxa::validaTaxa(int taxa) {
    /*taxa na faixa de 0 a 200*/
    if(200 >= taxa && taxa >= 0) {
        return true;
    }
    else {
        return false;
    }
}

void Taxa::setTaxa(int taxa) {
    if(validaTaxa(taxa)) {
        this->taxa = taxa;
    }
    else {
        cout << "Entre uma taxa válida" << endl;
    }
}

bool ValorAplicacao::validaValorAplicacao(double valorAplicacao) {
    /*Valor na faixa de 0 a 1.000.000,00*/
    if(1000000.0 >= valorAplicacao && valorAplicacao >= 0.0) {
        return true;
    }
    else {
        return false;
    }
}

void ValorAplicacao::setValorAplicacao(double valorAplicacao) {
    if(validaValorAplicacao(valorAplicacao)) {
        this->valorAplicacao = valorAplicacao;
    }
    else {
        cout << "Entre um valor de aplicação válido" << endl;
    }
}

bool ValorMinimo::validaValorMinimo(double valorMinimo) {
    /*Valor 1.000,00, 5.000,00, 10.000 ou 50.000,00 */
    if((valorMinimo == 1000.0) || (valorMinimo == 5000.0) || (valorMinimo == 10000.0) || (valorMinimo == 50000.0)) {
        return true;
    }
    else {
        return false;
    }
}

void ValorMinimo::setValorMinimo(int valorMinimo) {
    if(validaValorMinimo(valorMinimo)) {
        this->valorMinimo = valorMinimo;
    }
    else {
        cout << "Entre um valor mínimo válido" << endl;
    }
}
