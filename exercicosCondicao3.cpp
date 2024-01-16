#include <iostream>

int pedirParaImput()
{
    std::cout<<"Digite sua idade: ";
    int idade{};
    std::cin>>idade;

    std::cout<<"Digite o dia do seu nascimento: ";
    int dia{};
    std::cin>>dia;

    std::cout<<"Digite o mes do seu nascimento: ";
    int mes{};
    std::cin>>mes;

    std::cout<<"Digite o ano do seu nascimento: ";
    int ano{};
    std::cin>>ano;

    return idade, dia, mes, ano;
}
void verificacaoDeIdade(int idade)
{
    if (idade<18)
    {
        std::cout<<"Voce eh de menor. ";
    }
    else if (idade==18)
    {
        std::cout<<"Voce eh recem de maior. ";
    }
    else
    {
       std::cout<<"Voce eh de maior. ";
    }   
}
int main()
{
    int dados= pedirParaImput();
    verificacaoDeIdade(dados);

return 0;
}
