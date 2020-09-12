#include <iostream>
#include <string>

#include "dominios.h"

using namespace std;

bool Endereco::validaEndereco(string endereco) {
    /*endereco composto por 5 a 20 caracteres onde cada caracter pode ser letra (A-Z ou a-z), d�gito
    (0 � 9), ponto ou espa�o. Apenas letras e d�gitos podem estar em sequ�ncia. Em termo cujo
    primeiro caracter � letra, a mesma � mai�scula*/
    if(endereco.length() < 5 && endereco.length() > 20) {
        return false;
    }

    for (size_t i = 0; i < endereco.length(); i++) {
        if(endereco[i] > 'A' && endereco[i] < 'z');
        else if(endereco[i] == '.') {
            if(endereco[i+1] == '.') {
                return false;
            }
        }
        else if(endereco[i] == ' ') {
            if(endereco[i+1] == ' ') {
                return false;
            }
            if(endereco[i+1] >= 'a' || endereco[i+1] <= 'z') {
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

bool Numero::validaNumero(int numero) {
/*Formato XXXXXX-Y onde cada X � d�gito (0 � 9) e Y � d�gito verificador calculado por
meio de algor�tmo apropriado.*/
    int vetor_numero[6] = {};
    int tam = sizeof(vetor_numero)/sizeof(int);
    int k = 0;

    while (numero > 0) {
        int aux = numero % 10;
        numero /= 10;
        vetor_numero[k] = aux;
        k++;
    }

    for (int i = 0; i < tam; i++) {
        if(vetor_numero[i] >= 0 && vetor_numero[i] <= 9);
        else {
            return false;
        }
    }
}

void Numero::setNumero(int numero) {
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

bool Senha::validaSenha(int senha) {
/*Formato XXXXXX onde cada X � d�gito (0 � 9) e n�o h� d�gito repetido*/

    int vetor_senha[6] = {};
    int tam = sizeof(vetor_senha)/sizeof(int);
    int k = 0;

    while (senha > 0) {
        int aux = senha % 10;
        senha /= 10;
        vetor_senha[k] = aux;
        k++;
    }

    for (int i = 0; i < tam; i++) {
        if(vetor_senha[i] >= 0 && vetor_senha[i] <= 9);
        else {
            return false;
        }

        for(int j = 0; j < tam; j++) {
            if(vetor_senha[i] == vetor_senha[j]){
                return false;
            }
        }

    }
}

void Senha::setSenha(int senha) {
    if(validaSenha(senha)) {
        this->senha = senha;
    }
    else {
        cout << "Entre uma senha v�lida" << endl;
    }
}

bool Taxa::validaTaxa(int taxa) {
    /*taxa na faixa de 0 a 200*/
    if(200 > taxa && taxa > 0) {
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
    if(1000000.0 > valorAplicacao && valorAplicacao > 0.0) {
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
