#include <stdio.h>

int main () {
	int a,b,c;
	int temp;
	printf("nhap so nguyen a:");
	scanf("%d",&a);
	printf("nhap so nguyen b:");
	scanf("%d",&b);
	printf("nhap so nguyen c:");
	scanf("%d",&c);
		
	if (a>b){
		temp = a;
		a=b;
		b = temp;
	}
	if (a>c){
		temp = a ;
		a = c;
		c = temp;
	}
	if (b>c){
		temp = b;
		b = c;
		c = temp;
	}
	printf("cac so duoc sap xep theo thu tu tang dan: %d,%d,%d\n",a,b,c);
	return 0;
}
