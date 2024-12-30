#include <stdio.h>

int timUCLN(int a, int b) {
    if (a < 0) a = -a;
    if (b < 0) b = -b;
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int so1, so2;
    
    printf("Nhap so thu nhat: ");
    scanf("%d", &so1);
    printf("Nhap so thu hai: ");
    scanf("%d", &so2);
    
    if (so1 == 0 && so2 == 0) {
        printf("UCLN khong xac dinh vi ca hai so deu bang 0!\n");
        return 1;
    }
    
    int ucln = timUCLN(so1, so2);
    printf("Uoc chung lon nhat cua %d va %d la: %d\n", so1, so2, ucln);
    
    return 0;
}