#include <stdio.h> 

int main () {
		int day,month,year;
	printf("nhap ngay thang nam:");
	scanf("%d %d %d",&day,&month,&year);
	if (day<1 || day > 31 || month < 1 || month > 12 || year < 1) {
		printf("Ngay thang nam khong hop le");
	}else {
		if (month == 2 ) {
			if(day == 29){
				if(year % 4 == 0 && year % 100 !=0||year % 400 ){
					printf("Ngay thang nam hop le");
				}else {
					printf("Ngay thang nam khong hop le");
				}
			}else if (day > 29){
				printf("Ngay thang nam khong hop le");
			}else {
				printf("Ngay thang nam hop le");
			}
		}else if (month == 4,6,9,11 ){ //neu code sai thi viet lai dong nay
		if (day > 30){
			printf("Ngay thang nam khong hop le");
		}else {
			printf("Ngay thang nam hop le");
		}
	}else {
		printf("Ngay thang nam khong hop le");
	}
}
	return 0;
}
