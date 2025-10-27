#include <stdio.h>

int main () {
	int a;
	printf("Nhap mot so nguyen:",a);
	scanf("%d",&a);
	if (a%3==0 && a%5==0) {
		printf("so nay chia het cho ca 3 va 5");
	}else if (a%5==0){
		printf("so nay chia het cho 5");
	}else if (a%3==0) {
		printf("so nay chia het cho 3 ");
	}else {
		printf("So nay khong chia het cho 3 hoac 5");
	}
	return 0;
	}
