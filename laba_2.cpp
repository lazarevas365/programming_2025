#include <iostream>

int main(){
    int x;
    int y;
    int z;
    std::cout<<"Введите длину, высоту и ширину"<<std::endl;
    std::cin>>x>>y>>z;
    std::cout<<"Объём прямоугольного параллелепипеда равен "<<x*y*z<<std::endl;
    return 0;
}