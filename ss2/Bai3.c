#include <stdio.h>

int main() {
    int num1 = 15;
    int num2 = 25;
    int sum;
    sum = num1 + num2;
    int hieu;
    hieu= num2 - num1;
    int tich;
    tich= num1 * num2;
    float thuong;
    thuong= num2 / num1;


    printf("So thu nhat: %d\n", num1);
    printf("So thu hai: %d\n", num2);
    printf("Tong = %d\n", sum);
    printf("Hieu = %d\n", hieu);
    printf("Tich = %d\n", tich);
    printf("Thuong = %f\n", thuong);

    return 0;
}