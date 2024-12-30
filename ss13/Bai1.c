#include <stdio.h>

#define MAX 100

void taoMaTran(int maTran[][MAX], int hang, int cot) {
    printf("Nhap gia tri cho ma tran:\n");
    for(int i = 0; i < hang; i++) {
        for(int j = 0; j < cot; j++) {
            printf("Nhap phan tu [%d][%d]: ", i, j);
            scanf("%d", &maTran[i][j]);
        }
    }

}


void hienThiMaTran(int maTran[][MAX], int hang, int cot) {
    printf("\nMa tran da nhap:\n");
    for(int i = 0; i < hang; i++) {
        for(int j = 0; j < cot; j++) {
            printf("%d\t", maTran[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int maTran[MAX][MAX];
    int hang, cot;

    printf("Nhap so hang: ");
    scanf("%d", &hang);
    printf("Nhap so cot: ");
    scanf("%d", &cot);

    if(hang <= 0 || cot <= 0 || hang > MAX || cot > MAX) {
        printf("So hang va so cot phai lon hon 0 va nho hon %d!\n", MAX);
        return 1;
    }

    taoMaTran(maTran, hang, cot);
    hienThiMaTran(maTran, hang, cot);
    
    return 0;
}