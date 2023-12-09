#include <iostream>
#include <string> 


int dec_to_bin(int n){
    int x = 1;
    int ans = 0;
    while(x <= n){
        x *= 2;
    }
    x /= 2;
    while(x > 0){
        int last_digit = n / x;
        n -= last_digit * x;
        x /= 2;
        ans = ans * 10 + last_digit;
    }
    return ans;
}



int dec_to_oct(int n){
    int x = 1;
    int ans = 0;
    while(x <= n){
        x *= 8;
    }
    x /= 8;
    while(x > 0){
        int last_digit = n / x;
        n -= last_digit * x;
        x /= 8;
        ans = ans * 10 + last_digit;
    }
    return ans;
}

std::string dec_to_hex(int n){
    int x = 1;
    std::string ans = "";
    while(x <= n){
        x *= 16;
    }
    x /= 16;
    while(x > 0){
        int last_digit = n / x;
        n -= last_digit * x;
        x /= 16;
        if(last_digit <= 9){
            ans = ans + std::to_string(last_digit);
        }
        else{
            char c = 'A' + last_digit - 10;
            ans.push_back(c);
        }
    }
    return ans;
}