#include "containers.h"

ContainerUsuario* ContainerUsuario::instancia = nullptr;
ContainerAplicacao* ContainerAplicacao::instancia = nullptr;
ContainerProduto* ContainerProduto::instancia = nullptr;
ContainerConta* ContainerConta::instancia = nullptr;

ContainerUsuario* ContainerUsuario::getInstancia() {
    if (instancia == nullptr)
        instancia = new ContainerUsuario();
    return instancia;
}

bool ContainerUsuario::incluir(Usuario usuario){
    for(list<Usuario>::iterator elemento = container.begin(); elemento != container.end(); elemento++){
        if (elemento->getCpf().getCpf() == usuario.getCpf().getCpf()){
            return false;
        }
    }
    // Inclui objeto.
    container.push_back(usuario);
    return true;
}


bool ContainerUsuario::remover(Cpf cpf){
    for(list<Usuario>::iterator elemento = container.begin(); elemento != container.end(); elemento++){
        if (elemento->getCpf().getCpf() == cpf.getCpf()){
            // Remove objeto localizado.
            container.erase(elemento);
            return true;
        }
    }
    return false;
}

bool ContainerUsuario::pesquisarUsuario(Usuario* usuario){
    for(list<Usuario>::iterator elemento = container.begin(); elemento != container.end(); elemento++){
        if (elemento->getCpf().getCpf() == usuario->getCpf().getCpf()){
            // Copia dados do objeto localizado.
            usuario->setNome(elemento->getNome());
            usuario->setEndereco(elemento->getEndereco());
            usuario->setCep(elemento->getCep());
            usuario->setSenha(elemento->getSenha());

            return true;
        }
    }
    return false;
}

bool ContainerUsuario::autenticar(Cpf cpf, Senha senha){
    for(list<Usuario>::iterator elemento = container.begin(); elemento != container.end(); elemento++){
        if (elemento->getCpf().getCpf() == cpf.getCpf()){
            if(elemento->getSenha().getSenha() == senha.getSenha()) {
                return true;
            }
        }
    }
    return false;
}


bool ContainerUsuario::atualizar(Usuario usuario){
    for(list<Usuario>::iterator elemento = container.begin(); elemento != container.end(); elemento++){
        if (elemento->getCpf().getCpf() == usuario.getCpf().getCpf()){
            elemento->setEndereco(usuario.getEndereco());
            elemento->setCep(usuario.getCep());
            elemento->setSenha(usuario.getSenha());
            return true;
        }
    }
    return false;
}

// Containers Aplicacao

ContainerAplicacao* ContainerAplicacao::getInstancia() {
    if (instancia == nullptr)
        instancia = new ContainerAplicacao();
    return instancia;
}

bool ContainerAplicacao::incluir(Aplicacao aplicacao){
    for(list<Aplicacao>::iterator elemento = container.begin(); elemento != container.end(); elemento++){
        if (elemento->getCodigoAplicacao().getCodigoAplicacao() == aplicacao.getCodigoAplicacao().getCodigoAplicacao()){
            return false;
        }
    }
    
    // Inclui objeto.
    container.push_back(aplicacao);
    return true;
}

bool ContainerAplicacao::pesquisar(Aplicacao* aplicacao){
    for(list<Aplicacao>::iterator elemento = container.begin(); elemento != container.end(); elemento++){
            // Copia dados do objeto localizado.
        aplicacao->setCodigoAplicacao(elemento->getCodigoAplicacao());
        aplicacao->setData(elemento->getData());
        aplicacao->setValorAplicacao(elemento->getValorAplicacao());
        return true;
    }
    return false;
}



// Containers Produto

ContainerProduto* ContainerProduto::getInstancia() {
    if (instancia == nullptr)
        instancia = new ContainerProduto();
    return instancia;
}

bool ContainerProduto::incluir(Produto produto){
    for(list<Produto>::iterator elemento = container.begin(); elemento != container.end(); elemento++){
        if (elemento->getCodigoProduto().getCodigoProduto() == produto.getCodigoProduto().getCodigoProduto()){
            return false;
        }
    }
    // Inclui objeto.
    container.push_back(produto);
    return true;
}


bool ContainerProduto::remover(CodigoProduto codigo){
    for(list<Produto>::iterator elemento = container.begin(); elemento != container.end(); elemento++){
        if (elemento->getCodigoProduto().getCodigoProduto() == codigo.getCodigoProduto()){
            // Remove objeto localizado.
            container.erase(elemento);
            return true;
        }
    }
    return false;
}

bool ContainerProduto::pesquisar(Produto* produto){
    for(list<Produto>::iterator elemento = container.begin(); elemento != container.end(); elemento++){
        if (elemento->getClasse().getClasse() == produto->getClasse().getClasse()){
            // Copia dados do objeto localizado.
            cout << "Codigo do produto : " << elemento->getCodigoProduto().getCodigoProduto() << endl;
            cout << "Emissor           : " << elemento->getEmissor().getEmissor() << endl;
            cout << "Prazo             : " << elemento->getPrazo().getPrazo() << endl;
            cout << "Vencimento        : " << elemento->getData().getData() << endl; 
            cout << "Taxa              : " << elemento->getTaxa().getTaxa() << endl;
            cout << "Horario           : " << elemento->getHorario().getHorario() << endl;
            cout << "Valor minimo      : " << elemento->getValorMinimo().getValorMinimo() << endl << endl;
        }
    }
    return true;
}

/*
bool ContainerProduto::pesquisarAplicacao(Produto* produto){
    for(list<Produto>::iterator elemento = container.begin(); elemento != container.end(); elemento++){
        if (elemento->getCodigoProduto().getCodigoProduto() == produto->getCodigoProduto().getCodigoProduto()){
            // Copia dados do objeto localizado.
            produto->setClasse(elemento->getClasse());
            produto->setEmissor(elemento->getEmissor());
            produto->setPrazo(elemento->getPrazo());
            produto->setData(elemento->getData());
            produto->setTaxa(elemento->getTaxa());
            produto->setHorario(elemento->getHorario());
            produto->setValorMinimo(elemento->getValorMinimo());

            return true;
        }
    }
    return false;
}
*/

// Containers Conta

ContainerConta* ContainerConta::getInstancia() {
    if (instancia == nullptr)
        instancia = new ContainerConta();
    return instancia;
}

bool ContainerConta::incluir(Conta conta){
    for(list<Conta>::iterator elemento = container.begin(); elemento != container.end(); elemento++){
        if (elemento->getCodigoBanco().getCodigoBanco() == conta.getCodigoBanco().getCodigoBanco()){
            if(elemento->getCodigoAgencia().getCodigoAgencia() == conta.getCodigoAgencia().getCodigoAgencia()){
                if(elemento->getNumero().getNumero() == conta.getNumero().getNumero()){
                    return false;
                }
            }
        }
    }
    // Inclui objeto.
    container.push_back(conta);
    return true;
}


bool ContainerConta::remover(Conta conta){
    for(list<Conta>::iterator elemento = container.begin(); elemento != container.end(); elemento++){
        if (elemento->getCodigoBanco().getCodigoBanco() == conta.getCodigoBanco().getCodigoBanco()){
            if(elemento->getCodigoAgencia().getCodigoAgencia() == conta.getCodigoAgencia().getCodigoAgencia()){
                if(elemento->getNumero().getNumero() == conta.getNumero().getNumero()){
                    // Remove objeto localizado.
                    container.erase(elemento);
                    return true;
                }
            }
        }
    }
    return false;
}

bool ContainerUsuario::pesquisarConta(Conta* conta, Cpf cpf){
    for(list<Usuario>::iterator elemento = container.begin(); elemento != container.end(); elemento++){
        if(elemento->getCpf().getCpf() == cpf.getCpf()){
            conta->setCodigoAgencia(elemento->getConta()->getCodigoAgencia());
            conta->setCodigoBanco(elemento->getConta()->getCodigoBanco());
            conta->setNumero(elemento->getConta()->getNumero());
        }
        return true;
    }
    return false;
}
