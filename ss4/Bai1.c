#include <stdio.h>
int main(){
  int number;
  printf("Nhap vao 1 so: \n");
  scanf("%d", &number);
  if(number >= 0 ){
    printf("So %d la so nguyen duong", number);
  }else{
    printf("So %d la so nguyen am", number);
  }
}