#include <iostream>

//сначала задам все переменные, потом уже буду с ними работать
int main() {
    //целочисленные данные, unsigned - без знака
    char a1;
    unsigned char a2;
    short a3;
    unsigned short a4;
    int a5=-10;
    unsigned int a6=5;
    long long a7;
    unsigned long long a8;
    //вещественные
    float b1 = 3.14;
    double b2 = 3.1415;
    //логический, true/false
    bool c1;
    //символьный
    char d1 = 'a';
    //мин и макс знач, размер в байтах
    std::cout<<"Char, размер "<<sizeof(a1)<<" Минимальное значение - 128, максимальное - 127"<<std::endl;
    std::cout<<"Unsigned Char, размер "<<sizeof(a2)<<" Минимальное значение - 0, максимальное - 255"<<std::endl;
    std::cout<<"Short, размер "<<sizeof(a3)<<" Минимальное значение - -32768, максимальное - 37767"<<std::endl;
    std::cout<<"Unsigned Short, размер "<<sizeof(a4)<<" Минимальное значение - 0, максимальное - 65535"<<std::endl;
    std::cout<<"Int, размер "<<sizeof(a5)<<" Минимальное значение - -2^31, максимальное - 2^31-1"<<std::endl;
    std::cout<<"Unsigned Int, размер "<<sizeof(a6)<<" Минимальное значение - 0, максимальное - 2^32-1"<<std::endl;
    std::cout<<"Long long, размер "<<sizeof(a7)<<" Минимальное значение - нет, максимальное - нет"<<std::endl;
    std::cout<<"Unsigned Long long, размер "<<sizeof(a8)<<" Минимальное значение - нет, максимальное - нет"<<std::endl;
    std::cout<<"Float, размер "<<sizeof(b1)<<" Минимальное значение - 0?, максимальное - 7 значащих цифр"<<std::endl;
    std::cout<<"Double, размер "<<sizeof(b2)<<" Минимальное значение - 0?, максимальное - 15-16 значащих цифр"<<std::endl;
    std::cout<<"Bool, размер "<<sizeof(c1)<<" Может принимать только true/false"<<std::endl;
    std::cout<<"Char(строчный), размер "<<sizeof(d1)<<" Минимальное значение - 128, максимальное - 127???"<<std::endl;
    std::cout<<" "<<std::endl;
    std::cout<<"Арифмтеические операции производятся только над числами, т.е. логический тип не может участвовать"<<std::endl;
    std::cout<<"Арифметические операции: +,-,*,/,%,++,--"<<std::endl;
    std::cout<<"Пример операции с двумя целочисленными "<<a5+a6<<std::endl;
    std::cout<<"Пример операции с двумя вещесвтенными "<<b1-b2<<std::endl;
    std::cout<<"Пример операции с  вещ+целочисл "<<a6/b1<<std::endl;
    std::cout<<"Пример операции со строчными? "<<d1*2<<std::endl;
    return 0;
}