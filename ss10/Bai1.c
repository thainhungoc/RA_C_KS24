#include <stdio.h>

int main() {
    int arr[] = {1,3,5,7,9,2,4,6,8,10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x;
    int found = 0;

    printf("Mang ban dau la: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("Nhap phan tu can tim: ");
    scanf("%d", &x);

    printf("Vi tri cua phan tu %d trong mang la: ", x);
    for(int i = 0; i < n; i++) {
        if(arr[i] == x) {
            printf("%d ", i);
            found = 1;
        }
    }

    if(!found) {
        printf("Khong tim thay phan tu %d trong mang", x);
    }

    return 0;
}