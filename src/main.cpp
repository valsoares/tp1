#include <iostream>
#include <string>

using namespace std;

int main() {
    int x, h, m, vetor[6];
    string y, z, hora;
    char doispontos;
    bool valor = false;
    x = 10;
    y = "valesc66a";
    z = ".";

    int a = 12345;
    int i = 0;
    while(a > 0) {
    int b = a % 10;
    a /= 10;
    vetor[i] = b;
    cout << vetor <<endl;
    i++;
    }

    return 0;
}