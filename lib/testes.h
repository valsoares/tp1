#ifndef TESTES_H_INCLUDED
#define TESTES_H_INCLUDED

#include <iostream>

#include "dominios.h"

using namespace std;

class TEndereco {
    private:
        const static string VALOR_VALIDO = "Rua 23. Casa 18.";
        const static string VALOR_INVALIDO = "Rua 23  Casa 18.";

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

#endif