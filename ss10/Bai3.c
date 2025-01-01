#include <stdio.h>

void insertionSort(int arr[], int n) {
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        
        arr[j + 1] = key;
                printf("Buoc %d: ", i);
        for (int k = 0; k < n; k++) {
            printf("%d ", arr[k]);
        }
        printf("\n");
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int arr[] = {90,63,72,81,20,13,3};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    printf("Mang ban dau: ");
    printArray(arr, n);
    
    printf("\nCac buoc sap xep:\n");
    insertionSort(arr, n);
    
    printf("\nMang sau khi sap xep: ");
    printArray(arr, n);
    
    return 0;
}