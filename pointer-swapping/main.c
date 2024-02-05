/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

// C program to swap two numbers using pointers
#include <stdio.h>

int main() {

    int *a1, *b2,a=10, b=20, temp;
    a1 = &a;
    b2 = &b;
    
    printf("\nBefore swapping a = %d and b = %d", a, b);
    
    
    temp = *a1;
    *a1 = *b2;
    *b2 = temp;

    printf("\nAfter swapping a = %d and b = %d", a, b);

    return 0;

}

