#include <stdio.h>

void bubbleSort(int arr[], int n) {
    int i, j, temp;
    int swapped;
    
    for (i = 0; i < n - 1; i++) {
        swapped = 0;
           for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Hoán đổi nếu phần tử trước > phần tử sau
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1;
            }
        }
            if (swapped == 0)
            break;
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int arr[] = {3,7,13,30,20,70};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    printf("Mang ban dau: ");
    printArray(arr, n);
    bubbleSort(arr, n);
    printf("Mang sau khi sap xep: ");
    printArray(arr, n);
    
    return 0;
}