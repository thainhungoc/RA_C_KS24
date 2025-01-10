#include <stdio.h>

int main() {
    int arr[] = {3, 7, 2, 9, 4, 1, 8, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Mang ban dau:\n");
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    int position;
    do {
        printf("\nNhap vi tri can sua (0 -> %d): ", size - 1);
        scanf("%d", &position);

        if(position < 0 || position >= size) {
            printf("Vi tri khong hop le! Vui long nhap lai.\n");
        }
    } while(position < 0 || position >= size);

    int newValue;
    printf("Nhap gia tri moi: ");
    scanf("%d", &newValue);

    arr[position] = newValue;

    printf("\nMang sau khi sua:\n");
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}