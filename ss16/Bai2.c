#include <stdio.h>

void swapNumbers(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int num1 = 10;
    int num2 = 20;

    printf("Truoc khi doi gia tri");
    printf("\nnum1 = %d", num1);
    printf("\nnum2 = %d", num2);
    swapNumbers(&num1, &num2);

    printf("\n\nSau khi doi gia tri");
    printf("\nnum1 = %d", num1);
    printf("\nnum2 = %d", num2);

    return 0;
}