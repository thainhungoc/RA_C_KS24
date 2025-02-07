/*Viết chương trình khởi tạo cấu trúc sinh viên có các thuộc tính id, name và age.

Yêu cầu người dùng nhập số lượng sinh viên và thông tin từng sinh viên, lưu thông tin vừa nhập vào file students.txt.

Mỗi sinh viên được lưu trong file trên 1 dòng.*/


#include <stdio.h>
#include <string.h>

struct Student {
    int id;
    char name[50];
    int age;
};

int main() {
    FILE *fp;
    struct Student *students;  // cấp phát động mảng stu
    int n;


    printf("Nhap so luong sinh vien: ");
    scanf("%d", &n);
    getchar();

    students = (struct Student*)malloc(n * sizeof(struct Student));

    for(int i = 0; i < n; i++) {
        printf("\nNhap thong tin sinh vien thu %d:\n", i + 1);

        printf("ID: ");
        scanf("%d", &students[i].id);
        getchar();

        printf("Ten: ");
        fgets(students[i].name, sizeof(students[i].name), stdin);
        students[i].name[strcspn(students[i].name, "\n")] = 0;

        printf("Tuoi: ");
        scanf("%d", &students[i].age);
        getchar();
    }

    fp = fopen("stu.txt", "w");
    if (fp == NULL) {
        printf("Khong the mo file!\n");
        free(students);  // Giải phóng bộ nhớ
        return 1;
    }

    for(int i = 0; i < n; i++) {
        fprintf(fp, "%d,%s,%d\n", students[i].id, students[i].name, students[i].age);
    }

    fclose(fp);

    free(students);

    printf("\nDa luu thong tin sinh vien vao file stu.txt thanh cong!\n");

    return 0;
}
