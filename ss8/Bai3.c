#include <stdio.h>
int main(){
  int n;
  printf("Nhap kich thuoc: ");
  scanf("%d", &n);
  int arr[50][50];
  printf("Nhap cac phan tu cua mang %d%d: \n", n, n);
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      printf("mang [%d][%d] = ", i, j);
      scanf("%d", &arr[i][j]);

    }
  }
  printf("mang vua nhap la: \n");
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      printf("%d\t", arr[i][j]);
    }
    printf("\n");
  }
  return 0;
}