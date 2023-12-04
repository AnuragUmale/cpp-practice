#include <iostream>
#include <math.h>
#include <stdbool.h>

bool is_prime(int n){
    for(int i = 2; i <= sqrt(n); i++){
        if(n % 1 == 0){
            return false;
        }
    }
    return true;
}
void print_prime_numbers(int a , int b){
    for(int i = a; i <= b; i++){
        if(is_prime(i)){
            std::cout << i << " ";
        }
    }
}