#include "controladorasapresentacao.h"

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

    char campo1[80];
    char campo2[80];

    Senha senha;                                                                                // Instancia a classe Senha.

    while(true){

        // Apresenta tela de autentica��o.

        CLR_SCR;                                                                                // Limpa janela.

        cout << "Digite o CPF  : ";                                                                  // Imprime nome do campo.
        cin >> campo1;                                                                          // L� valor do campo.
        cout << "Digite a senha: ";                                                                  // Imprime nome do campo.
        cin >> campo2;                                                                          // L� valor do campo.

        try{
            cpf->setCpf(string(campo1));                                                      // Atribui valor ao CPF.
            senha.setSenha(string(campo2));                                                     // Atribui Valor � senha.
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

        // Apresenta tela de sela��o de servi�o.

        CLR_SCR;                                                                                // Limpa janela.

        cout << "Selecione um dos servicos : " << endl;                                                                 // Imprime nome do campo.
        cout << "1 - Consultar dados pessoais." << endl;                                                                 // Imprime nome do campo.
        cout << "2 - Retornar." << endl;                                                                 // Imprime nome do campo.

        campo = getch() - 48;                                                                   // Leitura do campo de entrada e convers�o de ASCII.

        switch(campo){
            case 1: consultarDadosPessoais();
                    break;
            case 2: apresentar = false;
                    break;
        }
    }
}

//--------------------------------------------------------------------------------------------

void CntrApresentacaoPessoal::cadastrar(){

    char campo1[80], campo2[80], campo3[80], campo4[80], campo5[80];                            // Cria campos para entrada dos dados.
    char campo6[80], campo7[80], campo8[80];                                                    // Cria campos para entrada dos dados.

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
        nome.setNome(string(campo1));
        endereco.setEndereco(string(campo2));
        cep.setCep(stoi(campo3));
        cpf.setCpf(string(campo4));
        senha.setSenha(string(campo5));
        numero.setNumero(string(campo6));
        agencia.setCodigoAgencia(string(campo7));
        banco.setCodigoBanco(string(campo8));
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

void CntrApresentacaoPessoal::consultarDadosPessoais(){

    //--------------------------------------------------------------------------------------------
    //--------------------------------------------------------------------------------------------
    // Substituir c�digo seguinte pela implementa��o do m�todo.
    //--------------------------------------------------------------------------------------------
    //--------------------------------------------------------------------------------------------

    // Mensagens a serem apresentadas na tela de apresenta��o de dados pessoais.

    CLR_SCR;                                                                                    // Limpa janela.
    cout << "Servico consultar dados pessoais nao implementado. Pressione Enter para continuar." << endl;                                                      // Imprime nome do campo.
    getch();

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

void CntrApresentacaoProdutosFinanceiros::executar(Cpf){

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

    //--------------------------------------------------------------------------------------------
    //--------------------------------------------------------------------------------------------
    // Substituir c�digo seguinte pela implementa��o do m�todo.
    //--------------------------------------------------------------------------------------------
    //--------------------------------------------------------------------------------------------


    CLR_SCR;                                                                                    // Limpa janela.
    cout << "Servico consultar conta nao implementado. Pressione Enter para continuar." << endl;                                                                      // Imprime nome do campo.
    getch();
}

//--------------------------------------------------------------------------------------------

void CntrApresentacaoProdutosFinanceiros::cadastrarProdutoInvestimento(){

    //--------------------------------------------------------------------------------------------
    //--------------------------------------------------------------------------------------------
    // Substituir c�digo seguinte pela implementa��o do m�todo.
    //--------------------------------------------------------------------------------------------
    //--------------------------------------------------------------------------------------------


    CLR_SCR;                                                                                    // Limpa janela.
    cout << "Servico cadastrar produto investimento nao implementado. Pressione Enter para continuar." << endl;                                                                      // Imprime nome do campo.
    getch();

}

//--------------------------------------------------------------------------------------------

void CntrApresentacaoProdutosFinanceiros::descadastrarProdutoInvestimento(){

    //--------------------------------------------------------------------------------------------
    //--------------------------------------------------------------------------------------------
    // Substituir c�digo seguinte pela implementa��o do m�todo.
    //--------------------------------------------------------------------------------------------
    //--------------------------------------------------------------------------------------------

    CLR_SCR;                                                                                    // Limpa janela.
    cout << "Servico descadastrar produto investimento nao implementado. Pressione Enter para continuar." << endl;                                                                      // Imprime nome do campo.
    getch();

}

//--------------------------------------------------------------------------------------------

void CntrApresentacaoProdutosFinanceiros::consultarProdutoInvestimento(){

    //--------------------------------------------------------------------------------------------
    //--------------------------------------------------------------------------------------------
    // Substituir c�digo seguinte pela implementa��o do m�todo.
    //--------------------------------------------------------------------------------------------
    //--------------------------------------------------------------------------------------------

    CLR_SCR;                                                                                    // Limpa janela.
    cout << "Servico consultar produto investimento nao implementado. Pressione Enter para continuar." << endl;                                                                      // Imprime nome do campo.
    getch();

}

//--------------------------------------------------------------------------------------------

void CntrApresentacaoProdutosFinanceiros::realizarAplicacao(){

    //--------------------------------------------------------------------------------------------
    //--------------------------------------------------------------------------------------------
    // Substituir c�digo seguinte pela implementa��o do m�todo.
    //--------------------------------------------------------------------------------------------
    //--------------------------------------------------------------------------------------------

    CLR_SCR;                                                                                    // Limpa janela.
    cout << "Servico realizar aplicacao nao implementado. Pressione Enter para continuar." << endl;                                                                      // Imprime nome do campo.
    getch();

}

//--------------------------------------------------------------------------------------------

void CntrApresentacaoProdutosFinanceiros::listarAplicacoes(){

    //--------------------------------------------------------------------------------------------
    //--------------------------------------------------------------------------------------------
    // Substituir c�digo seguinte pela implementa��o do m�todo.
    //--------------------------------------------------------------------------------------------
    //--------------------------------------------------------------------------------------------

    CLR_SCR;                                                                                    // Limpa janela.
    cout << "Servico listar aplicacoes nao implementado. Pressione Enter para continuar." << endl;                                                                      // Imprime nome do campo.
    getch();

}
