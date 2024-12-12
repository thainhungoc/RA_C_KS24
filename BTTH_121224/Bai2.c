#include <stdio.h>
int main(){
  int soGioLam;
  int mucLuongTheoGio;
  int luongCoBan;
  int phuCap;
  int tongTien;
  printf("Nhap so gio lam trong thang: \n");
  scanf("%d", &soGioLam);
  printf("Nhap muc luong theo gio: \n");
  scanf("%d", &mucLuongTheoGio);
  luongCoBan = soGioLam * mucLuongTheoGio;
  if(soGioLam > 160){
    phuCap = (luongCoBan/10);
    printf("Phu cap trong trong thang = %d\n", phuCap);
  }else{
    printf("Khong co tien phu cap\n");
  }
  tongTien = luongCoBan + phuCap;
  printf("Muc luong co ban la %d\n", luongCoBan);
  printf("Tong tien trong thang = %d\n", tongTien);


}