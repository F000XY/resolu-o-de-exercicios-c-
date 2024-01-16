#include <stdio.h>
#include<iostream>
int calculo(int a, int b, int c, int d){
    return (a+b) - (c+d);
}

int main(){
    int numeroA= 50;
    int numeroB= 60;
    int numeroC= 30;
    int numeroD= 20;
    int e= calculo(numeroA,numeroB,numeroC,numeroD);
    std::cout<<e;
    // or
    std::cout<<calculo(50,60,30,20);

    return 0;
}