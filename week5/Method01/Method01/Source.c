#include<stdio.h>

int main() {
	int n, x, y;
	printf("Enyer your Number :");
	scanf_s("%d", &n);
	for (y = 1; y <= n; y++) {
		printf("*");
		for (x = 1; y > x; x++) {
			printf("*");
		}
		printf("\n");
	}
	
}