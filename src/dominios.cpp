#include <iostream>
#include <string>

#include "dominios.h"

using namespace std;

bool Endereco::validaTexto(string texto) {
    /*Texto composto por 5 a 20 caracteres onde cada caracter pode ser letra (A-Z ou a-z), dígito
    (0 – 9), ponto ou espaço. Apenas letras e dígitos podem estar em sequência. Em termo cujo
    primeiro caracter é letra, a mesma é maiúscula*/
    if(texto.length() < 5 && texto.length() > 20) {
        return false;
    }

    for (int i = 0; i < texto.length(); i++) {
        if(texto[i] > 'A' && texto[i] < 'z');
        else if(texto[i] == '.') {
            if(texto[i+1] == '.') {
                return false;
            }
        }
        else if(texto[i] == ' ') {
            if(texto[i+1] == ' ') {
                return false;
            }
            if(texto[i+1] >= 'a' || texto[i+1] <= 'z') {
                return false;
            }
        }
        else if(texto[i] >= 0 && texto[i] <= 9);
    }

    return true;
    
}

void Endereco::setTexto(string texto) {
    if(validaTexto) {
        this->texto = texto;
    }
    else {
        cout << "Entre um endereço válido" << endl;
    }
}

bool Horario::validaValor(string valor) {
/*Formato XY:ZW para representar horário entre 13:00 e 17:00 horas.*/
    int hora = stoi(valor.substr(0,2));
    int minuto = stoi(valor.substr(3,5));
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

void Horario::setValor(string valor) {
    if(validaValor) {
        this->valor = valor;
    }
    else {
        cout << "Entre um horário válido" << endl;
    }
}

bool Nome::validaTexto(string texto) {
/*Texto composto por 5 a 30 caracteres onde cada caracter pode ser letra (A-Z ou a-z) ou
espaço, há pelo menos 5 letras, não há espaços em sequência, primeira letra de cada termo é
letra maiúscula*/
    if(texto.length() < 5 || texto.length() > 30) {
        return false;
    }
    for (int i = 0; i < texto.length(); i++) {
        if(texto[i] == ' ') {
            if(texto[i+1] >= 'a' || texto[i+1] <= 'z') {
                return false;
            }
            else if(texto[i+1] == ' ') {
                return false;
            }
        }
    }

    return  true;

}

void Nome::setTexto(string texto) {
    if(validaTexto) {
        this->texto = texto;
    }
    else {
        cout << "Entre um nome válido" << endl;
    }
}

void Numero::validaValor(int valor) {
/*Formato XXXXXX-Y onde cada X é dígito (0 – 9) e Y é dígito verificador calculado por
meio de algorítmo apropriado.*/
}

void Numero::setValor(int valor) {

}

bool Prazo::validaValor(int valor) {
    if(valor == 6 || valor == 12 || valor == 18 || valor == 24 || valor == 30 ||
      valor == 36 || valor == 42 || valor == 48 || valor == 54 || valor == 60 ||
      valor == 66 || valor == 72) {
          return true;
    }
    else {
        return false;
    }
}

void Prazo::setValor(int valor) {
    if(validaValor) {
        this->valor = valor;
    }
    else {
        cout << "Entre um prazo válido" << endl;
    }
}

void Senha::validaValor(int valor) {
    /*Formato XXXXXX onde cada X é dígito (0 – 9) e não há dígito repetido*/
    for (int i = 0; i < valor.length(); i++) {
        if(valor[i] == ' ') {
            if(valor[i+1] >= 'a' || valor[i+1] <= 'z') {
                return false;
            }
            else if(valor[i+1] == ' ') {
                return false;
            }
        }
    }
}

void Senha::setValor(int valor) {

}

bool Taxa::validaValor(int valor) {
    /*Valor na faixa de 0 a 200*/
    if(200 > valor && valor > 0) {
        return true;
    }
    else {
        return false;
    }
}

void Taxa::setValor(int valor) {
    if(validaValor) {
        this->valor = valor;
    }
    else {
        cout << "Entre um valor válido" << endl;
    }
}

bool ValorAplicacao::validaValor(double valor) {
    /*Valor na faixa de 0 a 1.000.000,00*/
    if(1000000.0 > valor && valor > 0.0) {
        return true;
    }
    else {
        return false;
    }
}

void ValorAplicacao::setValor(double valor) {
    if(validaValor) {
        this->valor = valor;
    }
    else {
        cout << "Entre um valor válido" << endl;
    }
}

bool ValorMinimo::validaValor(double valor) {
    /*Valor 1.000,00, 5.000,00, 10.000 ou 50.000,00 */
    if((valor == 1000.0) || (valor == 5000.0) || (valor == 10000.0) || (valor == 50000.0)) {
        return true;
    }
    else {
        return false;
    }
}

void ValorMinimo::setValor(int valor) {
    if(validaValor) {
        this->valor = valor;
    }
    else {
        cout << "Entre um valor válido" << endl;
    }
}
