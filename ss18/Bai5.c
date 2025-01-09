#include <stdio.h>
#include <string.h>

#define MAX_CAPACITY 50

struct Student {
    int id;
    char name[50];
    int age;
    char phoneNumber[15];
};

int main() {
    struct Student students[MAX_CAPACITY] = {
        {1, "Nguyen Van A", 20, "0123456789"},
        {2, "Tran Thi B", 21, "0234567890"},
        {3, "Le Van C", 19, "0345678901"},
        {4, "Pham Thi D", 22, "0456789012"},
        {5, "Hoang Van E", 20, "0567890123"}
    };
    int currentSize = 5;

    int searchId;
    printf("Nhap ID sinh vien can sua: ");
    scanf("%d", &searchId);

    int found = -1;
    for(int i = 0; i < currentSize; i++) {
        if(students[i].id == searchId) {
            found = i;
            break;
        }
    }

    if(found == -1) {
        printf("Khong tim thay sinh vien co ID = %d\n", searchId);
    } else {
        printf("\nThong tin sinh vien truoc khi sua:\n");
        printf("ID: %d\n", students[found].id);
        printf("Ho va ten: %s\n", students[found].name);
        printf("Tuoi: %d\n", students[found].age);
        printf("So dien thoai: %s\n", students[found].phoneNumber);

        while (getchar() != '\n');

        printf("\nNhap thong tin moi:\n");
        printf("Nhap ho va ten moi: ");
        fgets(students[found].name, sizeof(students[found].name), stdin);
        students[found].name[strcspn(students[found].name, "\n")] = 0;

        printf("Nhap tuoi moi: ");
        scanf("%d", &students[found].age);
    }

    printf("\nDanh sach sinh vien sau khi cap nhat:\n");
    printf("%-5s %-30s %-10s %-15s\n", "ID", "Ho va ten", "Tuoi", "So dien thoai");
    printf("--------------------------------------------------------\n");

    for(int i = 0; i < currentSize; i++) {
        printf("%-5d %-30s %-10d %-15s\n",
            students[i].id,
            students[i].name,
            students[i].age,
            students[i].phoneNumber);
    }

    return 0;
}