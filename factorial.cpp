#include <iostream>

int factorial(int n){
    int fac = 1;
    for(int i = 2; i <= n; i++){
        fac *= i;
    }
    return fac;
}