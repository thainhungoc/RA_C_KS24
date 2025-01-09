#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100];
    printf("Nhap mot chuoi bat ky: ");
    gets(str);

    if(isalpha(str[0])) {
        str[0] = toupper(str[0]);
    }

    for(int i = 1; str[i] != '\0'; i++) {
        if(str[i-1] == ' ' && isalpha(str[i])) {
            str[i] = toupper(str[i]);
        }
    }

    printf("\nChuoi sau khi viet hoa chu cai dau: %s\n", str);

    return 0;
}