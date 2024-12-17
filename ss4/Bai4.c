#include <stdio.h>

int main() {
  int month;
      printf("Nhap tháng mà ban muon kiem tra(1-12): ");
  scanf("%d", &month);

        switch(month) {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        printf("Thang %d co 31 ngay.\n", month);
    break;

      case 2:
          printf("Thang 2 co 28 hoac 29 ngay\n");
      break;

    case 4:
    case 6:
    case 9:
    case 11:
        printf("Thang %d co 30 ngay.\n", month);
    break;

   default:
      printf("So thang %d khong hop le. Vui long nhap so thang tu 1-12.\n", month);
  }

  return 0;
}