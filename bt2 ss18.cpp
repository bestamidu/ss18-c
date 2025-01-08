#include<stdio.h>
#include<string.h>
struct profile{
	char name[50];
	int age;
	char phoneNumber[15];
};
int main(){

struct profile sinhvien;
printf("nhap ten sinh vien ");
fgets(sinhvien.name,sizeof(sinhvien.name),stdin);

printf("nhap ten tuoi ");
scanf("%d\n",&sinhvien.age);
 getchar();

printf("nhap  sdt ");
fgets(sinhvien.phoneNumber,sizeof(sinhvien.phoneNumber),stdin);

printf("%s\n",sinhvien.name);
printf("%d\n",sinhvien.age);
printf("%s\n",sinhvien.phoneNumber);
return 0;
}
