//ây dựng chương trình để in ra màn hình ký tự đầu tiên trong file
#include <stdio.h>

int main() {
    FILE *fp;
    char firstChar;
    
    fp = fopen("Bai1.txt", "r");
    if (fp == NULL) {
        printf("Khong the mo file!\n");
        return 1;
    }
    
    firstChar = fgetc(fp);
    
    if (firstChar != EOF) {
        printf("Ky tu dau tien trong file la: %c\n", firstChar);
    } else {
        printf("File rong hoac co loi khi doc file!\n");
    }
        fclose(fp);
    
    return 0;
}