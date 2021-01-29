#include <stdio.h>

int policz(int, int);

int main() {
    printf("Hello, World!\n");
    printf("%d\n", policz(5, 6));
    return 0;
}

int policz(int a, int b)
{
    return a * b;
}