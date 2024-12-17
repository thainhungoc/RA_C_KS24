#include <stdio.h>
int main(){
  int n;
  printf("Nhap vao 1 so: \n");
  scanf("%d", &n);
  if(n >= 0 ){
    printf("So %d la so nguyen duong", n);
  }else{
    printf("So %d la so nguyen am", n);
  }
}