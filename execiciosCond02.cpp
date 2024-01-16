#include <iostream>
// qual numero eh maior
int pedirParaImput()
{
    std::cout<<"DIGITE UM NUMERO: ";
    int valor{};
    std::cin>>valor;
    return valor;
}
void verificar(int a, int b)
{
    if (a<b)
    {
        std::cout<<"o numero : "<< b <<"eh maior que o :"<< a;
    }
    else
    {
         std::cout<<"o numero : "<< a <<"eh maior que o :"<< b;
    }
    
}
int main()
{
    int teste=pedirParaImput();
    int teste1=pedirParaImput();   
    verificar(teste, teste1);
    return 0;
}