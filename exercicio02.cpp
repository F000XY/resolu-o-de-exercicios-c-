#include <iostream>
#include <stdio.h>
 int pedirParaImput(){
     std::cout<<"digite um numero: ";
     int num1{};
     std::cin>>num1;
     return num1;
 }
void mostarNumeros(int a, int b)
{ 
    if (a<b)
    {
        int inicio1=a;
        for (int a = inicio1; a < b; a++)
        { 
          std::cout<<a+1 <<" || ";
        }
    }

    if (a>b)
    {
        int inicio2=b;
        for (int b = inicio2; b < a; b++)
        {
          std::cout<<b+1 <<" || ";
        }
    }
   
}
main(){

    int testeA=pedirParaImput();
    int testeB=pedirParaImput();
    mostarNumeros(testeA,testeB);
    return 0;
}