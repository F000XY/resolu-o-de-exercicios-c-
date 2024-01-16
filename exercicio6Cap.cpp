#include <iostream>

int pedirParaImput(){
    std::cout<<"Digite a nota: ";
    int a{};
    std::cin>>a;
    return a;
}

int calcular(int a, int b, int c)
{
    int calculo= (a+b+c)/3;
    return calculo;
}

int main()
{
    int teste=pedirParaImput();
    int teste1=pedirParaImput();
    int teste2=pedirParaImput();
    int media=calcular(teste,teste1,teste2);
    std::cout<<"A media eh: "<<media;
}