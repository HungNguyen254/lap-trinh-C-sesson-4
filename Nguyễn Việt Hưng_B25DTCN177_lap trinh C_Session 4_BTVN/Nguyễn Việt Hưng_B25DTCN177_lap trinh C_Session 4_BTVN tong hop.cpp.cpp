#include <stdio.h>

int main () {
	int year;
	double average;
	int age;
	printf("nhap nam sinh cua ban:");
	scanf("%d",&year);
	printf("nhap diem trung binh:");
	scanf("%lf",&average);
	if (year>1900 && year<2025){
		age = 2025 - year;
	}else if(age<18){
		printf("sinh vien chua du 18");
	}
	printf("thong tin sinh vien:\n");
	printf("nam sinh cua sinh vien:%d\n",year);
	printf("tuoi cua sinh vien:%d\n",age);
	printf("hoc luc cua sinh vien:\n",average);
	
	if (average>=8.0){
		printf("Gioi");
	}else if(average<7.9) {
		printf("Kha");
	}else if(5.0<average<6.4) {
		printf("Trung binh");
	}else {
		printf("Yeu");
	}
	return 0;
}
