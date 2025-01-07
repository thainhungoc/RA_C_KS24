#include <stdio.h>
#include <stdlib.h>

#define MAX 100
/
void nhapMaTran(int a[][MAX], int n, int m) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            printf("Nhap phan tu [%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
}

void hienThiMaTran(int a[][MAX], int n, int m) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
}

void hienThiGoc(int a[][MAX], int n, int m) {
    printf("Phan tu goc trai tren: %d\n", a[0][0]);
    printf("Phan tu goc phai tren: %d\n", a[0][m-1]);
    printf("Phan tu goc trai duoi: %d\n", a[n-1][0]);
    printf("Phan tu goc phai duoi: %d\n", a[n-1][m-1]);
}

void hienThiBien(int a[][MAX], int n, int m) {
    printf("Bien tren: ");
    for(int j = 0; j < m; j++) printf("%d ", a[0][j]);
    printf("\nBien duoi: ");
    for(int j = 0; j < m; j++) printf("%d ", a[n-1][j]);
    printf("\nBien trai: ");
    for(int i = 0; i < n; i++) printf("%d ", a[i][0]);
    printf("\nBien phai: ");
    for(int i = 0; i < n; i++) printf("%d ", a[i][m-1]);
    printf("\n");
}

void hienThiDuongCheo(int a[][MAX], int n, int m) {
    printf("Duong cheo chinh: ");
    for(int i = 0; i < n && i < m; i++) {
        printf("%d ", a[i][i]);
    }
    printf("\nDuong cheo phu: ");
    for(int i = 0; i < n && i < m; i++) {
        printf("%d ", a[i][m-1-i]);
    }
    printf("\n");
}

int laSoNguyenTo(int n) {
    if(n < 2) return 0;
    for(int i = 2; i * i <= n; i++) {
        if(n % i == 0) return 0;
    }
    return 1;
}

void hienThiSoNguyenTo(int a[][MAX], int n, int m) {
    printf("Cac so nguyen to trong ma tran: ");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(laSoNguyenTo(a[i][j])) {
                printf("%d ", a[i][j]);
            }
        }
    }
    printf("\n");
}

int main() {
    int a[MAX][MAX], n, m, choice;
    
    printf("Nhap so hang n: ");
    scanf("%d", &n);
    printf("Nhap so cot m: ");
    scanf("%d", &m);
    
    if(n <= 0 || m <= 0 || n > MAX || m > MAX) {
        printf("Kich thuoc khong hop le!\n");
        return 1;
    }
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            a[i][j] = 0;
        }
    }

    do {
        printf("\nMENU\n");
        printf("1. Nhap gia tri cac phan tu cua mang\n");
        printf("2. In gia tri cac phan tu cua mang theo ma tran\n");
        printf("3. In ra cac phan tu o goc theo ma tran\n");
        printf("4. In ra cac phan tu nam tren duong bien theo ma tran\n");
        printf("5. In ra cac phan tu nam tren duong cheo chinh va cheo phu theo ma tran\n");
        printf("6. In ra cac phan tu la so nguyen to theo ma tran\n");
        printf("7. Thoat\n");
        printf("Chon chuc nang (1-7): ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                nhapMaTran(a, n, m);
                break;
            case 2:
                hienThiMaTran(a, n, m);
                break;
            case 3:
                hienThiGoc(a, n, m);
                break;
            case 4:
                hienThiBien(a, n, m);
                break;
            case 5:
                hienThiDuongCheo(a, n, m);
                break;
            case 6:
                hienThiSoNguyenTo(a, n, m);
                break;
            case 7:
                printf("Tam biet!\n");
                break;
            default:
                printf("Lua chon khong hop le!\n");
        }
    } while(choice != 7);

    return 0;
}