//xây dựng chương trình đọc dòng đầu tiên từ file.
#include <stdio.h>
#include <string.h>

int main() {
    FILE *fp;
    char line[1000];
    
    fp = fopen("Bai1.txt", "r");
    
    if (fp == NULL) {
        printf("Khong the mo file!\n");
        return 1;
    }
    
    if (fgets(line, sizeof(line), fp) != NULL) {
        printf("Dong dau tien trong file la: %s", line);
    } else {
        printf("File rong hoac co loi khi doc file!\n");
    }
    fclose(fp);
    
    return 0;
}