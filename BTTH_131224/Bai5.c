#include <stdio.h>
int main(){
    int n,i;
    printf("nhap vao 1 so nguyen to: ");
    scanf("%d", &n);
    if (n < 2){
        printf("%d khong phai so nguyen to",n);
    }
    for(i = 2;i<=n-1;i++){      
        if (n % i==0){
            printf("%d khong phai so nguyen to",n);
            return 0;
        }
    }
    printf("%d la so nguyen to",n);
}
    