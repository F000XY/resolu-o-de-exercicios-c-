#include<stdio.h>
#include <iostream>
using namespace std;

int soma(int somaA, int somaB){
    return somaA + somaB;
}

int main(){
    int a = 20;
    int b = 50;
    int c = soma(a,b);
    // std::cout << c;
    printf("%i",c);
    return 0;
}
