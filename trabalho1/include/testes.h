#ifndef TESTES_H_INCLUDED
#define TESTES_H_INCLUDED

#include <iostream>

#include "dominios.h"

using namespace std;

///
/// Padrão para teste de CEP.
///

class TCep {
    private:
        const static int VALOR_VALIDO;
        const static int VALOR_INVALIDO;

        Cep *cep;

        int estado;

        void inicializarCep();
        void destruirCep();
        void testeCepSucesso();
        void testeCepFalha();

    public:

        const static int SUCESSO = 0;
        const static int FALHA = -1;

///
/// Testa os casos de sucesso e falha do CEP e retorna o estado.
///
/// @return valor do estado.
///
        int rodarTeste();

};

///
/// Padrão para teste de classe.
///

class TClasse {
    private:
        const static string VALOR_VALIDO;
        const static string VALOR_INVALIDO;

        Classe *classe;

        int estado;

        void inicializarClasse();
        void destruirClasse();
        void testeClasseSucesso();
        void testeClasseFalha();

    public:

        const static int SUCESSO = 0;
        const static int FALHA = -1;

///
/// Testa os casos de sucesso e falha da classe e retorna o estado.
///
/// @return valor do estado.
///
        int rodarTeste();

};

///
/// Padrão para teste de código da agência.
///

class TCodigoAgencia {
    private:
        const static string VALOR_VALIDO;
        const static string VALOR_INVALIDO;

        CodigoAgencia *codigoAgencia;

        int estado;

        void inicializarCodigoAgencia();
        void destruirCodigoAgencia();
        void testeCodigoAgenciaSucesso();
        void testeCodigoAgenciaFalha();

    public:

        const static int SUCESSO = 0;
        const static int FALHA = -1;

///
/// Testa os casos de sucesso e falha do código da agência e retorna o estado.
///
/// @return valor do estado.
///
        int rodarTeste();

};

///
/// Padrão para teste de código da aplicação.
///

class TCodigoAplicacao {
    private:
        const static string VALOR_VALIDO;
        const static string VALOR_INVALIDO;

        CodigoAplicacao *codigoAplicacao;

        int estado;

        void inicializarCodigoAplicacao();
        void destruirCodigoAplicacao();
        void testeCodigoAplicacaoSucesso();
        void testeCodigoAplicacaoFalha();

    public:

        const static int SUCESSO = 0;
        const static int FALHA = -1;

///
/// Testa os casos de sucesso e falha do código da aplicação e retorna o estado.
///
/// @return valor do estado.
///
        int rodarTeste();

};

///
/// Padrão para teste de código do banco.
///

class TCodigoBanco {
    private:
        const static string VALOR_VALIDO;
        const static string VALOR_INVALIDO;

        CodigoBanco *codigoBanco;

        int estado;

        void inicializarCodigoBanco();
        void destruirCodigoBanco();
        void testeCodigoBancoSucesso();
        void testeCodigoBancoFalha();

    public:

        const static int SUCESSO = 0;
        const static int FALHA = -1;

///
/// Testa os casos de sucesso e falha do código do banco e retorna o estado.
///
/// @return valor do estado.
///
        int rodarTeste();

};

///
/// Padrão para teste de código do produto.
///

class TCodigoProduto {
    private:
        const static string VALOR_VALIDO;
        const static string VALOR_INVALIDO;

        CodigoProduto *codigoProduto;

        int estado;

        void inicializarCodigoProduto();
        void destruirCodigoProduto();
        void testeCodigoProdutoSucesso();
        void testeCodigoProdutoFalha();

    public:

        const static int SUCESSO = 0;
        const static int FALHA = -1;

///
/// Testa os casos de sucesso e falha do código do produto e retorna o estado.
///
/// @return valor do estado.
///
        int rodarTeste();

};

///
/// Padrão para teste de CPF.
///

class TCpf {
    private:
        const static string VALOR_VALIDO;
        const static string VALOR_INVALIDO;

        Cpf *cpf;

        int estado;

        void inicializarCpf();
        void destruirCpf();
        void testeCpfSucesso();
        void testeCpfFalha();

    public:

        const static int SUCESSO = 0;
        const static int FALHA = -1;

///
/// Testa os casos de sucesso e falha do CPF e retorna o estado.
///
/// @return valor do estado.
///
        int rodarTeste();

};

///
/// Padrão para teste de data.
///

class TData {
    private:
        const static string VALOR_VALIDO;
        const static string VALOR_INVALIDO;

        Data *data;

        int estado;

        void inicializarData();
        void destruirData();
        void testeDataSucesso();
        void testeDataFalha();

    public:

        const static int SUCESSO = 0;
        const static int FALHA = -1;

///
/// Testa os casos de sucesso e falha da data e retorna o estado.
///
/// @return valor do estado.
///
        int rodarTeste();

};

///
/// Padrão para teste de emissor.
///

class TEmissor {
    private:
        const static string VALOR_VALIDO;
        const static string VALOR_INVALIDO;

        Emissor *emissor;

        int estado;

        void inicializarEmissor();
        void destruirEmissor();
        void testeEmissorSucesso();
        void testeEmissorFalha();

    public:

        const static int SUCESSO = 0;
        const static int FALHA = -1;

///
/// Testa os casos de sucesso e falha do emissor e retorna o estado.
///
/// @return valor do estado.
///
        int rodarTeste();

};

///
/// Padrão para teste de endereço.
///

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
///
/// Testa os casos de sucesso e falha do endereço e retorna o estado.
///
/// @return valor do estado.
///
        int rodarTeste();

};

///
/// Padrão para teste de horário.
///

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
///
/// Testa os casos de sucesso e falha do horário e retorna o estado.
///
/// @return valor do estado.
///
        int rodarTeste();

};

///
/// Padrão para teste de nome.
///

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
///
/// Testa os casos de sucesso e falha do nome e retorna o estado.
///
/// @return valor do estado.
///
        int rodarTeste();

};

///
/// Padrão para teste de número.
///

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
///
/// Testa os casos de sucesso e falha do número e retorna o estado.
///
/// @return valor do estado.
///
        int rodarTeste();

};

///
/// Padrão para teste de prazo.
///

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
///
/// Testa os casos de sucesso e falha do prazo e retorna o estado.
///
/// @return valor do estado.
///
        int rodarTeste();

};

///
/// Padrão para teste de senha.
///

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
///
/// Testa os casos de sucesso e falha da senha e retorna o estado.
///
/// @return valor do estado.
///
        int rodarTeste();

};

///
/// Padrão para teste de taxa.
///

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
///
/// Testa os casos de sucesso e falha da taxa e retorna o estado.
///
/// @return valor do estado.
///
        int rodarTeste();

};

///
/// Padrão para teste de valor da aplicação.
///

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
///
/// Testa os casos de sucesso e falha do valor da aplicação e retorna o estado.
///
/// @return valor do estado.
///
        int rodarTeste();

};

///
/// Padrão para teste de valor mínimo.
///

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
///
/// Testa os casos de sucesso e falha do valor mínimo e retorna o estado.
///
/// @return valor do estado.
///
        int rodarTeste();

};

#endif