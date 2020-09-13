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

    // Verifica que o ano vai de 2020 at� 2099
    if(data[6] != '2' || data[7] != '0' || data[8] < '2'){
        throw invalid_argument("Argumento invalido!");
    }

    // Verifica que n�o h� dia nem m�s 0
    if((data[0] == '0' && data[1] == '0') || (data[3] == '0' && data[4] == '0')){
        throw invalid_argument("Argumento invalido!");
    }

    // Verifica tanto o limite superior do mes e do dia
    if(data[0] > '3' || data[3] > '1'){
        throw invalid_argument("Argumento invalido!");
    }

    if((data[0] == '3' && data[1] > '1') || (data[3] == '1' && data[4] > '2')){
        throw invalid_argument("Argumento invalido!");
    }
}

void Data::setData(string data){
    validaData(data);
    this->data = data;
}

// Falta quase tudo
void Emissor::validaEmissor(string emissor){
    if(emissor.length() < 5 || emissor.length() > 30){
        throw invalid_argument("Argumento invalido!");
    }
}

void Emissor::setEmissor(string emissor){
    validaEmissor(emissor);
    this->emissor = emissor;
}

bool Endereco::validaEndereco(string endereco) {
    /*endereco composto por 5 a 20 caracteres onde cada caracter pode ser letra (A-Z ou a-z), d�gito
    (0 � 9), ponto ou espa�o. Apenas letras e d�gitos podem estar em sequ�ncia. Em termo cujo
    primeiro caracter � letra, a mesma � mai�scula*/
    if(endereco.length() < 5 && endereco.length() > 20) {
        return false;
    }

    for (size_t i = 0; i < endereco.length(); i++) {
        if(endereco[i] >= 'A' && endereco[i] <= 'z');
        else if(endereco[i] == '.') {
            if(endereco[i+1] == '.') {
                return false;
            }
        }
        else if(endereco[i] == ' ') {
            if(endereco[i+1] == ' ') {
                return false;
            }
            if(endereco[i+1] >= 'a' && endereco[i+1] <= 'z') {
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
        cout << "Entre um endere�o v�lido" << endl;
    }
}

bool Horario::validaHorario(string horario) {
/*Formato XY:ZW para representar hor�rio entre 13:00 e 17:00 horas.*/
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
        cout << "Entre um hor�rio v�lido" << endl;
    }
}

bool Nome::validaNome(string nome) {
/*nome composto por 5 a 30 caracteres onde cada caracter pode ser letra (A-Z ou a-z) ou
espa�o, h� pelo menos 5 letras, n�o h� espa�os em sequ�ncia, primeira letra de cada termo �
letra mai�scula*/
    if(nome.length() < 5 || nome.length() > 30) {
        return false;
    }
    if(nome[0] >= 'a' && nome[0] <= 'z') {
        return false;
    }
    for (size_t i = 0; i < nome.length(); i++) {
        if(nome[i] == ' ') {
            if(nome[i+1] >= 'a' || nome[i+1] <= 'z') {
                return false;
            }
            else if(nome[i+1] == ' ') {
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
        cout << "Entre um nome v�lido" << endl;
    }
}

//falta calcular o digito verificador
bool Numero::validaNumero(string numero) {
/*Formato XXXXXX-Y onde cada X � d�gito (0 � 9) e Y � d�gito verificador calculado por
meio de algor�tmo apropriado.*/

    if(numero.length() != 6) {
        return false;
    }

    for (size_t i = 0; i < numero.length(); i++) {
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
        cout << "Entre um n�mero v�lido" << endl;
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
        cout << "Entre um prazo v�lido" << endl;
    }
}

bool Senha::validaSenha(string senha) {
/*Formato XXXXXX onde cada X � d�gito (0 � 9) e n�o h� d�gito repetido*/

    if(senha.length() != 6) {
        return false;
    }

    for (size_t i = 0; i < senha.length(); i++) {
        if(senha[i] >= '0' && senha[i] <= '9');
        else {
            return false;
        }

        for(size_t j = 0; j < senha.length(); j++) {
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
        cout << "Entre uma senha v�lida" << endl;
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
        cout << "Entre uma taxa v�lida" << endl;
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
        cout << "Entre um valor de aplica��o v�lido" << endl;
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
        cout << "Entre um valor m�nimo v�lido" << endl;
    }
}
