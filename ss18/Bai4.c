#include <stdio.h>
#include <string.h>

#define MAX_CAPACITY 50    //kichs thuowcs
#define STUDENTS_TO_INPUT 5

struct Student {
    int id;
    char name[50];
    int age;
    char phoneNumber[15];
};

int main() {
    struct Student students[MAX_CAPACITY];

    printf("Nhap thong tin cho %d sinh vien:\n", STUDENTS_TO_INPUT);

    for(int i = 0; i < STUDENTS_TO_INPUT; i++) {
        printf("\nNhap thong tin sinh vien thu %d:\n", i + 1);

        students[i].id = i + 1;

        printf("Nhap ho va ten: ");
        fgets(students[i].name, sizeof(students[i].name), stdin);
        students[i].name[strcspn(students[i].name, "\n")] = 0;

        printf("Nhap tuoi: ");
        scanf("%d", &students[i].age);

        while (getchar() != '\n');

        printf("Nhap so dien thoai: ");
        fgets(students[i].phoneNumber, sizeof(students[i].phoneNumber), stdin);
        students[i].phoneNumber[strcspn(students[i].phoneNumber, "\n")] = 0;
    }

    printf("\nDanh sach sinh vien:\n");
    printf("%-5s %-30s %-10s %-15s\n", "ID", "Ho va ten", "Tuoi", "So dien thoai");
    printf("--------------------------------------------------------\n");

    for(int i = 0; i < STUDENTS_TO_INPUT; i++) {
        printf("%-5d %-30s %-10d %-15s\n",
            students[i].id,
            students[i].name,
            students[i].age,
            students[i].phoneNumber);
    }

    return 0;
}