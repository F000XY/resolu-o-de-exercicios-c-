#include <iostream>

int pedirParaImput()
{
    std::cout<<"insira o valor da compra: ";
    int valor{};
    std::cin>>valor;
    return valor;
}
void condicao(int valor)
{
    if (valor>=100)
    {
        std::cout<<"VOCE TEVE FRETE GRATIS E 7 POR CENTO DE DESCONTO. ";
    }
    else if (valor<100 && valor>70)
    {
        std::cout<<"VOCE TEVE FRETE DE RS 10,00 E 6 POR CENTO DE DESCONTO. ";
    }
    else
    {
        std::cout<<"VOCE TEVE FRETE DE RS 10,00. ";
    }   
}
int main()
{
    condicao(pedirParaImput());
    return 0;
}