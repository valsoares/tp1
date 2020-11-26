#ifndef STUBS_H_INCLUDED
#define STUBS_H_INCLUDED

#include <string>
#include "dominios.h"
#include "interfaces.h"

using namespace std;

//--------------------------------------------------------------------------------------------
// Classe stub do servi�o autentica��o.

class StubServicoAutenticacao:public IServicoAutenticacao {
    private:
        static const string INVALIDO;
    public:
        bool autenticar(Cpf, Senha);
};

//--------------------------------------------------------------------------------------------
// Classe stub do servi�o pessoal.

class StubServicoPessoal:public IServicoPessoal {
    private:
        static const string INVALIDO;
    public:
        bool cadastrarUsuario(Usuario);
};

//--------------------------------------------------------------------------------------------
// Classe stub do servi�o produtos financeiros.

class StubServicoProdutosFinanceiros:public IServicoProdutosFinanceiros {
    private:
        static const string INVALIDO;
    public:
        bool cadastrarConta(Conta);
        bool consultarConta(Conta*);
        bool cadastrarProdutoInvestimento(Produto);
        bool descadastrarProdutoInvestimento(CodigoProduto);
        bool realizarAplicacao(Aplicacao);
        bool recuperarAplicacao(Aplicacao*);                        // Adaptar assinatura.
};

#endif // STUBS_H_INCLUDED
