#include <stdio.h>

int main () {
	double a,b;
	long price;
	double electric;
	printf("nhap chi so dien dau thang:",a);
	scanf("%lf",&a);
	printf("nhap chi so dien cuoi thang:",b);
	scanf("%lf",&b);
	electric = b - a;
	
	if (electric < 50){
		price = electric * 10000;
	}else if(electric<100){
		price = electric * 15000;
	}else if(electric < 150){
		price = electric * 20000;
	}else if (electric < 200) {
		price = electric * 25000;
	}else if (electric<=200 ) {
		price = electric * 30000;
	}else {
		printf("gia tri dien khong hop le");
	}
	printf("so dien cua thang nay la:%.2lf\n",electric);
	printf("tien dien thang nay la:%d\n",price);
	return 0;
}
