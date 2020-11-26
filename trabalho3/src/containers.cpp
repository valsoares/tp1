#include "containers.h"

ContainerUsuario* ContainerUsuario::instancia = nullptr;

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

bool ContainerUsuario::pesquisar(Usuario* usuario){
    for(list<Usuario>::iterator elemento = container.begin(); elemento != container.end(); elemento++){
        if (elemento->getCpf().getCpf() == usuario->getCpf().getCpf()){
            // Copia dados do objeto localizado.
            usuario->setEndereco(elemento->getEndereco());
            usuario->setCep(elemento->getCep());
            usuario->setSenha(elemento->getSenha());

            return true;
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


