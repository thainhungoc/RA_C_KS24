#include <stdio.h>
#include <math.h>

int isArmstrong(int num) {
    int hangTram = num / 100;
    int hangChuc = (num % 100) / 10;
    int hangDonVi = num % 10;
    int sum = pow(hangTram, 3) + pow(hangChuc, 3) + pow(hangDonVi, 3);
    return (sum == num);
}
int main() {
    printf("Cac so Armstrong 3 chu so la:\n");
        for (int i = 100; i < 1000; i++) {
        if (isArmstrong(i)) {
            printf("%d ", i);
        }
    }
    
    return 0;
}