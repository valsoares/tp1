#include "controladorasservico.h"
#include "containers.h"

//--------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------
// Implementar m�todos das controladoras de servi�o.
//--------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------
// Implementa��es dos m�todos das classes controladoras da camada de servi�o.


//--------------------------------------------------------------------------------------------
// Implementa��es dos m�todos da classe controladora servi�o autentica��o.

bool CntrServicoAutenticacao::autenticar(Cpf cpf, Senha senha){

    ContainerUsuario *container;

    container = ContainerUsuario::getInstancia();

    return container->autenticar(cpf, senha);
}


//--------------------------------------------------------------------------------------------
// Implementa��es dos m�todos da classe controladora servi�o pessoal.

bool CntrServicoPessoal::cadastrarUsuario(Usuario usuario){

    // Instancia container de usu�rios.

    ContainerUsuario *container;

    container = ContainerUsuario::getInstancia();

    // Solicita cadastramento de usu�rio e retornar resultado da solicita��o de servi�o.

    return container->incluir(usuario);
}

bool CntrServicoPessoal::descadastrarUsuario(Cpf cpf){

    ContainerUsuario *container;

    container = ContainerUsuario::getInstancia();

    return container->remover(cpf);
}

bool CntrServicoPessoal::pesquisarUsuario(Usuario* usuario){
    ContainerUsuario *container;

    container = ContainerUsuario::getInstancia();

    return container->pesquisar(usuario);
}

bool CntrServicoPessoal::atualizarUsuario(Usuario usuario){

    ContainerUsuario *container;

    container = ContainerUsuario::getInstancia();

    return container->atualizar(usuario);
}


//--------------------------------------------------------------------------------------------
// Implementa��es dos m�todos da classe controladora servi�o produtos financeiros.
bool CntrServicoProdutosFinanceiros::cadastrarConta(Conta conta){

    ContainerConta *container;

    container = ContainerConta::getInstancia();

    // Solicita cadastramento de usu�rio e retornar resultado da solicita��o de servi�o.

    return container->incluir(conta);
};

bool CntrServicoProdutosFinanceiros::consultarConta(Conta* conta){
    
    ContainerConta *container;

    container = ContainerConta::getInstancia();
    
    return container->pesquisar(conta);
}

bool CntrServicoProdutosFinanceiros::cadastrarProdutoInvestimento(Produto produto){
    // Instancia container de usu�rios.

    ContainerProduto *container;

    container = ContainerProduto::getInstancia();

    // Solicita cadastramento de usu�rio e retornar resultado da solicita��o de servi�o.

    return container->incluir(produto);

}

bool CntrServicoProdutosFinanceiros::pesquisarProduto(Produto* produto){
    // Instancia container de usu�rios.

    ContainerProduto *container;

    container = ContainerProduto::getInstancia();

    // Solicita cadastramento de usu�rio e retornar resultado da solicita��o de servi�o.

    return container->pesquisar(produto);

}

bool CntrServicoProdutosFinanceiros::descadastrarProdutoInvestimento(CodigoProduto codigo){
    ContainerProduto *container;

    container = ContainerProduto::getInstancia();

    return container->remover(codigo);
}

bool CntrServicoProdutosFinanceiros::realizarAplicacao(Aplicacao aplicacao){
    ContainerAplicacao *container;

    container = ContainerAplicacao::getInstancia();

    return container->incluir(aplicacao);
}

bool CntrServicoProdutosFinanceiros::recuperarAplicacao(Aplicacao* aplicacao){
    
    ContainerAplicacao *container;

    container = ContainerAplicacao::getInstancia();
    
    return container->pesquisar(aplicacao);
}





