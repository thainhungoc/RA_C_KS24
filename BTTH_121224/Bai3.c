#include <stdio.h>
int main(){
  int luaChon;
  float soTien, usd, eur, gbp, jpy;
  printf("=============CHUONG TRINH CHUYEN DOI TIEN TE============\n");
  printf("1. USD to VND\n");
  printf("2. EUR to VND\n");
  printf("3. GBP to VND\n");
  printf("4. JPY to VND\n");
  printf("5. VND to USD\n");
  printf("6. VND to EUR\n");
  printf("7. VND to GBP\n");
  printf("8. VND to JPY\n");
  printf("============================\n");
  printf("Vui long nhap lua chon tu 1 - 8\n");
  scanf("%d", &luaChon);

  printf("Nhap so tien can chuyen doi: ");
  scanf("%f", &soTien);

  switch (luaChon){
    case 1:
      usd = soTien * 25395.99;
      printf("%.2f USD = %.2f VND\n", soTien, usd);
      break;
    case 2:
      eur = soTien * 26668;
      printf("%.2f EUR = %.2f VND\n", soTien, eur);
      break;
    case 3:
      gbp = soTien * 32454.95;
      printf("%.2f GBP = %.2f VND\n", soTien, gbp);
      break;
    case 4:
      jpy = soTien * 166.66;
      printf("%.2f JPY = %.2f VND\n", soTien, jpy);
      break;
    case 5:
      usd = soTien / 25395.99;
      printf("%.2f VND = %.2f USD\n", soTien, usd);
      break;
    case 6:
      eur = soTien / 26668;
      printf("%.2f VND = %.2f EUR\n", soTien, eur);
      break;
    case 7:
      gbp = soTien / 32454.95;
      printf("%.2f VND = %.2f GBP\n", soTien, gbp);
      break;
    case 8:
      jpy = soTien / 166.66;
      printf("%.2f VND = %.2f JPY\n", soTien, jpy);
      break;
    default:
      printf("Lua chon khong hop le");
      break;
  }
  return 0;
}