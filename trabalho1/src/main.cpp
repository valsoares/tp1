#include <iostream>
#include <string>

#include "dominios.h"
#include "testes.h"

using namespace std;

int main() {
    // TCpf teste;
    // switch(teste.rodarTeste()) {
    //     case TCpf::SUCESSO :
    //         cout << "SUCESSO";
    //         break;
    //     case TCpf::FALHA :
    //         cout << "FALHA";
    //         break;
    // }
    Cpf teste;
    teste.setCpf("020.397.051-98");
    cout << teste.getCpf() << endl;


    return 0;
}
