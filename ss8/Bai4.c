#include <stdio.h>

int main() {
    int arr[3][4] = {
        {5, 2, 9, 1},
        {7, 3, 8, 4},
        {6, 11, 13, 10}
    };
    int hang = 3;
    int cot = 4;
    
    int max = arr[0][0];
        for(int i = 0; i < hang; i++) {
        for(int j = 0; j < cot; j++) {
            if(arr[i][j] > max) {
                max = arr[i][j];
            }
        }
    }
    
    printf("Mang 2 chieu:\n");
    for(int i = 0; i < hang; i++) {
        for(int j = 0; j < cot; j++) {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
    
    printf("\nPhan tu lon nhat trong mang la: %d\n", max);
    
    return 0;
}