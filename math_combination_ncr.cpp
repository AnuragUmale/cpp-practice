#include <iostream>

int factorial(int n){
    int fac = 1;
    for(int i = 2; i <= n; i++){
        fac *= i;
    }
    return fac;
}

int combination(int n, int r){
    int answer = factorial(n) / ( factorial(r) * factorial(n - r) );
    return answer;
}

void pascales_triangle(int n){
    for(int i = 0; i <= n; i++){
        for(int j = 0; j <= i; j++){
            std::cout<<combination(i,j)<<" ";
        }
        std::cout<<std::endl;
    }
}