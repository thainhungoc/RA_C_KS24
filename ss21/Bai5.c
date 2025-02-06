//xây dựng chương trình để người dùng nhập vào số dòng, nội dung từng dòng.
// Ghi vào file nội dung vừa nhập theo từng dòng, sau khi nhập xong thì in nội dung file ra màn hình theo từng dòng.
#include <stdio.h>

int main() {
    FILE *fp;
    char line[1000];
    int numLines;
    
    printf("Nhap so dong can ghi vao file: ");
    scanf("%d", &numLines);
    getchar();
    
    fp = fopen("Bai5.txt", "w");
    if (fp == NULL) {
        printf("Khong the mo file de ghi!\n");
        return 1;
    }
    
    printf("\n=== NHAP NOI DUNG ===\n");
    for(int i = 0; i < numLines; i++) {
        printf("Nhap dong thu %d: ", i + 1);
        fgets(line, sizeof(line), stdin);
        fprintf(fp, "%s", line);
    }
    
    fclose(fp);
    
    fp = fopen("Bai5.txt", "r");
    if (fp == NULL) {
        printf("Khong the mo file de doc!\n");
        return 1;
    }
    
    // Đọc và in nội dung file
    printf("\n=== NOI DUNG FILE ===\n");
    int lineCount = 1;
    while(fgets(line, sizeof(line), fp) != NULL) {
        printf("Dong %d: %s", lineCount, line);
        lineCount++;
    }
    
    fclose(fp);
    
    return 0;
}