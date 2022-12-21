#include<stdio.h>

float sqrt(int x) {
	float i;
	for ( i = 0; i*i <= x; i+=0.00001)
	{}
	printf("\nsqrt(%d) is %.3f", x, i);
}
int main(){
AB:	int n;
	printf("Enter number : ");
	scanf_s("%d", &n);
	if (n >= 0)
		sqrt(n);
	else {
		printf("Invalid value or Negative value\nPlease try again and enter positive value\n\n ");
		goto AB;
	}
	return 0;
}
