#include <iostream>
#include <string>

#include "dominios.h"
#include "testes.h"

using namespace std;

int main() {
    CodigoAgencia novo;
    novo.setCodigoAgencia("5555");
    cout << novo.getCodigoAgencia() << endl;
    novo.setCodigoAgencia("3");

    return 0;
}