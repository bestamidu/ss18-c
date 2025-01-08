#include<stdio.h>
#include<string.h>
#define max 50
struct profile{
	char name[50];
	int age;
	char phoneNumber[15];
};
int main(){

struct profile sinhvien[max];
int n=5;
for(int i =0 ; i<n ; i++){
printf("nhap ten sinh vien ");
fgets(sinhvien[i].name,sizeof(sinhvien[i].name),stdin);

printf("nhap ten tuoi ");
scanf("%d",&sinhvien[i].age);
 getchar();

printf("nhap  sdt ");
fgets(sinhvien[i].phoneNumber,sizeof(sinhvien[i].phoneNumber),stdin);
}
for(int i =0 ; i<n ; i++){

printf("%s\n",sinhvien[i].name);
printf("%d\n",sinhvien[i].age);
printf("%s\n",sinhvien[i].phoneNumber);
}
return 0;
}