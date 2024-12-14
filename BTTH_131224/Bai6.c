/*Viết chương trình C để nhập vào 1 số nguyên dương n.
Hãy tìm và in ra n số nguyên tố đầu tiên .*/
#include <stdio.h>
#include <math.h>
int main()
{
    int number;
    printf("Nhap vao mot so nguyen duong: ");
    scanf("%d",&number);
    if (number<0)
    {
        printf("Vui long nhao vao mot so nguyen duong");
    }
    int sum =0;
    int num =2;
    while ( sum < number)
    {
        int count =0;
        for ( int i = 2 ; i <= sqrt(num);i++)
        {
            if(num % i ==0)
            {
                count++;
            }
        }
        if(count == 0)
        {
            printf("%d\n",num);
            sum++;
        }
        num++;
    }
}