#include<stdio.h>

int main() {
	int i, j, dec, bin_array[128];
	printf("Binary >>> Decimal converter\nEnter integer :  ");
	scanf_s("%d",&dec);
	i = 0;
	while (dec > 0) {
		bin_array[i] = dec % 2;
		dec /= 2;
		i++;
	}
	printf("Binay : ");
	for (j = i-1; j >=0; j--) {		
		printf("%d", bin_array[j]);
	}
	return 0;
}