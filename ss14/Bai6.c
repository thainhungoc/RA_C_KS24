#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char input[] = "Chuc mung nam moi ";
    int count = 0;

    for (size_t i = 0; i < strlen(input); i++) {
        if (isalpha(input[i])) {
            count++;
        }
    }

    printf("Số ký tự là chữ cái trong chuỗi: %d\n", count);

    return 0;
}
