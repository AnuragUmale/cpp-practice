#include <iostream>
#include <unistd.h>

int sum_of_n_number(int n){
    int answer = (n * (n - 1)) / 2;
    return answer;
}