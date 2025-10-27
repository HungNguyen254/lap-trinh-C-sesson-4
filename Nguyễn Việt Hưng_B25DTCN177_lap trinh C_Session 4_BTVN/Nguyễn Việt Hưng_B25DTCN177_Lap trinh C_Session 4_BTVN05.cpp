#include <stdio.h>

int main () {
	int a,b,c;
	printf("Nhap so nguyen a:");
	scanf ("%d",&a);
	printf("nhap so nguyen b:");
	scanf("%d",&b);
	printf("nhap so nguyen c:");
	scanf("%d",&c);
	if (c>a && c<b || c<a && c>b){
		printf("So thu 3 nam trong khoang giua so thu 1 va so thu 2");
	}else {
		printf("So thu 3 khong nam trong khoang giua so thu 1 va so thu 2");
	}
	return 0;
}
