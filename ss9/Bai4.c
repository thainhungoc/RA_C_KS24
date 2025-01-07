#include <stdio.h>
void nhapMang(int arr[], int *n) {
   do {
       printf("Nhap so phan tu cua mang (0 < n <= 100): ");
       scanf("%d", n);
       if(*n <= 0 || *n > 100) {
           printf("So phan tu khong hop le. Vui long nhap lai!\n");
       }
   } while(*n <= 0 || *n > 100);
   
   for(int i = 0; i < *n; i++) {
       printf("Nhap phan tu thu %d: ", i + 1);
       scanf("%d", &arr[i]);
   }
}

void hienThiMang(int arr[], int n) {
   if(n == 0) {
       printf("Mang rong!\n");
       return;
   }
   printf("Cac phan tu trong mang:\n");
   for(int i = 0; i < n; i++) {
       printf("%d ", arr[i]);
   }
   printf("\n");
}

void themPhanTu(int arr[], int *n) {
   int value, position;
   
   printf("\nNhap gia tri muon them: ");
   scanf("%d", &value);
   
   do {
       printf("Nhap vi tri muon them (0 <= position <= %d): ", *n);
       scanf("%d", &position);
       if(position < 0 || position > *n) {
           printf("Vi tri khong hop le. Vui long nhap lai!\n");
       }
   } while(position < 0 || position > *n);
   
   for(int i = *n; i > position; i--) {
       arr[i] = arr[i-1];
   }
   arr[position] = value;
   (*n)++;
   printf("Da them phan tu thanh cong!\n");
}

void suaPhanTu(int arr[], int n) {
   if(n == 0) {
       printf("Mang rong!\n");
       return;
   }
   
   int position, value;
   do {
       printf("Nhap vi tri can sua (0 -> %d): ", n - 1);
       scanf("%d", &position);
       if(position < 0 || position >= n) {
           printf("Vi tri khong hop le. Vui long nhap lai!\n");
       }
   } while(position < 0 || position >= n);
   
   printf("Nhap gia tri moi: ");
   scanf("%d", &value);
   
   arr[position] = value;
   printf("Da sua phan tu thanh cong!\n");
}

void xoaPhanTu(int arr[], int *n) {
   if(*n == 0) {
       printf("Mang rong!\n");
       return;
   }
   
   int position;
   do {
       printf("Nhap vi tri can xoa (0 -> %d): ", *n - 1);
       scanf("%d", &position);
       if(position < 0 || position >= *n) {
           printf("Vi tri khong hop le. Vui long nhap lai!\n");
       }
   } while(position < 0 || position >= *n);
   
   for(int i = position; i < *n - 1; i++) {
       arr[i] = arr[i + 1];
   }
   (*n)--;
   printf("Da xoa phan tu thanh cong!\n");
}

int main() {
   int arr[100];
   int n = 0;
   int luaChon;
   
   do {
       printf("\nMENU\n");
       printf("1. Nhap vao mang\n");
       printf("2. Hien thi mang\n");
       printf("3. Them phan tu\n");
       printf("4. Sua phan tu\n");
       printf("5. Xoa phan tu\n");
       printf("6. Thoat\n");
       printf("Lua chon cua ban: ");
       scanf("%d", &luaChon);
       
       switch(luaChon) {
           case 1:
               nhapMang(arr, &n);
               break;
           case 2:
               hienThiMang(arr, n);
               break;
           case 3:
               themPhanTu(arr, &n);
               break;
           case 4:
               suaPhanTu(arr, n);
               break;
           case 5:
               xoaPhanTu(arr, &n);
               break;
           case 6:
               printf("Tam biet!\n");
               break;
           default:
               printf("Lua chon khong hop le!\n");
       }
   } while(luaChon != 6);
   
   return 0;
}