#include<stdio.h>
#include<string.h>
struct profile{
	char name[50];
	int age;
	char phoneNumber[15];
};
int main(){

struct profile sinhvien[5];
for(int i =0 ; i<5 ; i++){
printf("nhap ten sinh vien ");
fgets(sinhvien[i].name,sizeof(sinhvien[i].name),stdin);

printf("nhap ten tuoi ");
scanf("%d",&sinhvien[i].age);
 getchar();

printf("nhap  sdt ");
fgets(sinhvien[i].phoneNumber,sizeof(sinhvien[i].phoneNumber),stdin);
}
for(int i =0 ; i<5 ; i++){

printf("%s\n",sinhvien[i].name);
printf("%d\n",sinhvien[i].age);
printf("%s\n",sinhvien[i].phoneNumber);
}
return 0;
}
