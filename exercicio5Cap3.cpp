// area=(base*altura)/2
#include <iostream>
int pedirParaImput()
{
    std::cout<<"digite a base e apos a altura: ";
    int a{};
    std::cin>>a;
    return a;
}

int calcular(int a, int b)
{
    int area=(a*b)/2;
    return area;
}

int main()
{
    int teste=pedirParaImput();
    int teste0=pedirParaImput();
    int resultado=calcular(teste,teste0);
    std::cout<<resultado;
    return 0;
}