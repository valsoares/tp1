#ifndef TESTES_H
#define TESTES_H


#include <iostream>

#include "dominios.h"

using namespace std;

class TEndereco {
    private:
        const static string VALOR_VALIDO;
        const static string VALOR_INVALIDO;

        Endereco *endereco;

        int estado;

        void inicializarEndereco();
        void destruirEndereco();
        void testeEnderecoSucesso();
        void testeEnderecoFalha();

    public:

        const static int SUCESSO =  0;
        const static int FALHA = -1;

        int rodarTeste();

};

#endif // TESTES_H
