#include <iostream>
#include <string>

#include "dominios.h"
#include "testes.h"

using namespace std;

int main() {
    TValorMinimo teste;
    switch(teste.rodarTeste()) {
        case TValorMinimo::SUCESSO :
            cout << "SUCESSO";
            break;
        case TValorMinimo::FALHA :
            cout << "FALHA";
            break;
    }

    return 0;
}
