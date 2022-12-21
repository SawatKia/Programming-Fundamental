#include<stdio.h>

float sqrt(int x) {
	float i;
	int sq;
	for (i = 0.000000; i <= x; i+=0.000001) {
		sq = i * i;
		if (sq == x)
		return i;
	}
}

int main() {
AB:	int n;
	printf("Enter Number : ");
	scanf_s("%d", &n);
	if (n >= 0)
		printf("sqrt(%d) is % .3f\n", n, sqrt(n));
	else {
		printf("\nInvalid Value or value is negative\nplease try agian\n\n");
		goto AB;
	}
	return 0;
}