#include <stdio.h>

int main() {
    int number;
    printf("Nhap 1 so nguyen duong tu 1-10: ");
    scanf("%d", &number);
    if (number < 1 || number > 10) {
        printf("Vui long nhap so tu 1-10\n");
        return 1;
    }
    printf("Bang cuu chuong %d:\n", number);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", number, i, number * i);
    }

    return 0;
}