#include <iostream>
#include <math.h>
// v=(4*pi*r^3)/3


int pedirParaImput()
{
    std::cout<<"Digite um numero para calcular o raio de uma esfera: ";
    int numero{};
    std::cin>>numero;
    
    return numero;
}

int calcular(int raio)
{
    int volume = (4.0 / 3.0) * M_PI * pow(raio, 3);
    return volume;
}

int main()
{
    int testeA=pedirParaImput();
    int resultado=calcular(testeA);
    std::cout<<resultado;
    return 0;
}