#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char input[] = "Chuc mung nam moi";

    int count = 0;
    int word = 0;

    for (size_t i = 0; i < strlen(input); i++) {
        if (isspace(input[i])) {
            word = 0;
        } else if (!word) {
            word = 1;
            count++;
        }
    }

    printf("Số từ trong chuỗi: %d\n", count);

    return 0;
}
