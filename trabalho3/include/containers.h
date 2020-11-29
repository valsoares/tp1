#ifndef CONTAINERS_H_INCLUDED
#define CONTAINERS_H_INCLUDED

#include "dominios.h"
#include "entidades.h"

#include <list>

using namespace std;

// Declara��o de classe container de usu�rios.

// Implementa��o adota padr�o de projeto Singleton.

class ContainerUsuario{ 
    private:
        list<Usuario> container;                        // Lista de usu�rios.
        static ContainerUsuario *instancia;             // Ponteiro para inst�ncia da classe.
        ContainerUsuario(){};                           // Construtor.
    public:
        static  ContainerUsuario* getInstancia();       // M�todo para instanciar a classe.
        bool incluir(Usuario);                          // M�todos respons�veis por presta��o de servi�o.
        bool remover(Cpf);
        bool pesquisar(Usuario*);
        bool autenticar(Cpf, Senha);
        bool atualizar(Usuario);
};

class ContainerAplicacao{ 
    private:
        list<Aplicacao> container;                        // Lista de aplicações.
        static ContainerAplicacao *instancia;             // Ponteiro para inst�ncia da classe.
        ContainerAplicacao(){};                           // Construtor.
    public:
        static  ContainerAplicacao* getInstancia();       // M�todo para instanciar a classe.
        bool incluir(Aplicacao);                          // M�todos respons�veis por presta��o de servi�o.
        bool pesquisar(Aplicacao*);
};

class ContainerProduto{ 
    private:
        list<Produto> container;                        // Lista de produtos.
        static ContainerProduto *instancia;             // Ponteiro para inst�ncia da classe.
        ContainerProduto(){};                           // Construtor.
    public:
        static  ContainerProduto* getInstancia();       // M�todo para instanciar a classe.
        bool incluir(Produto);                          // M�todos respons�veis por presta��o de servi�o.
        bool remover(CodigoProduto);
        bool pesquisar(Produto*);
};

class ContainerConta{ 
    private:
        list<Conta> container;                        // Lista de contas.
        static ContainerConta *instancia;             // Ponteiro para inst�ncia da classe.
        ContainerConta(){};                           // Construtor.
    public:
        static  ContainerConta* getInstancia();       // M�todo para instanciar a classe.
        bool incluir(Conta);                          // M�todos respons�veis por presta��o de servi�o.
        bool remover(Conta);
        bool pesquisar(Conta*);
};

#endif // CONTROLADORAS_H_INCLUDED
