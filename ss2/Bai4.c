#include <stdio.h>

int main() {
    float canh;
    float chu_vi;
    float dien_tich;
    canh = 5.0;
    chu_vi = 4 * canh;
    dien_tich = canh * canh;
    
    printf("Canh hinh vuong = %.2f\n", canh);
    printf("Chu vi hinh vuong = %.2f\n", chu_vi);
    printf("Dien tich hinh vuong = %.2f\n", dien_tich);
    
    return 0;
}