#include<stdio.h>

int main() {
	int i,  num;
	printf("Enter your value:");
	scanf_s("%d", &num);
	for (i = num; i > 0; i--)
		printf("*");
	return 0;
}