#include <stdio.h>
#include <string.h>

struct Student {
    int id;
    char name[50];
    int age;
    char phoneNumber[15];
};

int deleteStudent(struct Student students[], int *currentLength, int deleteId) {
    int found = 0;
    int pos = -1;

    for(int i = 0; i < *currentLength; i++) {
        if(students[i].id == deleteId) {
            pos = i;
            found = 1;
            break;
        }
    }

    if(found) {
        for(int i = pos; i < *currentLength - 1; i++) {
            students[i] = students[i + 1];
        }
        (*currentLength)--;
        printf("Da xoa sinh vien co ID: %d\n", deleteId);
        return 1;
    } else {
        printf("Khong tim thay sinh vien co ID: %d\n", deleteId);
        return 0;
    }
}

// in danh sách sinh viên
void printStudents(struct Student students[], int currentLength) {
    printf("\nDanh sach sinh vien:\n");
    for(int i = 0; i < currentLength; i++) {
        printf("ID: %d, Ten: %s, Tuoi: %d, SDT: %s\n",
               students[i].id,
               students[i].name,
               students[i].age,
               students[i].phoneNumber);
    }
}

int main() {
    struct Student students[5];
    int currentLength = 5;

    students[0] = (struct Student){1, "Hunghx A", 20, "0123456789"};
    students[1] = (struct Student){2, "Hunghx B", 21, "0987654321"};
    students[2] = (struct Student){3, "Hunghx C", 19, "0123789456"};
    students[3] = (struct Student){4, "Hunghx D", 22, "0456123789"};
    students[4] = (struct Student){5, "Hunghx E", 20, "0789456123"};

    printf("Danh sach sinh vien ban dau:");
    printStudents(students, currentLength);

    deleteStudent(students, &currentLength, 3);

    printf("\nDanh sach sinh vien sau khi xoa:");
    printStudents(students, currentLength);

    deleteStudent(students, &currentLength, 10);

    return 0;
}