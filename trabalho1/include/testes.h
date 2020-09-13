#ifndef TESTES_H_INCLUDED
#define TESTES_H_INCLUDED

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

        const static int SUCESSO = 0;
        const static int FALHA = -1;

        int rodarTeste();

};

class THorario {
    private:
        const static string VALOR_VALIDO;
        const static string VALOR_INVALIDO;

        Horario *horario;

        int estado;

        void inicializarHorario();
        void destruirHorario();
        void testeHorarioSucesso();
        void testeHorarioFalha();

    public:

        const static int SUCESSO = 0;
        const static int FALHA = -1;

        int rodarTeste();

};

class TNome {
    private:
        const static string VALOR_VALIDO;
        const static string VALOR_INVALIDO;

        Nome *nome;

        int estado;

        void inicializarNome();
        void destruirNome();
        void testeNomeSucesso();
        void testeNomeFalha();

    public:

        const static int SUCESSO = 0;
        const static int FALHA = -1;

        int rodarTeste();

};

class TNumero {
    private:
        const static string VALOR_VALIDO;
        const static string VALOR_INVALIDO;

        Numero *numero;

        int estado;

        void inicializarNumero();
        void destruirNumero();
        void testeNumeroSucesso();
        void testeNumeroFalha();

    public:

        const static int SUCESSO = 0;
        const static int FALHA = -1;

        int rodarTeste();

};

class TPrazo {
    private:
        const static int VALOR_VALIDO;
        const static int VALOR_INVALIDO;

        Prazo *prazo;

        int estado;

        void inicializarPrazo();
        void destruirPrazo();
        void testePrazoSucesso();
        void testePrazoFalha();

    public:

        const static int SUCESSO = 0;
        const static int FALHA = -1;

        int rodarTeste();

};

class TSenha {
    private:
        const static string VALOR_VALIDO;
        const static string VALOR_INVALIDO;

        Senha *senha;

        int estado;

        void inicializarSenha();
        void destruirSenha();
        void testeSenhaSucesso();
        void testeSenhaFalha();

    public:

        const static int SUCESSO = 0;
        const static int FALHA = -1;

        int rodarTeste();

};

class TTaxa {
    private:
        const static int VALOR_VALIDO;
        const static int VALOR_INVALIDO;

        Taxa *taxa;

        int estado;

        void inicializarTaxa();
        void destruirTaxa();
        void testeTaxaSucesso();
        void testeTaxaFalha();

    public:

        const static int SUCESSO = 0;
        const static int FALHA = -1;

        int rodarTeste();

};

class TValorAplicacao {
    private:
        const static double VALOR_VALIDO;
        const static double VALOR_INVALIDO;

        ValorAplicacao *valorAplicacao;

        int estado;

        void inicializarValorAplicacao();
        void destruirValorAplicacao();
        void testeValorAplicacaoSucesso();
        void testeValorAplicacaoFalha();

    public:

        const static int SUCESSO = 0;
        const static int FALHA = -1;

        int rodarTeste();

};

class TValorMinimo {
    private:
        const static double VALOR_VALIDO;
        const static double VALOR_INVALIDO;

        ValorMinimo *valorMinimo;

        int estado;

        void inicializarValorMinimo();
        void destruirValorMinimo();
        void testeValorMinimoSucesso();
        void testeValorMinimoFalha();

    public:

        const static int SUCESSO = 0;
        const static int FALHA = -1;

        int rodarTeste();

};

#endif
