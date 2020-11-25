#include<stdio.h>

void subtract (int a, int b) {
    int c;
    c = a-b;
    printf("subtraction is = %d", c);
}

int main () {
    printf("hello world. please do not add this line.");

    subtract(20,30);
    return 0;
}