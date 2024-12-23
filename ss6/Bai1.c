#include <stdio.h>

int main() {
    int numbers[5];
    int sum = 0;

    printf("Vui long nhap 5 so nguyen:\n");
    for (int i = 0; i < 5; i++) {
        printf("Nhap so thu %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    for (int i = 0; i < 5; i++) {
        if (numbers[i] % 2 != 0) {
            sum += numbers[i];
        }
    }

    printf("\nTong cac so le la: %d\n", sum);
    return 0;
}