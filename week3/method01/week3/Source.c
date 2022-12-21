#include<stdio.h>

int main() {
	int x, y, z;
	printf("Enter three number : ");
	scanf_s("%d%d%d", &x, &y, &z);
	if (x > y && y > z) {
		printf("The two numbers that add up to the greatest value are : %d + %d = %d", x, y, x + y);
	}
	else if (x > z && z > y) {
		printf("The two numbers that add up to the greatest value are : %d + %d = %d", x, z, x + z);
	}
	else if (y > x && x > z) {
		printf("The two numbers that add up to the greatest value are : %d + %d = %d", y, x, y + x);
	}
	else if(z>x && x>y) {
		printf("The two numbers that add up to the greatest value are : %d + %d = %d", z, x, z + x);
	}
	else if (y > z && z > x) {
		printf("The two numbers that add up to the greatest value are : %d + %d = %d", y, z, y + z);
	}
	else if (z > y && y > x) {
		printf("The two numbers that add up to the greatest value are : %d + %d = %d", z, y, z + y);
	}
	return 0;
}