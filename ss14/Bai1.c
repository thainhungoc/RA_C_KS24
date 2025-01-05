#include <stdio.h>
#include <string.h>

int main() {
    char input[100];

    printf("Nhập vào một chuỗi bất kỳ: ");
    fgets(input, sizeof(input), stdin);

    size_t length = strlen(input);
    if (length > 0 && input[length - 1] == '\n') {
        input[length - 1] = '\0';
        length--;
    }

    printf("Chuoi vua nhap: %s\n", input);
    printf("do dai cua chuoi: %zu\n", length);

    return 0;
}
