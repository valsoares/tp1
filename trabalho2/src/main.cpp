#include <iostream>

#include "testes.h"
#include "entidades.h"
#include "dominios.h"

int main(){

    int contador = 1;    

    TUAplicacao teste1;
    switch(teste1.run()){
        case TUAplicacao::SUCESSO:
            cout << "SUCESSO TESTE " << contador++ << endl;
            break;
        case TUAplicacao::FALHA:
            cout << "FALHA TESTE " << contador++ << endl;
            break;
    }

    TUProduto teste2;
    switch(teste2.run()){
        case TUProduto::SUCESSO:
            cout << "SUCESSO TESTE " << contador++ << endl;
            break;
        case TUProduto::FALHA:
            cout << "FALHA TESTE " << contador++ << endl;
            break;
    }

}