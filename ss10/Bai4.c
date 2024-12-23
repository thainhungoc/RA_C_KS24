#include <stdio.h>

void selectionSort(int arr[], int n) {
    int i, j, min, temp;
    
    for (i = 0; i < n - 1; i++) {
        min = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[min]) {
                min = j;
            }
        }
        temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }
}

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i;
    
    printf("Mảng ban đầu: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    selectionSort(arr, n);
    
    printf("\nMảng sau khi sắp xếp: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}