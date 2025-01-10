#include <stdio.h>

int main() {
    int arr[100];
    int n, i;
    
    do {
        printf("Nhap so phan tu cua mang (0 < n <= 100): ");
        scanf("%d", &n);
        if(n <= 0 || n > 100) {
            printf("So phan tu khong hop le. Vui long nhap lai!\n");
        }
    } while(n <= 0 || n > 100);
    
    for(i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    
    printf("\nMang ban dau:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    int value, position;
    
    printf("\n\nNhap gia tri muon chen: ");
    scanf("%d", &value);
    
    do {
        printf("Nhap vi tri muon chen (0 <= position <= %d): ", n);
        scanf("%d", &position);
        if(position < 0 || position > n) {
            printf("Vi tri khong hop le. Vui long nhap lai!\n");
        }
    } while(position < 0 || position > n);
    
    for(i = n; i > position; i--) {
        arr[i] = arr[i-1];
    }
    
    arr[position] = value;
    n++;
    
    printf("\nMang sau khi chen:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}