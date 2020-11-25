#include<stdio.h>


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
    printf("hello world.");
  
    multiply(5,2);

    add();
  
    return 0;
}