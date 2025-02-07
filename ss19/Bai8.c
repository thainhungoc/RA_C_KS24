#include <stdio.h>
#include <string.h>

// Khai báo cấu trúc sinh viên
struct Student {
    int id;
    char name[50];
    int age;
    char phoneNumber[15];
};

// Hàm sắp xếp sinh viên theo tên
void sortStudentsByName(struct Student arr[], int size) {
    struct Student temp;
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (strcmp(arr[j].name, arr[j + 1].name) > 0) {
                // Hoán đổi vị trí
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Hàm in danh sách sinh viên
void printStudents(struct Student arr[], int size) {
    printf("\nDanh sach sinh vien:\n");
    for (int i = 0; i < size; i++) {
        printf("Sinh vien %d:\n", i + 1);
        printf("ID: %d\n", arr[i].id);
        printf("Ten: %s\n", arr[i].name);
        printf("Tuoi: %d\n", arr[i].age);
        printf("SDT: %s\n", arr[i].phoneNumber);
        printf("-----------------\n");
    }
}

int main() {
    struct Student students[5] = {
        {1, "Hunghx B", 20, "0123456789"},
        {2, "Hunghx A", 19, "0987654321"},
        {3, "Hunghx D", 21, "0369852147"},
        {4, "Hunghx C", 20, "0147852369"},
        {5, "Hunghx E", 22, "0258741369"}
    };
    
    printf("Danh sach sinh vien truoc khi sap xep:");
    printStudents(students, 5);
    
    sortStudentsByName(students, 5);
    
    printf("\nDanh sach sinh vien sau khi sap xep theo ten:");
    printStudents(students, 5);
    
    return 0;
}