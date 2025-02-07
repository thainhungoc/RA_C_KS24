//Tạo file Bai6.txt, xây dựng chương trình để sao chép nội dung từ file Bai1.txt sang file Bai6.txt

#include <stdio.h>

int main() {
    FILE *sourceFile, *destFile;
    char ch;

    // Mở file B1 để đọc
    sourceFile = fopen("Bai1.txt", "r");
    if (sourceFile == NULL) {
        printf("Khong the mo file nguon Bai1.txt!\n");
        return 1;
    }

    // Mở file B6 để ghi
    destFile = fopen("Bai6.txt", "w");
    if (destFile == NULL) {
        printf("Khong the tao file dich Bai6.txt!\n");
        fclose(sourceFile);  // Đóng file B1 nếu không tạo được file B6
        return 1;
    }

    // Sao chép từng ký tự từ file B1 sang file B6
    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, destFile);
    }

    // Đóng cả hai file
    fclose(sourceFile);
    fclose(destFile);

    printf("Da sao chep noi dung tu file Bai1.txt sang file Bai6.txt thanh cong!\n");

    return 0;
}