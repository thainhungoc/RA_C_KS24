#include <stdio.h>
int main(){
  int arr[10]={2,4,6,8,10,1,3,5,7,9};
  int n = 10;
  int x;
  int find;
  printf("Nhap so can tim: ");
  scanf("%d",&x);

  for(int i=0;i<n;i++){
    if(arr[i]==x){
      printf("Vi tri phan tu trong mang la %d \n", i);
      find=i;
      break;
    }
  }
  if(find==0){
    printf("Phan tu khong co trong mang");
  }

  return 0;
}