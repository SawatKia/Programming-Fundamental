#include<stdio.h>

int main() {
	int i, j, dec, bin=0, digit=1;
	printf("Binary >>> Decimal converter\nEnter integer :  ");
	scanf_s("%d", &dec);
	for (i = dec; i > 0; i /= 2) {
		j = i % 2;
		bin = bin + (j * digit);
		digit *= 10;
	}
	printf("Binay : %d",bin);
	return 0;
}