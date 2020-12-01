#include "builders.h"

CntrApresentacaoControle* BuilderSistema::construir(){

    // Instancia controladoras da camada de apresentação.

    cntrApresentacaoControle = new CntrApresentacaoControle();
    cntrApresentacaoAutenticacao = new CntrApresentacaoAutenticacao();
    cntrApresentacaoPessoal = new CntrApresentacaoPessoal();
    cntrApresentacaoProdutosFinanceiros = new CntrApresentacaoProdutosFinanceiros();

    // Instancia controladoras da camada de serviço.

    cntrServicoPessoal = new CntrServicoPessoal();

    // --------------------------------------------------------------------------------------------
    // Substituir instancia de stub de CntrServicoAutenticacao por instância da controladora.
    // --------------------------------------------------------------------------------------------

    cntrServicoAutenticacao = new CntrServicoAutenticacao();

    // ---------------------------------------------------------------------------------------------
    // Substituir instancia de stub de CntrServicoProdutosFinanceiros por instância da controladora.
    // ---------------------------------------------------------------------------------------------

    cntrServicoProdutosFinanceiros = new CntrServicoProdutosFinanceiros();

    // Interliga as controladoras.

    cntrApresentacaoControle->setCntrApresentacaoAutenticacao(cntrApresentacaoAutenticacao);
    cntrApresentacaoControle->setCntrApresentacaoPessoal(cntrApresentacaoPessoal);
    cntrApresentacaoControle->setCntrApresentacaoProdutosFinanceiros(cntrApresentacaoProdutosFinanceiros);
    cntrApresentacaoAutenticacao->setCntrServicoAutenticacao(cntrServicoAutenticacao);
    cntrApresentacaoPessoal->setCntrServicoPessoal(cntrServicoPessoal);
    cntrApresentacaoPessoal->setCntrServicoProdutosFinanceiros(cntrServicoProdutosFinanceiros);
    cntrApresentacaoProdutosFinanceiros->setCntrServicoProdutosFinanceiros(cntrServicoProdutosFinanceiros);

    // Retorna referência para instância de CntrApresentacaoControle.

    return cntrApresentacaoControle;
}

BuilderSistema::~BuilderSistema(){
        delete cntrApresentacaoControle;
        delete cntrApresentacaoAutenticacao;
        delete cntrApresentacaoPessoal;
        delete cntrApresentacaoProdutosFinanceiros;
        delete cntrServicoAutenticacao;
        delete cntrServicoPessoal;
        delete cntrServicoProdutosFinanceiros;
}
