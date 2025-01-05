#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100];
    int chuCai = 0, chuSo = 0, kyTuDacBiet = 0;

    printf("Nhap mot chuoi bat ky: ");
    gets(str);

    for(int i = 0; str[i] != '\0'; i++) {
        if(isalpha(str[i]))
            chuCai++;
        else if(isdigit(str[i]))
            chuSo++;
        else if(str[i] != ' ')
            kyTuDacBiet++;
    }

    printf("\nTrong chuoi \"%s\" co:\n", str);
    printf("So chu cai: %d\n", chuCai);
    printf("So chu so: %d\n", chuSo);
    printf("So ky tu dac biet: %d\n", kyTuDacBiet);

    return 0;
}