#include <stdio.h>
int main( ){
    int numbers[5];
    int soChan = 0;
    int soLe = 0;
    printf("Vui long nhap 5 so nguyen:\n");
    for (int i = 0; i < 5; i++) {
        printf("Nhap so thu %d: ", i + 1);
        scanf("%d", &numbers[i]);

        if (numbers[i] % 2 == 0) {
            soChan++;
        } else {
            soLe++;
        }
    }
    printf("\nSo luong so chan: %d", soChan);
    printf("\nSo luong so le: %d", soLe);
    return 0;
}