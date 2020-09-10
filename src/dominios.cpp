#include <iostream>
#include <string>

#include "dominios.h"

using namespace std;

bool Endereco::validaEndereco(string endereco) {
    /*endereco composto por 5 a 20 caracteres onde cada caracter pode ser letra (A-Z ou a-z), dígito
    (0 – 9), ponto ou espaço. Apenas letras e dígitos podem estar em sequência. Em termo cujo
    primeiro caracter é letra, a mesma é maiúscula*/
    if(endereco.length() < 5 && endereco.length() > 20) {
        return false;
    }

    for (int i = 0; i < endereco.length(); i++) {
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
    if(validaEndereco) {
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
    if(validaHorario) {
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
    for (int i = 0; i < nome.length(); i++) {
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
    if(validaNome) {
        this->nome = nome;
    }
    else {
        cout << "Entre um nome válido" << endl;
    }
}

void Numero::validaNumero(int numero) {
/*Formato XXXXXX-Y onde cada X é dígito (0 – 9) e Y é dígito verificador calculado por
meio de algorítmo apropriado.*/
}

void Numero::setNumero(int valor) {

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
    if(validaPrazo) {
        this->prazo = prazo;
    }
    else {
        cout << "Entre um prazo válido" << endl;
    }
}

void Senha::validaSenha(int senha) {
    /*Formato XXXXXX onde cada X é dígito (0 – 9) e não há dígito repetido*/

    /*for (int i = 0; i < senha.length(); i++) {
        if(senha[i] == ' ') {
            if(senha[i+1] >= 'a' || senha[i+1] <= 'z') {
                return false;
            }
            else if(senha[i+1] == ' ') {
                return false;
            }
        }
    }*/
}

void Senha::setSenha(int senha) {

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
    if(validaTaxa) {
        this->taxa = taxa;
    }
    else {
        cout << "Entre uma taxa válida" << endl;
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
    if(validaValorAplicacao) {
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

void ValorMinimo::setValorMinimo(int valor) {
    if(validaValorMinimo) {
        this->valorMinimo = valorMinimo;
    }
    else {
        cout << "Entre um valor mínimo válido" << endl;
    }
}
