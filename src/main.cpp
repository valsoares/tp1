#include <iostream>
#include <string>

#include "dominios.h"
#include "testes.h"

using namespace std;

int main() {
    TEndereco teste;
    switch(teste.rodarTeste()) {
        case TEndereco::SUCESSO : 
            cout << "SUCESSO";
            break;
        case TEndereco::FALHA : 
            cout << "FALHA";
            break;
    }

    return 0;
}