#include <stdio.h>
int main(){
    int n;
    printf("Nhap vao 1 so: \n");
    scanf("%d", &n);
    if(n % 2 == 0 ){
        printf("So %d la so chan", n);
    }else{
        printf("So %d la so le", n);
    }
}