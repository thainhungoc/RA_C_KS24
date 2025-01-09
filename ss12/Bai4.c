#include <stdio.h>

int timSoLonNhat(int arr[], int n) {
    if (n <= 0) {
        printf("Mang rong!\n");
        return -1;
    }
    
    int max = arr[0];
    
    // tìm số lớn nhất
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    
    return max;
}
int main() {
    int arr[] = {5, 2, 9, 1, 7, 6, 8, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    int ketQua = timSoLonNhat(arr, n);
    
    if (ketQua != -1) {
        printf("So lon nhat trong mang la: %d\n", ketQua);
    }
    
    return 0;
}