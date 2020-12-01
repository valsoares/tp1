#include "controladorasapresentacao.h"
#include "containers.h"

//--------------------------------------------------------------------------------------------
// Implementa��es dos m�todos das classes controladoras da camada de apresenta��o.


//--------------------------------------------------------------------------------------------
// Implementa��es dos m�todos da classe controladora apresenta��o controle.

void CntrApresentacaoControle::executar(){
    int campo;                                                                                  // Campo de entrada.

    bool apresentar = true;                                                                     // Controle de la�o.

    while(apresentar){

        // Apresenta tela inicial.

        CLR_SCR;                                                                                // Limpa janela.

        cout << "Selecione um dos servicos : " << endl;                                                                 // Imprime nome do campo.
        cout << "1 - Acessar sistema." << endl;                                                                 // Imprime nome do campo.
        cout << "2 - Cadastrar usuario." << endl;                                                                 // Imprime nome do campo.
        cout << "3 - Acessar dados sobre produtos financeiros." << endl;                                                                 // Imprime nome do campo.
        cout << "4 - Encerrar execucao do sistema." << endl;                                                                 // Imprime nome do campo.

        campo = getch() - 48;                                                                   // Leitura do campo de entrada e convers�o de ASCII.

        switch(campo){
            case 1: if(cntrApresentacaoAutenticacao->autenticar(&cpf)){                         // Solicita autentica��o.
                        bool apresentar = true;                                                 // Controle de la�o.
                        while(apresentar){

                            // Apresenta tela de sele��o de servi�o.

                            CLR_SCR;                                                            // Limpa janela.

                            cout << "Selecione um dos servicos : " << endl;                                             // Imprime nome do campo.
                            cout << "1 - Selecionar servicos de pessoal." << endl;                                             // Imprime nome do campo.
                            cout << "2 - Selecionar servicos relacionados a produtos financeiros." << endl;                                             // Imprime nome do campo.
                            cout << "3 - Encerrar sessao." << endl;                                             // Imprime nome do campo.

                            campo = getch() - 48;                                               // Leitura do campo de entrada e convers�o de ASCII.

                            switch(campo){
                                case 1: cntrApresentacaoPessoal->executar(cpf);                 // Solicita servi�o de pessoal.
                                        break;
                                case 2: cntrApresentacaoProdutosFinanceiros->executar(cpf);     // Solicita servi�o de produto financeiro.
                                        break;
                                case 3: apresentar = false;
                                        break;
                            }
                        }
                    }
                    else {
                        CLR_SCR;                                                                // Limpa janela.
                        cout << "Falha na autenticacao. Digite algo para continuar." << endl;                                                // Imprime mensagem.
                        getch();                                                                // Leitura de caracter digitado.
                    }
                    break;
            case 2: cntrApresentacaoPessoal->cadastrar();
                    break;
            case 3: cntrApresentacaoProdutosFinanceiros->executar();
                    break;
            case 4: apresentar = false;
                    break;
        }
    }
    return;
}

//--------------------------------------------------------------------------------------------
// Implementa��es dos m�todos da classe controladora apresenta��o autentica��o.

bool CntrApresentacaoAutenticacao::autenticar(Cpf *cpf){

    // Campos de entrada.

    string campo1;
    string campo2;

    Senha senha;                                                                                // Instancia a classe Senha.

    while(true){

        // Apresenta tela de autentica��o.

        CLR_SCR;                                                                                // Limpa janela.

        cout << "Digite o CPF  : ";                                                                  // Imprime nome do campo.
        cin >> campo1;                                                                          // L� valor do campo.
        cout << "Digite a senha: ";                                                                  // Imprime nome do campo.
        cin >> campo2;                                                                          // L� valor do campo.

        try{
            cpf->setCpf(campo1);                                                      // Atribui valor ao CPF.
            senha.setSenha(campo2);                                                     // Atribui Valor � senha.
            break;                                                                              // Abandona la�o em caso de formatos corretos.
        }
        catch(invalid_argument &exp){                                                           // Captura exce��o devido a formato incorreto.
            CLR_SCR;                                                                            // Limpa janela.
            cout << "Dado em formato incorreto. Pressione Enter para continuar." << endl;       // Informa formato incorreto.
            getch();                                                                            // L� caracter digitado.
        }
    }
    return (cntr->autenticar(*cpf, senha));                                                     // Solicita servi�o de autentica��o.
}

//--------------------------------------------------------------------------------------------
// Implementa��es dos m�todos da classe controladora apresenta��o pessoal.

void CntrApresentacaoPessoal::executar(Cpf cpf){

    int campo;                                                                                  // Campo de entrada.

    bool apresentar = true;                                                                     // Controle de la�o.

    while(apresentar){

        // Apresenta tela de sele��o de servi�o.

        CLR_SCR;                                                                                // Limpa janela.

        cout << "Selecione um dos servicos : " << endl;                                                                 // Imprime nome do campo.
        cout << "1 - Consultar dados pessoais." << endl;                                                                 // Imprime nome do campo.
        cout << "2 - Retornar." << endl;                                                                 // Imprime nome do campo.

        campo = getch() - 48;                                                                   // Leitura do campo de entrada e convers�o de ASCII.

        switch(campo){
            case 1: consultarDadosPessoais(cpf);
                    break;
            case 2: apresentar = false;
                    break;
        }
    }
}

//--------------------------------------------------------------------------------------------

void CntrApresentacaoPessoal::cadastrar(){

    string campo1, campo2, campo4, campo5, campo6, campo7, campo8;
    int campo3;

    // Instancia os dom�nios.

    Nome nome;
    Endereco endereco;
    Cep cep;
    Cpf cpf;
    Senha senha;
    Numero numero;
    CodigoAgencia agencia;
    CodigoBanco banco;

    // Apresenta tela de cadastramento.

    CLR_SCR;                                                                                   // Limpa janela.

    cout << "Preencha os seguintes campos: " << endl;                                                                    // Imprime solicita��o ao usu�rio.
    cout << "Nome            : ";                                                                     // Imprime nome do campo.
    cin >> campo1;                                                                             // L� valor do campo.
    cout << "Endereco        : ";                                                                     // Imprime nome do campo.
    cin >> campo2;                                                                             // L� valor do campo.
    cout << "CEP             : ";                                                                     // Imprime nome do campo.
    cin >> campo3;                                                                             // L� valor do campo.
    cout << "CPF             : ";                                                                     // Imprime nome do campo.
    cin >> campo4;                                                                             // L� valor do campo.
    cout << "Senha           : ";                                                                     // Imprime nome do campo.
    cin >> campo5;                                                                             // L� valor do campo.
    cout << "Numero de conta : ";                                                                     // Imprime nome do campo.
    cin >> campo6;                                                                             // L� valor do campo.
    cout << "Agencia         : ";                                                                     // Imprime nome do campo.
    cin >> campo7;                                                                             // L� valor do campo.
    cout << "Banco           : ";                                                                     // Imprime nome do campo.
    cin >> campo8;                                                                             // L� valor do campo.

    try{
        nome.setNome(campo1);
        endereco.setEndereco(campo2);
        cep.setCep(campo3);
        cpf.setCpf(campo4);
        senha.setSenha(campo5);
        numero.setNumero(campo6);
        agencia.setCodigoAgencia(campo7);
        banco.setCodigoBanco(campo8);
    }
    catch(invalid_argument &exp){
        cout << "Dados em formato incorreto. Pressione Enter para continuar." << endl;                                                                // Informa formato incorreto.
        getch();                                                                                // Leitura de caracter digitado.
        return;
    }

    // Instancia e inicializa entidades.

    Usuario usuario;

    usuario.setNome(nome);
    usuario.setEndereco(endereco);
    usuario.setCep(cep);
    usuario.setCpf(cpf);
    usuario.setSenha(senha);

    Conta conta;

    conta.setNumero(numero);
    conta.setCodigoAgencia(agencia);
    conta.setCodigoBanco(banco);

    // Cadastra usu�rio e conta.

    if(cntrServicoPessoal->cadastrarUsuario(usuario))
        if(cntrServicoProdutosFinanceiros->cadastrarConta(conta)){
            cout << "Sucesso no cadastramento. Pressione Enter para continuar." << endl;                                                                    // Informa sucesso.
            getch();
            return;
        }

    cout << "Falha no cadastramento. Pressione Enter para continuar." << endl;                                                                            // Informa falha.
    getch();

    return;
}

//--------------------------------------------------------------------------------------------

void CntrApresentacaoPessoal::consultarDadosPessoais(Cpf cpf){
    Usuario usuario;

    usuario.setCpf(cpf);

    cntrServicoPessoal->pesquisarUsuario(&usuario);
}

//--------------------------------------------------------------------------------------------

void CntrApresentacaoProdutosFinanceiros::executar(){

    int campo;                                                                                  // Campo de entrada.

    bool apresentar = true;                                                                     // Controle de la�o.

    while(apresentar){

        // Apresenta tela simplificada de produtos financeiros.

        CLR_SCR;                                                                                // Limpa janela.

        cout << "Selecione um dos servicos : " << endl;                                                                 // Imprime nome do campo.
        cout << "1 - Consultar produto de investimento." << endl;                                                                 // Imprime nome do campo.
        cout << "2 - Retornar." << endl;                                                                 // Imprime nome do campo.

        campo = getch() - 48;                                                                   // Leitura do campo de entrada.

        switch(campo){
            case 1: consultarProdutoInvestimento();
                    break;
            case 2: apresentar = false;
                    break;
        }
    }
}

//--------------------------------------------------------------------------------------------

void CntrApresentacaoProdutosFinanceiros::executar(Cpf cpf){

    int campo;                                                                                  // Campo de entrada.

    bool apresentar = true;                                                                     // Controle de la�o.

    while(apresentar){

        // Apresenta tela completa de produtos financeiros.

        CLR_SCR;                                                                                // Limpa janela.

        cout << "Selecione um dos servicos : " << endl;                                                                 // Imprime nome do campo.
        cout << "1 - Consultar conta corrente." << endl;                                                                 // Imprime nome do campo.
        cout << "2 - Cadastrar produto de investimento." << endl;                                                                 // Imprime nome do campo.
        cout << "3 - Descadastrar produto de investimento." << endl;                                                                 // Imprime nome do campo.
        cout << "4 - Consultar produto de investimento." << endl;                                                                 // Imprime nome do campo.
        cout << "5 - Realizar aplicacao em produto de investimento." << endl;                                                                 // Imprime nome do campo.
        cout << "6 - Listar aplicacoes em produto de investimento." << endl;                                                                 // Imprime nome do campo.
        cout << "7 - Retornar." << endl;                                                                 // Imprime nome do campo.

        campo = getch() - 48;                                                                   // Leitura do campo de entrada e convers�o de ASCII.

        switch(campo){
            case 1: consultarConta();
                    break;
            case 2: cadastrarProdutoInvestimento();
                    break;
            case 3: descadastrarProdutoInvestimento();
                    break;
            case 4: consultarProdutoInvestimento();
                    break;
            case 5: realizarAplicacao();
                    break;
            case 6: listarAplicacoes();
                    break;
            case 7: apresentar = false;
                    break;
        }
    }
}

//--------------------------------------------------------------------------------------------

void CntrApresentacaoProdutosFinanceiros::consultarConta(){
    Conta conta;

    cntr->consultarConta(&conta);
}

//--------------------------------------------------------------------------------------------

void CntrApresentacaoProdutosFinanceiros::cadastrarProdutoInvestimento(){

    string campo1, campo2, campo3, campo5, campo7;
    int campo4, campo6;
    double campo8;

    // Instancia os dom�nios.

    CodigoProduto codigoproduto;
    Classe classe;
    Emissor emissor;
    Prazo prazo;
    Data vencimento;                              //CONFIRMAR ISSO AKIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIII
    Taxa taxa;
    Horario horario;
    ValorMinimo valor;

    // Apresenta tela de cadastramento.

    CLR_SCR;                                                                                   // Limpa janela.

    cout << "Preencha os seguintes campos: " << endl;                                                                    // Imprime solicita��o ao usu�rio.
    cout << "Coodigo         : ";                                                                     // Imprime nome do campo.
    cin >> campo1;                                                                             // L� valor do campo.
    cout << "Classe          : ";                                                                     // Imprime nome do campo.
    cin >> campo2;                                                                             // L� valor do campo.
    cout << "Emissor         : ";                                                                     // Imprime nome do campo.
    cin >> campo3;                                                                             // L� valor do campo.
    cout << "Prazo           : ";                                                                     // Imprime nome do campo.
    cin >> campo4;                                                                             // L� valor do campo.
    cout << "Vencimento      : ";                                                                     // Imprime nome do campo.
    cin >> campo5;                                                                             // L� valor do campo.
    cout << "Taxa            : ";                                                                     // Imprime nome do campo.
    cin >> campo6;                                                                             // L� valor do campo.
    cout << "Horario         : ";                                                                     // Imprime nome do campo.
    cin >> campo7;                                                                             // L� valor do campo.
    cout << "Valor Minimo    : ";                                                                     // Imprime nome do campo.
    cin >> campo8;                                                                             // L� valor do campo.


    try{
        codigoproduto.setCodigoProduto(campo1);
        classe.setClasse(campo2);
        emissor.setEmissor(campo3);
        prazo.setPrazo(campo4);
        vencimento.setData(campo5);
        taxa.setTaxa(stoi(campo6));
        horario.setHorario(campo7);
        valor.setValorMinimo(campo8);
    }
    catch(invalid_argument &exp){
        cout << "Dados em formato incorreto. Pressione Enter para continuar." << endl;                                                                // Informa formato incorreto.
        getch();                                                                                // Leitura de caracter digitado.
        return;
    }

    Produto produto;

    produto.setCodigoProduto(codigoproduto);
    produto.setClasse(classe);
    produto.setEmissor(emissor);
    produto.setPrazo(prazo);
    produto.setData(vencimento);
    produto.setTaxa(taxa);
    produto.setHorario(horario);
    produto.setValorMinimo(valor);

    if(cntr->cadastrarProdutoInvestimento(produto)){
        cout << "Sucesso no cadastramento. Pressione Enter para continuar." << endl;                                                                    // Informa sucesso.
        getch();
        return;
    }

    cout << "Falha no cadastramento. Pressione Enter para continuar." << endl;                                                                            // Informa falha.
    getch();

    return;
}

//--------------------------------------------------------------------------------------------

void CntrApresentacaoProdutosFinanceiros::descadastrarProdutoInvestimento(){
    string campo1;
    CodigoProduto codigoproduto;

    CLR_SCR;                                                                                    // Limpa janela.
    cout << "Insira o codigo do produto que deseja descadastrar: ";                                                                      // Imprime nome do campo.
    cin >> campo1;

    try{
        codigoproduto.setCodigoProduto(campo1);
    }
    catch(invalid_argument &exp){
        cout << "Dados em formato incorreto. Pressione Enter para continuar." << endl;                                                                // Informa formato incorreto.
        getch();                                                                                // Leitura de caracter digitado.
        return;
    }

    if(cntr->descadastrarProdutoInvestimento(codigoproduto)){
        CLR_SCR;                                                                                    // Limpa janela.
        cout << "Produto descadastrado com sucesso" << endl;
        getch();                                                                                // Leitura de caracter digitado.
        return;
    }

    cout << "Falha no descadastramento. Pressione Enter para continuar." << endl;                                                                            // Informa falha.
    getch();

    return;

}

//--------------------------------------------------------------------------------------------

void CntrApresentacaoProdutosFinanceiros::consultarProdutoInvestimento(){
    string campo1;
    Classe classe;
    Produto produto;

    CLR_SCR;                                                                                    // Limpa janela.
    cout << "Selecione a classe dos produtos de investimentos desejados (CDB, LCA, LCI, LF, ou LC): ";
    cin >> campo1;

    classe.setClasse(campo1);
    produto.setClasse(classe);

    cntr->pesquisarProduto(&produto);
}

//--------------------------------------------------------------------------------------------

void CntrApresentacaoProdutosFinanceiros::realizarAplicacao(){

    string campo1, campo3;
    double campo2;

    CodigoAplicacao codigoaplicacao;
    ValorAplicacao valoraplicacao;
    Data data;

    // Apresenta tela de cadastramento.

    CLR_SCR;                                                                                   // Limpa janela.

    cout << "Preencha os seguintes campos: " << endl;                                                                    // Imprime solicita��o ao usu�rio.
    cout << "Coodigo da Aplicacao : ";                                                                     // Imprime nome do campo.
    cin >> campo1;                                                                             // L� valor do campo.
    cout << "Valor da Aplicacao   : ";                                                                     // Imprime nome do campo.
    cin >> campo2;                                                                             // L� valor do campo.
    cout << "Data                 : ";                                                                     // Imprime nome do campo.
    cin >> campo3;                                                                             // L� valor do campo.



    try{
        codigoaplicacao.setCodigoAplicacao(campo1);
        valoraplicacao.setValorAplicacao(campo2);
        data.setData(campo3);
    }
    catch(invalid_argument &exp){
        cout << "Dados em formato incorreto. Pressione Enter para continuar." << endl;                                                                // Informa formato incorreto.
        getch();                                                                                // Leitura de caracter digitado.
        return;
    }

    Aplicacao aplicacao;

    aplicacao.setCodigoAplicacao(codigoaplicacao);
    aplicacao.setValorAplicacao(valoraplicacao);
    aplicacao.setData(data);


    if(cntr->realizarAplicacao(aplicacao)){
        cout << "Sucesso no cadastramento. Pressione Enter para continuar." << endl;                                                                    // Informa sucesso.
        getch();
        return;
    }

    cout << "Falha no cadastramento. Pressione Enter para continuar." << endl;                                                                            // Informa falha.
    getch();

    return;
}

//--------------------------------------------------------------------------------------------

void CntrApresentacaoProdutosFinanceiros::listarAplicacoes(){
    Aplicacao aplicacao;

    cntr->recuperarAplicacao(&aplicacao);

}
