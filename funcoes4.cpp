#include <stdio.h>
#include <iostream>

std::string saudacao(int horas){
    if (horas<=12 && horas>=4)
    {
        printf("Bom dia");
    }
    else if (horas>=12 && horas<18)
    {
        return "Boa tarde";
    }
    else if (horas>=18 && horas==23)
    {
        return "Boa noite";
    }
    else if (horas<4 && horas==0)
    {
        return "Boa madrugada";
    }
    else if(horas>23 || horas<0)
    {
        return "numero invalido";
    }
}
int main(){
    int horarioDoDia= 13;
    std::string resultado= saudacao(horarioDoDia);
    std::cout << resultado << std::endl;

    return 0;
}
