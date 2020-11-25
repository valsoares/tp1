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

    TUConta teste3;
    switch(teste3.run()){
        case TUConta::SUCESSO:
            cout << "SUCESSO TESTE " << contador++ << endl;
            break;
        case TUConta::FALHA:
            cout << "FALHA TESTE " << contador++ << endl;
            break;
    }

    TUUsuario teste4;
    switch(teste4.run()){
        case TUUsuario::SUCESSO:
            cout << "SUCESSO TESTE " << contador++ << endl;
            break;
        case TUUsuario::FALHA:
            cout << "FALHA TESTE " << contador++ << endl;
            break;
    }

}
