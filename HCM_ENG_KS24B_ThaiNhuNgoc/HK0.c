#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_SIZE 100

void inputArray(int arr[], int *n);
void displayArray(int arr[], int n);
int isPerfectNumber(int num);
int countPerfectNumbers(int arr[], int n);
int findSecondValue(int arr[], int n);
void insertAtPosition(int arr[], int *n);
void deleteAtPosition(int arr[], int *n);
void insertionSort(int arr[], int n);
int binarySearch(int arr[], int n, int x);
void sortEvenOdd(int arr[], int n);
void reverseArray(int arr[], int n);

int main() {
    int arr[MAX_SIZE], n = 0, choice, searchValue, result;

    do {
        printf("\n========================= MENU ================================\n");
        printf("1. Nhap mang\n");
        printf("2. In mang\n");
        printf("3. Dem so hoan hao\n");
        printf("4. Tim gia tri lon thu 2\n");
        printf("5. Them phan tu vao vi tri\n");
        printf("6. Xoa phan tu tai vi tri\n");
        printf("7. Sap xep mang (Insertion sort)\n");
        printf("8. Tim kiem nhi phan\n");
        printf("9. Sap xep chan le\n");
        printf("10. Dao nguoc mang\n");
        printf("11. Thoat\n");
        printf("Chon chuc nang: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                inputArray(arr, &n);
                break;
            case 2:
                displayArray(arr, n);
                break;
            case 3:
                printf("So luong so hoan hao: %d\n", countPerfectNumbers(arr, n));
                break;
            case 4:
                result = findSecondValue(arr, n);
                if(result != -1)
                    printf("Gia tri lon thu 2: %d\n", result);
                break;
            case 5:
                insertAtPosition(arr, &n);
                break;
            case 6:
                deleteAtPosition(arr, &n);
                break;
            case 7:
                insertionSort(arr, n);
                printf("Da sap xep mang\n");
                break;
            case 8:
                printf("Nhap gia tri can tim: ");
                scanf("%d", &searchValue);
                result = binarySearch(arr, n, searchValue);
                if(result != -1)
                    printf("Tim thay tai vi tri %d\n", result);
                else
                    printf("Khong tim thay gia tri\n");
                break;
            case 9:
                sortEvenOdd(arr, n);
                printf("Da sap xep chan le\n");
                break;
            case 10:
                reverseArray(arr, n);
                printf("Da dao nguoc mang\n");
                break;
            case 11:
                printf("Thoat khoi chuong trinh\n");
                break;
            default:
                printf("Lua chon khong hop le!\n");
        }
    } while(choice != 0);

    return 0;
}

void inputArray(int arr[], int *n) {
    printf("Nhap so phan tu: ");
    scanf("%d", n);

    if(*n > MAX_SIZE) {
        printf("Vuot qua kich thuoc toi da!\n");
        return;
    }

    for(int i = 0; i < *n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
}

void displayArray(int arr[], int n) {
    printf("Mang: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int isPerfectNumber(int num) {
    if(num <= 1) return 0;
    int sum = 1;
    for(int i = 2; i * i <= num; i++) {
        if(num % i == 0) {
            sum += i;
            if(i * i != num) {
                sum += num / i;
            }
        }
    }
    return sum == num;
}

int countPerfectNumbers(int arr[], int n) {
    int count = 0;
    for(int i = 0; i < n; i++) {
        if(isPerfectNumber(arr[i])) {
            count++;
        }
    }
    return count;
}

int findSecondValue(int arr[], int n) {
    if(n < 2) {
        printf("Mang qua ngan!\n");
        return -1;
    }

    int max = arr[0], second = -1;
    for(int i = 1; i < n; i++) {
        if(arr[i] > max) {
            second = max;
            max = arr[i];
        } else if(arr[i] < max && arr[i] > second) {
            second = arr[i];
        }
    }
    return second;
}

void insertAtPosition(int arr[], int *n) {
    if(*n >= MAX_SIZE) {
        printf("Mang da day!\n");
        return;
    }

    int pos, value;
    printf("Nhap vi tri can them: ");
    scanf("%d", &pos);
    printf("Nhap gia tri can them: ");
    scanf("%d", &value);

    if(pos < 0 || pos > *n) {
        printf("Vi tri khong hop le!\n");
        return;
    }

    for(int i = *n; i > pos; i--) {
        arr[i] = arr[i-1];
    }
    arr[pos] = value;
    (*n)++;
}

void deleteAtPosition(int arr[], int *n) {
    if(*n == 0) {
        printf("Mang rong!\n");
        return;
    }

    int pos;
    printf("Nhap vi tri can xoa: ");
    scanf("%d", &pos);

    if(pos < 0 || pos >= *n) {
        printf("Vi tri khong hop le!\n");
        return;
    }

    for(int i = pos; i < *n - 1; i++) {
        arr[i] = arr[i+1];
    }
    (*n)--;
}

void insertionSort(int arr[], int n) {
    int i, key, j;
    for(i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
        while(j >= 0 && arr[j] > key) {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}

int binarySearch(int arr[], int n, int x) {
    int left = 0, right = n - 1;
    while(left <= right) {
        int mid = (left + right) / 2;
        if(arr[mid] == x) return mid;
        if(arr[mid] < x)
            left = mid + 1;
        else right = mid - 1;
    }
    return -1;
}

void sortEvenOdd(int arr[], int n) {
    for(int i = 0; i < n-1; i++) {
        for(int j = i+1; j < n; j++) {
            if(arr[i] % 2 == 0 && arr[j] % 2 == 0 && arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for(int i = 0; i < n-1; i++) {
        for(int j = i+1; j < n; j++) {
            if(arr[i] % 2 != 0 && arr[j] % 2 != 0 && arr[i] < arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void reverseArray(int arr[], int n) {
    for(int i = 0; i < n/2; i++) {
        int temp = arr[i];
        arr[i] = arr[n-1-i];
        arr[n-1-i] = temp;
    }
}