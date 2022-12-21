#include<stdio.h>

int main() {
	int x, y, z,sum1,sum2,sum3;
	printf("Enter three number : ");
	scanf_s("%d%d%d", &x, &y, &z);
	sum1 = x + y;
	sum2 = z + x;
	sum3 = z + y;
	if (sum1 > sum2 && sum1 > sum3) {
		printf("The two numbers that add up to the greatest value are : %d + %d = %d",x,y,sum1);
	}
	else if(sum2>sum1&& sum2 >sum3)
	{
		printf("The two numbers that add up to the greatest value are : %d + %d = %d", z, x, sum2);
	}
	else if (sum3 > sum1 && sum3 > sum2) {
		printf("The two numbers that add up to the greatest value are : %d + %d = %d", z, y, sum3);
	}
	return 0;
}