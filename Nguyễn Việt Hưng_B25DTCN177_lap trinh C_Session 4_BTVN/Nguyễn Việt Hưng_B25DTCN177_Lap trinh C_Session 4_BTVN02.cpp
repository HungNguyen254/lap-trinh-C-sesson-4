#include <stdio.h>

int main () {
	int a;
	printf("nhap so nguyen duong:",a);
	scanf("%d",&a);
	if (a%2==0) {
		printf("day la so chan:");
	} else {
		printf("day la so le");
	}
	return 0;
}
