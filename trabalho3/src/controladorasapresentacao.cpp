#include "controladorasapresentacao.h"

//--------------------------------------------------------------------------------------------
// Implementa��es dos m�todos das classes controladoras da camada de apresenta��o.


//--------------------------------------------------------------------------------------------
// Implementa��es dos m�todos da classe controladora apresenta��o controle.

void CntrApresentacaoControle::executar(){

    // Mensagens a serem apresentadas na tela inicial.

    char texto1[]="Selecione um dos servicos : ";
    char texto2[]="1 - Acessar sistema.";
    char texto3[]="2 - Cadastrar usuario.";
    char texto4[]="3 - Acessar dados sobre produtos financeiros.";
    char texto5[]="4 - Encerrar execucao do sistema.";

    // Mensagens a serem apresentadas na tela de sele��o de servi�o.

    char texto6[]="Selecione um dos servicos : ";
    char texto7[]="1 - Selecionar servicos de pessoal.";
    char texto8[]="2 - Selecionar servicos relacionados a produtos financeiros.";
    char texto9[]="3 - Encerrar sessao.";

    char texto10[]="Falha na autenticacao. Digite algo para continuar.";                        // Mensagem a ser apresentada.

    int campo;                                                                                  // Campo de entrada.

    bool apresentar = true;                                                                     // Controle de la�o.

    while(apresentar){

        // Apresenta tela inicial.

        CLR_SCR;                                                                                // Limpa janela.

        cout << texto1 << endl;                                                                 // Imprime nome do campo.
        cout << texto2 << endl;                                                                 // Imprime nome do campo.
        cout << texto3 << endl;                                                                 // Imprime nome do campo.
        cout << texto4 << endl;                                                                 // Imprime nome do campo.
        cout << texto5 << endl;                                                                 // Imprime nome do campo.

        campo = getch() - 48;                                                                   // Leitura do campo de entrada e convers�o de ASCII.

        switch(campo){
            case 1: if(cntrApresentacaoAutenticacao->autenticar(&cpf)){                         // Solicita autentica��o.
                        bool apresentar = true;                                                 // Controle de la�o.
                        while(apresentar){

                            // Apresenta tela de sele��o de servi�o.

                            CLR_SCR;                                                            // Limpa janela.

                            cout << texto6 << endl;                                             // Imprime nome do campo.
                            cout << texto7 << endl;                                             // Imprime nome do campo.
                            cout << texto8 << endl;                                             // Imprime nome do campo.
                            cout << texto9 << endl;                                             // Imprime nome do campo.

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
                        cout << texto10 << endl;                                                // Imprime mensagem.
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

    // Mensagens a serem apresentadas na tela de autentica��o.

    char texto1[]="Digite o CPF  : ";
    char texto2[]="Digite a senha: ";
    char texto3[]="Dado em formato incorreto. Digite algo.";

    // Campos de entrada.

    char campo1[80];
    char campo2[80];

    Senha senha;                                                                                // Instancia a classe Senha.

    while(true){

        // Apresenta tela de autentica��o.

        CLR_SCR;                                                                                // Limpa janela.

        cout << texto1 << " ";                                                                  // Imprime nome do campo.
        cin >> campo1;                                                                          // L� valor do campo.
        cout << texto2 << " ";                                                                  // Imprime nome do campo.
        cin >> campo2;                                                                          // L� valor do campo.

        try{
            cpf->setCpf(string(campo1));                                                      // Atribui valor ao CPF.
            senha.setSenha(string(campo2));                                                     // Atribui Valor � senha.
            break;                                                                              // Abandona la�o em caso de formatos corretos.
        }
        catch(invalid_argument &exp){                                                           // Captura exce��o devido a formato incorreto.
            CLR_SCR;                                                                            // Limpa janela.
            cout << texto3 << endl;                                                             // Informa formato incorreto.
            getch();                                                                            // L� caracter digitado.
        }
    }
    return (cntr->autenticar(*cpf, senha));                                                     // Solicita servi�o de autentica��o.
}

//--------------------------------------------------------------------------------------------
// Implementa��es dos m�todos da classe controladora apresenta��o pessoal.

void CntrApresentacaoPessoal::executar(Cpf cpf){

    // Mensagens a serem apresentadas na tela de sele��o de servi�o..

    char texto1[]="Selecione um dos servicos : ";
    char texto2[]="1 - Consultar dados pessoais.";
    char texto3[]="2 - Retornar.";

    int campo;                                                                                  // Campo de entrada.

    bool apresentar = true;                                                                     // Controle de la�o.

    while(apresentar){

        // Apresenta tela de sela��o de servi�o.

        CLR_SCR;                                                                                // Limpa janela.

        cout << texto1 << endl;                                                                 // Imprime nome do campo.
        cout << texto2 << endl;                                                                 // Imprime nome do campo.
        cout << texto3 << endl;                                                                 // Imprime nome do campo.

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

    // Mensagens a serem apresentadas na tela de cadastramento.

    char texto1[] ="Preencha os seguintes campos: ";
    char texto2[] ="Nome            :";
    char texto3[] ="Endereco        :";
    char texto4[] ="CEP             :";
    char texto5[] ="CPF             :";
    char texto6[] ="Senha           :";
    char texto7[] ="Numero de conta :";
    char texto8[] ="Agencia         :";
    char texto9[] ="Banco           :";
    char texto10[]="Dados em formato incorreto. Digite algo.";
    char texto11[]="Sucesso no cadastramento. Digite algo.";
    char texto12[]="Falha no cadastramento. Digite algo.";

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

    cout << texto1 << endl;                                                                    // Imprime solicita��o ao usu�rio.
    cout << texto2 << " ";                                                                     // Imprime nome do campo.
    cin >> campo1;                                                                             // L� valor do campo.
    cout << texto3 << " ";                                                                     // Imprime nome do campo.
    cin >> campo2;                                                                             // L� valor do campo.
    cout << texto4 << " ";                                                                     // Imprime nome do campo.
    cin >> campo3;                                                                             // L� valor do campo.
    cout << texto5 << " ";                                                                     // Imprime nome do campo.
    cin >> campo4;                                                                             // L� valor do campo.
    cout << texto6 << " ";                                                                     // Imprime nome do campo.
    cin >> campo5;                                                                             // L� valor do campo.
    cout << texto7 << " ";                                                                     // Imprime nome do campo.
    cin >> campo6;                                                                             // L� valor do campo.
    cout << texto8 << " ";                                                                     // Imprime nome do campo.
    cin >> campo7;                                                                             // L� valor do campo.
    cout << texto9 << " ";                                                                     // Imprime nome do campo.
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
        cout << texto10 << endl;                                                                // Informa formato incorreto.
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
            cout << texto11 << endl;                                                                    // Informa sucesso.
            getch();
            return;
        }

    cout << texto12 << endl;                                                                            // Informa falha.
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

    char texto[]="Servico consultar dados pessoais nao implementado. Digite algo.";             // Mensagem a ser apresentada.
    CLR_SCR;                                                                                    // Limpa janela.
    cout << texto << endl;                                                      // Imprime nome do campo.
    getch();

}

//--------------------------------------------------------------------------------------------

void CntrApresentacaoProdutosFinanceiros::executar(){

    // Mensagens a serem apresentadas na tela simplificada de produtos financeiros.

    char texto1[]="Selecione um dos servicos : ";
    char texto2[]="1 - Consultar produto de investimento.";
    char texto3[]="2 - Retornar.";

    int campo;                                                                                  // Campo de entrada.

    bool apresentar = true;                                                                     // Controle de la�o.

    while(apresentar){

        // Apresenta tela simplificada de produtos financeiros.

        CLR_SCR;                                                                                // Limpa janela.

        cout << texto1 << endl;                                                                 // Imprime nome do campo.
        cout << texto2 << endl;                                                                 // Imprime nome do campo.
        cout << texto3 << endl;                                                                 // Imprime nome do campo.

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

    // Mensagens a serem apresentadas tela completa de produtos financeiros.

    char texto1[] ="Selecione um dos servicos : ";
    char texto2[] ="1 - Consultar conta corrente.";
    char texto3[] ="2 - Cadastrar produto de investimento.";
    char texto4[] ="3 - Descadastrar produto de investimento.";
    char texto5[] ="4 - Consultar produto de investimento.";
    char texto6[] ="5 - Realizar aplicacao em produto de investimento.";
    char texto7[] ="6 - Listar aplicacoes em produto de investimento.";
    char texto8[] ="7 - Retornar.";

    int campo;                                                                                  // Campo de entrada.

    bool apresentar = true;                                                                     // Controle de la�o.

    while(apresentar){

        // Apresenta tela completa de produtos financeiros.

        CLR_SCR;                                                                                // Limpa janela.

        cout << texto1 << endl;                                                                 // Imprime nome do campo.
        cout << texto2 << endl;                                                                 // Imprime nome do campo.
        cout << texto3 << endl;                                                                 // Imprime nome do campo.
        cout << texto4 << endl;                                                                 // Imprime nome do campo.
        cout << texto5 << endl;                                                                 // Imprime nome do campo.
        cout << texto6 << endl;                                                                 // Imprime nome do campo.
        cout << texto7 << endl;                                                                 // Imprime nome do campo.
        cout << texto8 << endl;                                                                 // Imprime nome do campo.

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

    // Mensagens a serem apresentadas.

    char texto[]="Servico consultar conta nao implementado. Digite algo.";                      // Mensagem a ser apresentada.

    CLR_SCR;                                                                                    // Limpa janela.
    cout << texto << endl;                                                                      // Imprime nome do campo.
    getch();
}

//--------------------------------------------------------------------------------------------

void CntrApresentacaoProdutosFinanceiros::cadastrarProdutoInvestimento(){

    //--------------------------------------------------------------------------------------------
    //--------------------------------------------------------------------------------------------
    // Substituir c�digo seguinte pela implementa��o do m�todo.
    //--------------------------------------------------------------------------------------------
    //--------------------------------------------------------------------------------------------

    // Mensagens a serem apresentadas.

    char texto[]="Servico cadastrar produto investimento nao implementado. Digite algo.";       // Mensagem a ser apresentada.

    CLR_SCR;                                                                                    // Limpa janela.
    cout << texto << endl;                                                                      // Imprime nome do campo.
    getch();

}

//--------------------------------------------------------------------------------------------

void CntrApresentacaoProdutosFinanceiros::descadastrarProdutoInvestimento(){

    //--------------------------------------------------------------------------------------------
    //--------------------------------------------------------------------------------------------
    // Substituir c�digo seguinte pela implementa��o do m�todo.
    //--------------------------------------------------------------------------------------------
    //--------------------------------------------------------------------------------------------

    // Mensagens a serem apresentadas.

    char texto[]="Servico descadastrar produto investimento nao implementado. Digite algo.";    // Mensagem a ser apresentada.

    CLR_SCR;                                                                                    // Limpa janela.
    cout << texto << endl;                                                                      // Imprime nome do campo.
    getch();

}

//--------------------------------------------------------------------------------------------

void CntrApresentacaoProdutosFinanceiros::consultarProdutoInvestimento(){

    //--------------------------------------------------------------------------------------------
    //--------------------------------------------------------------------------------------------
    // Substituir c�digo seguinte pela implementa��o do m�todo.
    //--------------------------------------------------------------------------------------------
    //--------------------------------------------------------------------------------------------

    // Mensagens a serem apresentadas.

    char texto[]="Servico consultar produto investimento nao implementado. Digite algo.";       // Mensagem a ser apresentada.

    CLR_SCR;                                                                                    // Limpa janela.
    cout << texto << endl;                                                                      // Imprime nome do campo.
    getch();

}

//--------------------------------------------------------------------------------------------

void CntrApresentacaoProdutosFinanceiros::realizarAplicacao(){

    //--------------------------------------------------------------------------------------------
    //--------------------------------------------------------------------------------------------
    // Substituir c�digo seguinte pela implementa��o do m�todo.
    //--------------------------------------------------------------------------------------------
    //--------------------------------------------------------------------------------------------

    // Mensagens a serem apresentadas.

    char texto[]="Servico realizar aplicacao nao implementado. Digite algo.";                   // Mensagem a ser apresentada.

    CLR_SCR;                                                                                    // Limpa janela.
    cout << texto << endl;                                                                      // Imprime nome do campo.
    getch();

}

//--------------------------------------------------------------------------------------------

void CntrApresentacaoProdutosFinanceiros::listarAplicacoes(){

    //--------------------------------------------------------------------------------------------
    //--------------------------------------------------------------------------------------------
    // Substituir c�digo seguinte pela implementa��o do m�todo.
    //--------------------------------------------------------------------------------------------
    //--------------------------------------------------------------------------------------------

    // Mensagens a serem apresentadas.

    char texto[]="Servico listar aplicacoes nao implementado. Digite algo.";                    // Mensagem a ser apresentada.

    CLR_SCR;                                                                                    // Limpa janela.
    cout << texto << endl;                                                                      // Imprime nome do campo.
    getch();

}
