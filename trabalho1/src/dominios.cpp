#include <iostream>
#include <string>

#include "dominios.h"

using namespace std;

void Cep::validaCep(int cep) {
    // Verifica se o cep esta entre as faixas válidas de cep
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
    if(classe != "CDB" && classe != "LCA" && classe != "LCI" && classe != "LF" && classe != "LC") {
        throw invalid_argument("Argumento invalido!");
    }
}

void Classe::setClasse(string classe) {
    validaClasse(classe);
    this->classe = classe;
}

void CodigoAgencia::validaCodigoAgencia(string codigoAgencia) {
    // Garante que o codigo é composto por 4 numeros, que não sejam 0000
    if(codigoAgencia.length() != 4 || codigoAgencia == "0000") {
        throw invalid_argument("Argumento invalido");
    }
    for(int i = 0; i<4; i++) {
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
    // Garante que o codigo é composto por 5 numeros, que não sejam 00000
    if(codigoAplicacao.length() != 5 || codigoAplicacao == "00000") {
        throw invalid_argument("Argumento invalido!");
    }
    for(int i = 0; i<5; i++) {
        if(codigoAplicacao[i] < '0' || codigoAplicacao[i] > '9') {
            throw invalid_argument("Argumento invalido!");
        }
    }
}

void CodigoAplicacao::setCodigoAplicacao(string codigoAplicacao) {
    validaCodigoAplicacao(codigoAplicacao);
    this->codigoAplicacao = codigoAplicacao;
}

void CodigoBanco::validaCodigoBanco(string codigoBanco) {
    if(codigoBanco != "341" && codigoBanco != "001" && codigoBanco != "237" && codigoBanco != "104" && codigoBanco != "033") {
        throw invalid_argument("Argumento invalido!");
    }
}

void CodigoBanco::setCodigoBanco(string codigoBanco) {
    validaCodigoBanco(codigoBanco);
    this->codigoBanco = codigoBanco;
}

void CodigoProduto::validaCodigoProduto(string codigoProduto) {
    // Garante que o codigo é composto por 3 numeros, que não sejam 000
    if(codigoProduto.length() != 3 || codigoProduto == "000") {
        throw invalid_argument("Argumento invalido!");
    }
    for(int i = 0; i<3; i++) {
        if(codigoProduto[i] < '0' || codigoProduto[i] > '9') {
            throw invalid_argument("Argumento invalido!");
        }
    }
}

void CodigoProduto::setCodigoProduto(string codigoProduto) {
    validaCodigoProduto(codigoProduto);
    this->codigoProduto = codigoProduto;
}

void Cpf::validaCpf(string cpf) {
    // Garante que o formato do cpf seja XXX.XXX.XXX-XX, sendo X um numero de 0 a 9
    if(cpf.length() != 14) {
        throw invalid_argument("Argumento invalido!");
    }
    if(cpf[3] != '.' || cpf[7] != '.' || cpf[11] != '-') {
        throw invalid_argument("Argumento invalido!");
    }
    for(int j = 0; j<4; j++) {
        for(int i = 0; i<3; i++) {
            if(j == 3 && i == 2) {
                break;
            }
            if(cpf[4*j+i] < '0' || cpf[4*j+i] > '9') {
                throw invalid_argument("Argumento invalido!");
            }
        }
    }

    // Verifica os 2 ultimos digitos seguindo o algoritmo conhecido como "modulo 11"
    int vetCpf[9];
    int j = 0;
    int digito1 = 0;
    int digito2 = 0;
    for(int i = 10; i>=0; i--){
        if(i == 7 || i == 3){
            continue;
        }
        vetCpf[j++] = stoi(cpf.substr(i, 1));
    }
    for(int i = 0; i < 9; i++){
        digito1 += vetCpf[i] * (9 - i);
        digito2 += vetCpf[i] * (9 - (i+1));
    }
    digito1 = (digito1%11)%10;
    digito2 = digito2 + digito1 * 9;
    digito2 = (digito2%11)%10;

    if(digito1 != stoi(cpf.substr(12,1)) || digito2 != stoi(cpf.substr(13,1)) ){
        throw invalid_argument("Argumento invalido!");
    }
}

void Cpf::setCpf(string cpf) {
    validaCpf(cpf);
    this->cpf = cpf;
}

void Data::validaData(string data) {
    // Verifica que esta no formato DD/MM/AAAA
    if(data.length() != 10 || data[2] != '/' || data[5] != '/') {
        throw invalid_argument("Argumento invalido!");
    }
    for(int j = 0; j<2; j++) {
        for(int i = 0; i<2; i++) {
            if(data[3*j+i] < '0' || data[3*j+i] > '9') {
                throw invalid_argument("Argumento invalido!");
            }
        }
    }
    for(int i = 6; i<10; i++) {
        if(data[i] < '0' || data[i] > '9') {
            throw invalid_argument("Argumento invalido!");
        }
    }
    
    int dia = stoi(data.substr(0,2));
    int mes = stoi(data.substr(3,2));
    int ano = stoi(data.substr(6,4));

    // Verifica que o ano vai de 2020 até 2099
    if(ano < 2020 || ano > 2099) {
        throw invalid_argument("Argumento invalido!");
    }

    // Verifica que não há dia nem mês 0
    if(dia == 0 || mes == 0) {
        throw invalid_argument("Argumento invalido!");
    }

    // Verifica o limite superior do dia pra cada mes
    if((mes  == 1 || mes  == 3 ||  mes  == 5 ||  mes  == 7 || 
        mes  == 8 || mes  == 10 || mes  == 12) && dia > 31) {
        throw invalid_argument("Argumento invalido!");
    }

    if((mes  == 4 ||  mes  == 6 ||  mes  == 9 || mes  == 11 || mes  == 10) && dia > 30) {
        throw invalid_argument("Argumento invalido!");
    }

    // Tratamento especial para fevereiro
    if(ano%4 == 0 && mes == 2 && dia > 29) {
        throw invalid_argument("Argumento invalido!");
    }

    if(ano%4 != 0 && mes == 2 && dia > 28) {
        throw invalid_argument("Argumento invalido!");
    }
}

void Data::setData(string data) {
    validaData(data);
    this->data = data;
}

void Emissor::validaEmissor(string emissor) {
    if(emissor.length() < 5 || emissor.length() > 30) {
        throw invalid_argument("Argumento invalido!");
    }

    if(emissor[0] >= 'a' && emissor[0] <= 'z') {
        throw invalid_argument("Argumento invalido!");
    }

    for(size_t i = 0; i < emissor.length(); i++) {
        // Restringe a entrada para letras, numeros, ponto, hifen e espaço
        if(emissor[i] < 'A' && emissor[i] > 'z' && emissor[i]<'0' && emissor[i] > '9' && 
           emissor[i] != '.' && emissor[i] != '-' && emissor[i] != ' ') {
               throw invalid_argument("Argumento invalido!");
        }
        // Apenas letras e numeros se sucedem
        if(i+1 != emissor.length() && (emissor[i] == '.' || emissor[i] == '-' || emissor[i] == ' ') && 
          (emissor[i+1] == '.' || emissor[i+1] == '-' || emissor[i+1] == ' ')) {
               throw invalid_argument("Argumento invalido!");  
        }
        // Garante a letra maisucula no inicio de um texto
        if(i+1 != emissor.length() && emissor[i] == ' ' && emissor[i+1] >= 'a' && emissor[i+1] <= 'z') {
            throw invalid_argument("Argumento invalido!");
        }
    }

}

void Emissor::setEmissor(string emissor) {
    validaEmissor(emissor);
    this->emissor = emissor;
}

void Endereco::validaEndereco(string endereco) {
    /*endereco composto por 5 a 20 caracteres onde cada caracter pode ser letra (A-Z ou a-z), dígito
    (0 – 9), ponto ou espaço. Apenas letras e dígitos podem estar em sequência. Em termo cujo
    primeiro caracter é letra, a mesma é maiúscula*/
    if(endereco.length() < 5 || endereco.length() > 20) {
        throw invalid_argument("Argumento invalido!");
    }

    for (size_t i = 0; i < endereco.length(); i++) {
        if(endereco[i] >= 'A' && endereco[i] <= 'z');
        else if(endereco[i] == '.') {
            if(endereco[i+1] == '.' && (i+1) != endereco.length()) {
                throw invalid_argument("Argumento invalido!");
            }
        }
        else if(endereco[i] == ' ') {
            if(endereco[i+1] == ' ' && (i+1) != endereco.length()) {
                throw invalid_argument("Argumento invalido!");
            }
            if((endereco[i+1] >= 'a' && endereco[i+1] <= 'z') && (i+1) != endereco.length()) {
                throw invalid_argument("Argumento invalido!");
            }
        }
        else if(endereco[i] >= '0' && endereco[i] <= '9');
    }

    
    
}

void Endereco::setEndereco(string endereco) {
    validaEndereco(endereco);
    this->endereco = endereco;
}

void Horario::validaHorario(string horario) {
/*Formato XY:ZW para representar horário entre 13:00 e 17:00 horas.*/
    int hora = stoi(horario.substr(0,2));
    int minuto = stoi(horario.substr(3,2));
    if(hora >= 13 && hora < 17 && minuto > 0 && minuto < 60);
    else if(hora == 17 && minuto == 0);
    else {
        throw invalid_argument("Argumento invalido!");
    }

}

void Horario::setHorario(string horario) {
    validaHorario(horario);
    this->horario = horario;
}

void Nome::validaNome(string nome) {
/*nome composto por 5 a 30 caracteres onde cada caracter pode ser letra (A-Z ou a-z) ou
espaço, há pelo menos 5 letras, não há espaços em sequência, primeira letra de cada termo é
letra maiúscula*/
    if(nome.length() < 5 || nome.length() > 30) {
        throw invalid_argument("Argumento invalido!");
    }
    if(nome[0] >= 'a' && nome[0] <= 'z') {
        throw invalid_argument("Argumento invalido!");
    }
    for (size_t i = 0; i < nome.length(); i++) {
        if(nome[i] == ' ') {
            if((nome[i+1] >= 'a' && nome[i+1] <= 'z') && (i+1) != nome.length()) {
                throw invalid_argument("Argumento invalido!");
            }
            else if(nome[i+1] == ' ' && (i+1) != nome.length()) {
                throw invalid_argument("Argumento invalido!");
            }
        }
    }
}

void Nome::setNome(string nome) {
    validaNome(nome);
    this->nome = nome;
}


void Numero::validaNumero(string numero) {
/*Formato XXXXXX-Y onde cada X é dígito (0 – 9) e Y é dígito verificador calculado por
meio de algorítmo apropriado.
Cálculo do dígito: Somam os dígitos das multiplicações e divide o resultado por 10. 
Caso o resto for diferente de 0, o DV será 10 menos o resto.*/  
    int dv_calculado = 0, soma = 0, num = 0, dv = 0;

    if(numero.length() != 8) {
        throw invalid_argument("Argumento invalido!");
    }
    
    if(!(numero[numero.length()-1] >= '0' && numero[numero.length()] <= '9')) {
        throw invalid_argument("Argumento invalido!");
    }
    if(!(numero[numero.length()-2] >= '-')) {
        throw invalid_argument("Argumento invalido!");
    }

    for(size_t i = 0; i < numero.length()-2; i++) {
        if(!(numero[i] >= '0' && numero[i] <= '9')) {
            throw invalid_argument("Argumento invalido!");
        }
    }

    num = stoi(numero.substr(0,7));
    dv = stoi(numero.substr(7,1));

    while (num > 0) {
        int aux = num % 10;
        num /= 10;
        soma += aux;
    }

    if(soma % 10 != 0) {
        dv_calculado = 10 - (soma % 10);
    }
    else {
        dv_calculado = 0;
    }

    if(dv_calculado != dv) {
        throw invalid_argument("Argumento invalido!");
    }

    
}

void Numero::setNumero(string numero) {
    validaNumero(numero);
    this->numero = numero;
}

void Prazo::validaPrazo(int prazo) {
    if(!(prazo == 6 || prazo == 12 || prazo == 18 || prazo == 24 || prazo == 30 ||
      prazo == 36 || prazo == 42 || prazo == 48 || prazo == 54 || prazo == 60 ||
      prazo == 66 || prazo == 72)) {
        throw invalid_argument("Argumento invalido!");
      }
}

void Prazo::setPrazo(int prazo) {
    validaPrazo(prazo);
    this->prazo = prazo;
}

void Senha::validaSenha(string senha) {
/*Formato XXXXXX onde cada X é dígito (0 – 9) e não há dígito repetido*/

    if(senha.length() != 6) {
        throw invalid_argument("Argumento invalido!");
    }

    for (size_t i = 0; i < senha.length(); i++) {
        if(!(senha[i] >= '0' && senha[i] <= '9')) {
            throw invalid_argument("Argumento invalido!");
        }

        for(size_t j = 0; j < senha.length(); j++) {
            if(i != j) {
                if(senha[i] == senha[j]){
                    throw invalid_argument("Argumento invalido!");
                }
            }
        }
    }

    
}

void Senha::setSenha(string senha) {
    validaSenha(senha);
    this->senha = senha;
}

void Taxa::validaTaxa(int taxa) {
    /*taxa na faixa de 0 a 200*/
    if(!(200 >= taxa && taxa >= 0)) {
        throw invalid_argument("Argumento invalido!");       
    }
}

void Taxa::setTaxa(int taxa) {
    validaTaxa(taxa);
    this->taxa = taxa;
}

void ValorAplicacao::validaValorAplicacao(double valorAplicacao) {
    /*Valor na faixa de 0 a 1.000.000,00*/
    if(!(1000000.0 >= valorAplicacao && valorAplicacao >= 0.0)) {
        throw invalid_argument("Argumento invalido!");        
    }
}

void ValorAplicacao::setValorAplicacao(double valorAplicacao) {
    validaValorAplicacao(valorAplicacao);
    this->valorAplicacao = valorAplicacao;
}

void ValorMinimo::validaValorMinimo(double valorMinimo) {
    /*Valor 1.000,00, 5.000,00, 10.000 ou 50.000,00 */
    if(!((valorMinimo == 1000.0) || (valorMinimo == 5000.0) || (valorMinimo == 10000.0) || (valorMinimo == 50000.0))) {
        throw invalid_argument("Argumento invalido!");        
    }
}

void ValorMinimo::setValorMinimo(double valorMinimo) {
    validaValorMinimo(valorMinimo);
    this->valorMinimo = valorMinimo;
}
