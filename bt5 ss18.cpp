#include <stdio.h>
#include <string.h>

#define MAX 50

typedef struct {
    int id;
    char name[50];
    int age;
    char phoneNumber[15];
} Student;

int main() {
    Student students[MAX] = {
        {1, "Nguyen Van A", 20, "0123456789"},
        {2, "Le Thi B", 21, "0987654321"},
        {3, "Tran Van C", 22, "0123987654"},
        {4, "Pham Thi D", 19, "0987123456"},
        {5, "Hoang Van E", 23, "0912345678"}
    };
    int num_students = 5;

    int id, found = 0;
    printf("Nhập ID của sinh viên cần sửa: ");
    scanf("%d", &id);

    for (int i = 0; i < num_students; i++) {
        if (students[i].id == id) {
            found = 1;
            printf("Sinh viên được tìm thấy: ID: %d, Tên: %s, Tuổi: %d, SĐT: %s\n", students[i].id, students[i].name, students[i].age, students[i].phoneNumber);


            printf("Nhập tên mới: ");
            scanf(" %[^\n]s", students[i].name);  
            printf("Nhập tuổi mới: ");
            scanf("%d", &students[i].age);

            break;
        }
    }

    if (!found) {
        printf("Không tìm thấy sinh viên có ID: %d\n", id);
    }
    printf("\nDanh sách sinh viên:\n");
    for (int i = 0; i < num_students; i++) {
        printf("ID: %d, Tên: %s, Tuổi: %d, SĐT: %s\n", students[i].id, students[i].name, students[i].age, students[i].phoneNumber);
    }

    return 0;
}
