#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    char ch;
    int len, j;

    printf("Nhap mot chuoi bat ky: ");
    gets(str);

    printf("Nhap ky tu can xoa: ");
    scanf("%c", &ch);
    len = strlen(str);

    for(int i = 0; i < len; i++) {
        if(str[i] == ch) {
            for(j = i; j < len; j++) {
                str[j] = str[j + 1];
            }
            len--;
            i--;
        }
    }

    printf("\nChuoi sau khi xoa ky tu '%c': %s\n", ch, str);

    return 0;
}