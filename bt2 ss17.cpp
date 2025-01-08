#include <stdio.h>

#define MAX 3 // Số lượng sinh viên tối đa

struct SinhVien {
    char maSV[10];
    char tenSV[50];
    char gioiTinh[10];
    char soDienThoai[15];
    float bangDiem[5]; 
};

int main() {
    struct SinhVien dsSV[MAX] = {
        {"SV001", "Nguyen Van A", "Nam", "0987654321", {8.5, 7.2, 9.0, 6.8, 8.0}},
        {"SV002", "Tran Thi B", "Nu", "0912345678", {7.5, 8.0, 6.5, 9.2, 7.8}},
        {"SV003", "Le Van C", "Nam", "0934567890", {6.0, 7.5, 8.3, 7.0, 6.9}}
    };

    // Hiển thị danh sách sinh viên
    for(int i = 0; i < MAX; i++) {
        printf("\nSinh vien %d:\n", i+1);
        printf("Ma SV: %s\n", dsSV[i].maSV);
        printf("Ten SV: %s\n", dsSV[i].tenSV);
        printf("Gioi tinh: %s\n", dsSV[i].gioiTinh);
        printf("So dien thoai: %s\n", dsSV[i].soDienThoai);
        printf("Bang diem: ");
        for(int j = 0; j < 5; j++) {
            printf("%.1f ", dsSV[i].bangDiem[j]);
        }
        printf("\n");
    }

    return 0;
}
