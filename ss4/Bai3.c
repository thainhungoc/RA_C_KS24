#include <stdio.h>
int main(){
    int n;
    printf("Hay nhap so: ");
    scanf("%d", &n);
    if(n%3 ==0 && n%5 ==0) {
        printf("So nay chia het cho 3 va 5 ");
    } else {
        printf("So nay khong chia het cho 3 va 5 ");
    }
}