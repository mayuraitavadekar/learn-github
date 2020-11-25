#include<stdio.h>

void subtract (int a, int b) {
    int c;
    c = a-b;
    printf("subtraction is = %d", c);
}

void multiply(int a, int b) {
    int c;
    c = a * b;
    printf("multiplication is = %d",c);
}

void add(int a, int b) {
    int c;
    c = a + b;
    printf("addition is = ", c);
}

int main () {
    printf("hello world. please do not add this line.");

    subtract(20,30);
  
    multiply(5,2);

    add(10,2);
  
    return 0;
}
