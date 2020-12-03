#include <string>
#include <stdexcept>
#include <iostream>

#include "builders.h"
#include "controladorasapresentacao.h"

using namespace std;

int main(){

    // Instancia Builder.

    BuilderSistema *builder;
    builder = new BuilderSistema();

    // Constroi sistema.

    CntrApresentacaoControle *cntrApresentacaoControle;
    cntrApresentacaoControle = builder->construir();

    // Solicita servi�o de apresentacao.

    cntrApresentacaoControle->executar();

    // Destroi builder.

    delete builder;

    return 0;

}
