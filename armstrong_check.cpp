#include <iostream>
#include <math.h>
#include <stdbool.h>

bool armstrong_number_check(int n){
    int total = 0;
    while(n > 0){
        int last_digit = n % 10;
        total += pow(last_digit,3);
        n /= 10;
    }
    return (total == n) ? true : false;
}
