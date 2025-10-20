#include <iostream>
#include <math.h>

int main() {
    int n;
    std::cout << "Введите количество чисел в последовательности: "<< std::endl;
    std::cin >> n;
    float A[n]; 
    std::cout << "Введите " << n << " вещественных чисел:" << std::endl;
    
    for (int i = 0; i < n; i++) {
        std::cin >> A[i];
    }
    float umnozenie = 1.0;
    float min_A = 0.0;
    int num_min = 0;
    
    for (int i=0; i<n; i++){
        if (A[i]<0 && fabs(A[i] - (int)A[i])>0.0000001){
            umnozenie=umnozenie*A[i];
            if (min_A>A[i]){
                min_A=A[i];
                num_min=i;
            }
        }
    }
    std::cout<<"Произведение чисел "<<umnozenie<<std::endl;
    std::cout<<"Минимальное из чисел "<<min_A<<std::endl;
    std::cout<<"Индекс минимального числа "<<num_min<<std::endl;
    
    return 0;
}