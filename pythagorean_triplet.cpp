#include <iostream>

bool check_pythagorean_triplet(int x, int y, int z){
    int a = std::max(x, std::max(y , z));
    int b = 0;
    int c = 0;
    if(a == x){
        b = y;
        c = z;
    }
    else if(a == y){
        b = x;
        c = z;
    }
    else{
        b = x;
        c = y;
    }
    return ((b * b )+ (c * c)) == (a * a);
}