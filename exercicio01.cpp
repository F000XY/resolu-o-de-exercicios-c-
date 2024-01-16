#include <iostream>
#include <stdio.h>
int ImprimirNumeros(int num)
{
    int count=101;
    for (int num = 0; num < count; num++)
    {
        if (num%2==0)
        {
            std::cout<<num <<",";
        }
        
    }
    return num;
}

int main()
{
    int teste=0;
    int teste2= ImprimirNumeros(teste);
    std::cout<<teste2;
return 0;
}