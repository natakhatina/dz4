#include <iostream>
#include "headers/classP.h"

int main() {
    int a=3;
    float b=4.5;
    double c=6.7;
    std::cout <<"a:"<<&a<<"  b:"<<&b<<"  c:"<<&c<< std::endl;
    int* pa=&a;
    float* pb=&b;
    double* pc=&c;
    std::cout <<"a:"<<pa<<"  b:"<<pb<<"  c:"<<pc<< std::endl;
    int * p;
    *p=a;
    std::cout <<"a:"<<*p<<std::endl;
    *p=(int)b;
    //p=(int*)&b;
    std::cout <<"b:"<<*p<<std::endl;
    *p=(int)c;
    std::cout <<"c:"<<*p<<std::endl;
    return 0;
}