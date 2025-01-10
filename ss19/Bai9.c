#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_STUDENTS 100

// Khai báo cấu trúc sinh viên
struct Student {
    int id;
    char name[50];
    int age;
    char phoneNumber[15];
};

// Biến toàn cục để lưu số lượng sinh viên hiện tại
int studentCount = 5;

// Khởi tạo mảng sinh viên với một số dữ liệu mẫu
struct Student students[MAX_STUDENTS] = {
    {1, "Nguyen Van B", 20, "0123456789"},
    {2, "Tran Thi A", 19, "0987654321"},
    {3, "Le Van D", 21, "0369852147"},
    {4, "Pham Thi C", 20, "0147852369"},
    {5, "Hoang Van E", 22, "0258741369"}
};

// Hàm hiển thị menu
void displayMenu() {
    printf("\nMENU\n");
    printf("1. Hien thi danh sach sinh vien\n");
    printf("2. Them sinh vien\n");
    printf("3. Sua thong tin sinh vien\n");
    printf("4. Xoa sinh vien\n");
    printf("5. Tim kiem sinh vien\n");
    printf("6. Sap xep danh sach sinh vien\n");
    printf("7. Thoat\n");
    printf("Lua chon cua ban: ");
}

// Hàm hiển thị danh sách sinh viên
void displayStudents() {
    if (studentCount == 0) {
        printf("\nDanh sach sinh vien trong!\n");
        return;
    }

    printf("\nDanh sach sinh vien:\n");
    for (int i = 0; i < studentCount; i++) {
        printf("\nSinh vien %d:\n", i + 1);
        printf("ID: %d\n", students[i].id);
        printf("Ten: %s\n", students[i].name);
        printf("Tuoi: %d\n", students[i].age);
        printf("SDT: %s\n", students[i].phoneNumber);
        printf("-----------------");
    }
}

// Hàm thêm sinh viên
void addStudent() {
    if (studentCount >= MAX_STUDENTS) {
        printf("\nDanh sach sinh vien da day!\n");
        return;
    }

    printf("\nNhap thong tin sinh vien moi:\n");
    printf("ID: ");
    scanf("%d", &students[studentCount].id);
    printf("Ten: ");
    getchar();
    fgets(students[studentCount].name, 50, stdin);
    students[studentCount].name[strcspn(students[studentCount].name, "\n")] = 0;
    printf("Tuoi: ");
    scanf("%d", &students[studentCount].age);
    printf("SDT: ");
    getchar();
    fgets(students[studentCount].phoneNumber, 15, stdin);
    students[studentCount].phoneNumber[strcspn(students[studentCount].phoneNumber, "\n")] = 0;

    studentCount++;
    printf("\nThem sinh vien thanh cong!\n");
}

// Hàm sửa thông tin sinh viên
void editStudent() {
    int id;
    printf("\nNhap ID sinh vien can sua: ");
    scanf("%d", &id);

    for (int i = 0; i < studentCount; i++) {
        if (students[i].id == id) {
            printf("\nNhap thong tin moi:\n");
            printf("Ten: ");
            getchar();
            fgets(students[i].name, 50, stdin);
            students[i].name[strcspn(students[i].name, "\n")] = 0;
            printf("Tuoi: ");
            scanf("%d", &students[i].age);
            printf("SDT: ");
            getchar();
            fgets(students[i].phoneNumber, 15, stdin);
            students[i].phoneNumber[strcspn(students[i].phoneNumber, "\n")] = 0;

            printf("\nSua thong tin thanh cong!\n");
            return;
        }
    }
    printf("\nKhong tim thay sinh vien co ID = %d\n", id);
}

// Hàm xóa sinh viên
void deleteStudent() {
    int id;
    printf("\nNhap ID sinh vien can xoa: ");
    scanf("%d", &id);

    for (int i = 0; i < studentCount; i++) {
        if (students[i].id == id) {
            // Di chuyển các phần tử phía sau lên trước
            for (int j = i; j < studentCount - 1; j++) {
                students[j] = students[j + 1];
            }
            studentCount--;
            printf("\nXoa sinh vien thanh cong!\n");
            return;
        }
    }
    printf("\nKhong tim thay sinh vien co ID = %d\n", id);
}

// Hàm tìm kiếm sinh viên
void searchStudent() {
    char searchName[50];
    int found = 0;

    printf("\nNhap ten sinh vien can tim: ");
    getchar();
    fgets(searchName, 50, stdin);
    searchName[strcspn(searchName, "\n")] = 0;

    for (int i = 0; i < studentCount; i++) {
        if (strstr(students[i].name, searchName) != NULL) {
            if (!found) {
                printf("\nKet qua tim kiem:\n");
                found = 1;
            }
            printf("\nID: %d\n", students[i].id);
            printf("Ten: %s\n", students[i].name);
            printf("Tuoi: %d\n", students[i].age);
            printf("SDT: %s\n", students[i].phoneNumber);
            printf("-----------------");
        }
    }

    if (!found) {
        printf("\nKhong tim thay sinh vien nao!\n");
    }
}

// Hàm sắp xếp sinh viên theo tên
void sortStudents() {
    struct Student temp;
    for (int i = 0; i < studentCount - 1; i++) {
        for (int j = 0; j < studentCount - i - 1; j++) {
            if (strcmp(students[j].name, students[j + 1].name) > 0) {
                temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }
    printf("\nDa sap xep danh sach sinh vien theo ten!\n");
}

int main() {
    int choice;

    do {
        displayMenu();
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                displayStudents();
                break;
            case 2:
                addStudent();
                break;
            case 3:
                editStudent();
                break;
            case 4:
                deleteStudent();
                break;
            case 5:
                searchStudent();
                break;
            case 6:
                sortStudents();
                break;
            case 7:
                printf("\nCam on ban da su dung chuong trinh!\n");
                break;
            default:
                printf("\nLua chon khong hop le! Vui long chon lai.\n");
        }
    } while (choice != 7);

    return 0;
}