#include <iostream>
#include <utility>

std::pair<int, int> restoResultado(int a, int b) {
    int resultado = a / b;
    int resto = a % b;
    return std::make_pair(resultado, resto);
}

int main() {
    int teste = 5;
    int teste0 = 5;
    std::pair<int, int> testeResultado = restoResultado(teste, teste0);
    std::cout << "Divisao: " << testeResultado.first << std::endl;
    std::cout << "Resto: " << testeResultado.second << std::endl;
    return 0;
}