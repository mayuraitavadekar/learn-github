#include<stdio.h>

void add(int a, int b) {
    int c;
    c = a + b;
    printf("addition is = ", c);
}

int main () {
    printf("hello world.");

    add();

    return 0;
}