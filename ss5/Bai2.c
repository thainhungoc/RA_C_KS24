#include <stdio.h>

int main() {
    int number = 42;
    int userInput;

    printf("Vui long nhap vao so %d de ket thuc chuong trinh.\n", number);
    do {
        printf("Vui long nhap mot so: ");
        scanf("%d", &userInput);
        if (userInput != number) {
            printf("So nhap ko dung , vui long nhap lai\n");
        }
    } while (userInput != number);
    printf("So dung\n", number);

    return 0;
}