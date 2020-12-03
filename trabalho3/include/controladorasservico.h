#ifndef CONTROLADORASSERVICO_H_INCLUDED
#define CONTROLADORASSERVICO_H_INCLUDED

#include <conio.h>
#include "dominios.h"
#include "entidades.h"
#include "interfaces.h"
#include "containers.h"

#define CLR_SCR system("cls");

//--------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------
// Implementar as controladoras de servi�o.
//--------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------
// Classes controladoras da camada de servi�os.

//--------------------------------------------------------------------------------------------
// Classe controladora de servi�o autentica��o.

class CntrServicoAutenticacao:public IServicoAutenticacao{
    public:
        bool autenticar(Cpf, Senha);
};

//--------------------------------------------------------------------------------------------
// Classe controladora de servi�o pessoal.

class CntrServicoPessoal:public IServicoPessoal{
    public:
        bool cadastrarUsuario(Usuario);
        bool descadastrarUsuario(Cpf);
        bool pesquisarUsuario(Usuario*);
        bool atualizarUsuario(Usuario);
};

//--------------------------------------------------------------------------------------------
// Classe controladora de servi�o produtos financeiros.

class CntrServicoProdutosFinanceiros:public IServicoProdutosFinanceiros{
    public:
        bool cadastrarConta(Conta);
        bool consultarConta(Conta*);
        bool cadastrarProdutoInvestimento(Produto);
        bool pesquisarProduto(Produto*);
        bool descadastrarProdutoInvestimento(CodigoProduto);
        bool realizarAplicacao(Aplicacao);
        bool recuperarAplicacao(Aplicacao*);
};


#endif // CONTROLADORASSERVICO_H_INCLUDED
