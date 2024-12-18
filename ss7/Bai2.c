#include <stdio.h>
int main (){
    int numbers[5];
    printf("Vui long nhap 5 so nguyen\n");
    for (int i = 0; i < 5; i++) {
        printf("Nhap so thu %d: ", i + 1);
        scanf("%d", &numbers[i]);

    }

    printf("Cac phan tu trong mang la: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", numbers[i]);
    }

}