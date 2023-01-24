#include <stdio.h>
#include "hardware.h"

void func(int a, int b);

// --------------------- Main ------------------//
int main(void)
{

    func(1, 4);

    func(3, 18);

    func(3, 28);

    func(1, 28);
    
    return 0;
}

void func(int a, int b){
    int b_copy = b; 
    int a_copy = a;
    if(a > 2){
        b_copy++;
    } else{
        a_copy += b;
    }

    if(b < 20){
        a_copy -= 2;
    } else {
        b_copy += a_copy;
    }
}
