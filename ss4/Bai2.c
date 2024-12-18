#include <stdio.h>
int main(){
    int number;
    printf("Nhap vao 1 so: \n");
    scanf("%d", &number);
    if(number % 2 == 0 ){
        printf("So %d la so chan", number);
    }else{
        printf("So %d la so le", number);
    }
}