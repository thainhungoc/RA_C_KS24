#include <stdio.h>
#include <string.h>

int main() {
    char input[] = "happy new year";

    char str;
    printf("Nhập vào một ký tự: ");
    scanf(" %c", &str);

    int count = 0;
    for (size_t i = 0; i < strlen(input); i++) {
        if (input[i] == str) {
            count++;
        }
    }

    printf("Ký tự '%c' xuất hiện %d lần trong chuỗi.\n", str, count);

    return 0;
}