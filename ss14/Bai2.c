#include <stdio.h>
#include <string.h>

int main() {
    char input[] = "Xin chao viet nam";

    printf("Các ký tự trong chuỗi: \n");
    for (size_t i = 0; i < strlen(input); i++) {
        printf("%c", input[i]);
        if (i < strlen(input) - 1) {
            printf(" ");
        }
    }
    printf("\n");

    return 0;
}
