#include <stdio.h>
int main() {
    int number, i;
    printf("Nhap mot so nguyen duong: ");
    scanf("%d", &number);

    if (number <= 0) {
        printf("Vui long nhap mot so nguyen duong\n");
        return 1;
    }
    printf("Cac uoc cua so %d la:\n", number);

    for (i = 1; i <= number; i++) {
        if (number % i == 0) {
            printf("%d ", i);
        }
    }
    return 0;
}