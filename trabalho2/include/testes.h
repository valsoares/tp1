#ifndef TESTES_H_INCLUDED
#define TESTES_H_INCLUDED

#include <iostream>
#include <string>

#include "entidades.h"
#include "dominios.h"

class TUAplicacao {

private:

    // Defini��es de constantes para evitar n�meros m�gicos.

    const string VALOR_VALIDO_CODIGO = "33256";
    static const int VALOR_VALIDO_VALOR = 100;
    const string VALOR_VALIDO_DATA = "01/12/2021";

    // Refer�ncia para o objeto a ser testado.

    Aplicacao *aplicacao;

    // Estado do teste.

    int estado;

    // Declara��es de m�todos.

    void setUp();
    void tearDown();
    void testarCenarioSucessoCodigo();
    void testarCenarioSucessoValor();
    void testarCenarioSucessoData();

public:

    // Defini��es de constantes para reportar resultado do teste.

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run();
};

class TUProduto {

private:

    // Defini��es de constantes para evitar n�meros m�gicos.

    const string VALOR_VALIDO_CODIGO = "105";
    const string VALOR_VALIDO_CLASSE = "CDB";
    const string VALOR_VALIDO_EMISSOR = "Mateus35.7-0 Bitt";
    static const int VALOR_VALIDO_PRAZO = 12;
    const string VALOR_VALIDO_VENCIMENTO = "29/02/2024";
    static const int VALOR_VALIDO_TAXA = 2;
    const string VALOR_VALIDO_HORARIO = "14:45";
    static const int VALOR_VALIDO_VALOR = 5000;

    // Refer�ncia para o objeto a ser testado.

    Produto *produto;

    // Estado do teste.

    int estado;

    // Declara��es de m�todos.

    void setUp();
    void tearDown();
    void testarCenarioSucessoCodigo();
    void testarCenarioSucessoClasse();
    void testarCenarioSucessoEmissor();
    void testarCenarioSucessoPrazo();
    void testarCenarioSucessoVencimento();
    void testarCenarioSucessoTaxa();
    void testarCenarioSucessoHorario();
    void testarCenarioSucessoValor();

public:

    // Defini��es de constantes para reportar resultado do teste.

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run();
};

class TUConta {
private:
    // Defini��es de constantes para evitar n�meros m�gicos.
    const string VALOR_VALIDO_CODIGO_BANCO = "001";
    const string VALOR_VALIDO_CODIGO_AGENCIA = "0356";
    const string VALOR_VALIDO_NUMERO = "123456-9";

    // Refer�ncia para o objeto a ser testado.

    Conta *conta;

    // Estado do teste.

    int estado;

    // Declara��es de m�todos.

    void setUp();
    void tearDown();
    void testarCenarioSucessoCodigoBanco();
    void testarCenarioSucessoCodigoAgencia();
    void testarCenarioSucessoNumero();

public:

    // Defini��es de constantes para reportar resultado do teste.

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run();
};

class TUUsuario {
private:
    // Defini��es de constantes para evitar n�meros m�gicos.
    const string VALOR_VALIDO_NOME = "Valesca Gomes Soares";
    const string VALOR_VALIDO_ENDERECO = "Rua 23. Casa 18.";
    static const int VALOR_VALIDO_CEP = 70510310;
    const string VALOR_VALIDO_CPF = "020.397.051-98";
    const string VALOR_VALIDO_SENHA = "123456";

    // Refer�ncia para o objeto a ser testado.

    Usuario *usuario;

    // Estado do teste.

    int estado;

    // Declara��es de m�todos.

    void setUp();
    void tearDown();
    void testarCenarioSucessoNome();
    void testarCenarioSucessoEndereco();
    void testarCenarioSucessoCep();
    void testarCenarioSucessoCpf();
    void testarCenarioSucessoSenha();

public:

    // Defini��es de constantes para reportar resultado do teste.

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run();
};

#endif
