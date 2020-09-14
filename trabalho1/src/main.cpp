#include <iostream>
#include <string>

#include "dominios.h"
#include "testes.h"

using namespace std;

int main() {
    TCpf teste;
    switch(teste.rodarTeste()) {
        case TCpf::SUCESSO :
            cout << "SUCESSO";
            break;
        case TCpf::FALHA :
            cout << "FALHA";
            break;
    }

    return 0;
}
