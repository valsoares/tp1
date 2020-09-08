#include <iostream>
#include <string>

#include "dominios.h"

using namespace std;

bool Endereco::validaTexto(string texto) {
    /*Texto composto por 5 a 20 caracteres onde cada caracter pode ser letra (A-Z ou a-z), dígito
    (0 – 9), ponto ou espaço. Apenas letras e dígitos podem estar em sequência. Em termo cujo
    primeiro caracter é letra, a mesma é maiúscula*/
    if(texto.length() >= 5 && texto.length() <= 20) {
        return true;
    }
    else {
        return false;
    }
}

void Endereco::setTexto(string texto) {

}

void Horario::validaValor(int valor) {

}

void Horario::setValor(int valor) {

}

void Nome::validaTexto(string texto) {

}

void Nome::setTexto(string texto) {

}

void Numero::validaValor(int valor) {

}

void Numero::setValor(int valor) {

}

void Prazo::validaValor(int valor) {

}

void Prazo::setValor(int valor) {

}

void Senha::validaValor(int valor) {

}

void Senha::setValor(int valor) {

}

void Taxa::validaValor(int valor) {

}

void Taxa::setValor(int valor) {

}

void ValorAplicacao::validaValor(int valor) {

}

void ValorAplicacao::setValor(int valor) {

}

void ValorMinimo::validaValor(int valor) {

}

void ValorMinimo::setValor(int valor) {

}
