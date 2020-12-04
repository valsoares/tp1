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

    if(container->pesquisarUsuario(usuario)){
        CLR_SCR;                                                                                    // Limpa janela.
        cout << "Cpf cadastrado: " << usuario->getCpf().getCpf() << endl;
        cout << "Nome: " << usuario->getNome().getNome() << endl;
        cout << "Cep: " << usuario->getCep().getCep() << endl;
        cout << "Endereco: " << usuario->getEndereco().getEndereco() << endl;                                                   // Imprime nome do campo.
        getchar();
        return true;
    }

    cout << "Nenhum cpf encontrado, mas isso n deveria estar acontecendo! Pressione Enter para continuar." << endl;
    getchar();
    return false;
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

bool CntrServicoProdutosFinanceiros::consultarConta(Conta* conta, Cpf cpf){               //Mostra os dados da conta

    ContainerUsuario *container;

    container = ContainerUsuario::getInstancia();

    if(container->pesquisarConta(conta, cpf)){
        CLR_SCR;                                                                                    // Limpa janela.
        cout << "Codigo da Agencia: " << conta->getCodigoAgencia().getCodigoAgencia() << endl;
        cout << "Codigo do Banco: " << conta->getCodigoBanco().getCodigoBanco() << endl;                                       // Imprime nome do campo.
        cout << "Numero: " << conta->getNumero().getNumero() << endl;
        getchar();
        return true;
    }
    cout << "Nenhuma conta encontrada, mas isso n deveria estar acontecendo! Pressione Enter para continuar." << endl;
    getchar();
    return false;
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

    container->pesquisar(produto);

    cout << endl << "Esses foram os produtos encontrados! Pressione Enter para continuar." << endl;
    getchar();
    return true;
}

bool CntrServicoProdutosFinanceiros::descadastrarProdutoInvestimento(CodigoProduto codigo){
    ContainerProduto *container;

    container = ContainerProduto::getInstancia();

    return container->remover(codigo);
}

bool CntrServicoProdutosFinanceiros::realizarAplicacao(Aplicacao aplicacao){
    ContainerAplicacao *container;

    container = ContainerAplicacao::getInstancia();

    return container->incluir(aplicacao);;
}

bool CntrServicoProdutosFinanceiros::recuperarAplicacao(Aplicacao* aplicacao){

    ContainerAplicacao *container;

    container = ContainerAplicacao::getInstancia();

    if(container->pesquisar(aplicacao)){
        CLR_SCR;                                                                                    // Limpa janela.
        cout << "Codigo da Aplicacao: " << aplicacao->getCodigoAplicacao().getCodigoAplicacao() << endl;
        cout << "Valor: " << aplicacao->getValorAplicacao().getValorAplicacao() << endl;                                       // Imprime nome do campo.
        cout << "Data: " << aplicacao->getData().getData() << endl;
        getchar();
        return true;
    }
    cout << "Nenhuma aplicacao encontrada! Pressione Enter para continuar." << endl;
    getchar();
    return false;
}





