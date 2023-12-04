#include <iostream>
#include <math.h>

void fibonacci_sequence(int n){
    int term_1 = 0;
    int term_2 = 1;
    int next_term = 0;
    for(int i = 1; i <= n; i++){
        std::cout<<term_1<<std::endl;
        next_term = term_1 + term_2;
        term_1 = term_2;
        term_2 = next_term;
    }
}