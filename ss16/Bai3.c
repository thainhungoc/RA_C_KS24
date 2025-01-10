#include <stdio.h>

void tinhTong(int *a, int *b, int *ketQua) {
    *ketQua = *a + *b;
}

int main() {
    int so1 = 25;
    int so2 = 15;
    int ketQua = 0;
    
    printf("So thu nhat: %d\n", so1);
    printf("So thu hai: %d\n", so2);
    
    tinhTong(&so1, &so2, &ketQua);
    printf("Tong hai so la: %d", ketQua);
    
    return 0;
}