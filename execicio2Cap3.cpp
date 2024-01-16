#include <iostream>
float pedirParaIpt()
{
    std::cout<<"Digite os graus para conversao: ";
    int graus{};
    std::cin>>graus;
    return graus;
}
float conversao(float graus)
{
    return graus*1.8+32;
}

int main()
{
    float teste{conversao(pedirParaIpt())};
    std::cout<<teste;
    return 0;
}