#include <stdio.h>
int main() {
    double old, new, money;
    printf("Nhap chi so cong to dien dau thang: ");
    scanf("%lf", &old);
    printf("Nhap chi so cong to dien cuoi thang: ");
    scanf("%lf", &new);
    money = new - old;
    if (money >= 0 && money < 50) {
        printf("Tien dien tieu thu trong thang la 10000");
    } else if (money >= 50 && money < 100) {
        printf("Tien dien tieu thu trong thang la 15000");
    } else if (money >= 100 && money < 150) {
        printf("Tien dien tieu thu trong thang la 20000");
    } else if (money >= 150 && money < 200) {
        printf("Tien dien tieu thu trong thang la 25000");
    } else if (money >= 200) {
        printf("Tien dien tieu thu trong thang la 30000");
    }
    return 0;
}