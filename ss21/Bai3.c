//xây dựng chương trình để ghi thêm vào file một chuỗi bất kỳ do người dùng nhập vào
#include <stdio.h>
#include <string.h>

int main() {
    FILE *fp;
    char str[100];
    
    fp = fopen("Bai1.txt", "a");
    
    if (fp == NULL) {
        printf("Khong the mo file!\n");
        return 1;
    }
    
    printf("Nhap chuoi can ghi them vao file: ");
    fgets(str, sizeof(str), stdin);
    
    fprintf(fp, "%s", str);
    fclose(fp);
    
    printf("Da ghi them chuoi vao file thanh cong!\n");
    
    return 0;
}