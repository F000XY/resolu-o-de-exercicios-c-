#include <iostream>

int media(int a, int b, int c, int d)
{
    return (a+b+c+d)/4;
}

int main(){
    std::cout<<media(10,20,10,40);
    return 0;
}