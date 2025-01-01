#include <stdio.h>
#include <string.h>

int main() {
    char input[] = "Chuc mung nam moi!";

    printf("Chuỗi đảo ngược: ");
    for (int i = strlen(input) - 1; i >= 0; i--) {
        printf("%c", input[i]);
    }
    printf("\n");

    return 0;
}
