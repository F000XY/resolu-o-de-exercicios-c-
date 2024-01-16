#include <stdio.h>
#include <iostream>
int expressao(int a, int b, int c, int d, int e, int f){
    return a*b +(a-c) - d* 67 + 5 *e-f;
}
std::string verificacao(int positivoOuNegativo){
    if (positivoOuNegativo < 0)
    {
        printf("resultado negativo");
    }
    else
    {
        printf("resultado positivo");
    }
}
main(){
    int aA=10;
    int bB=40;
    int cC=78;
    int dD=908;
    int eE=1234;
    int fF=1;
    int resultado=expressao(aA,bB,cC,dD,eE,fF);
    std::cout<< "o resultado eh: "<<resultado << std::endl;
    std::string posiNeg=verificacao(resultado);
    std::cout<<posiNeg;
    return 0;
}