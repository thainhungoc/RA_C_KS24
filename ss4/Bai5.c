#include <stdio.h>

int main() {
    int a, b, c;
    printf("Nhap so thu nhat: ");
    scanf("%d", &a);
    
    printf("Nhap so thu hai: ");
    scanf("%d", &b);
    
    printf("Nhap so thu ba: ");
    scanf("%d", &c);
    
    if ((c >= a && c <= b) || (c >= b && c <= a)) {
        printf("So %d nam trong khoang giua %d va %d\n", c, a, b);
    } else {
        printf("So %d Khong nam trong khoang giua %d va %d\n", c, a, b);
    }
    
    return 0;
}