#ifndef CONTROLADORASSERVICO_H_INCLUDED
#define CONTROLADORASSERVICO_H_INCLUDED

#include "dominios.h"
#include "entidades.h"
#include "interfaces.h"
#include "containers.h"

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
};

//--------------------------------------------------------------------------------------------
// Classe controladora de servi�o produtos financeiros.

class CntrServicoProdutosFinanceiros:public IServicoProdutosFinanceiros{
};


#endif // CONTROLADORASSERVICO_H_INCLUDED
