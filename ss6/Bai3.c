#include <stdio.h>
int main(){
  int pass = 123456;
  int num;
  printf("Vui long nhap mat khau gom 6 so:\n ");
  scanf("%d",&num);
  if(pass==num){
    printf("Mat khau dung");
  }else{
    printf("Sai mat khau");
  }
}
