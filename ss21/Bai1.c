//một chuỗi bất kỳ do người dùng nhập vào từ bàn phím
#include <stdio.h>
#include <string.h>

int main() {
    FILE *fp;
    char str[100];
    
    fp = fopen("Bai1.txt", "w");
    
    if (fp == NULL) {
        printf("Khong the mo file\n");
        return 1;
    }
    
    printf("Nhap chuoi can ghi vao file: ");
    fgets(str, sizeof(str), stdin);
    
    fprintf(fp, "%s", str);
    fclose(fp);
    
    printf("Da ghi chuoi vao file thanh cong\n");
    
    return 0;
}