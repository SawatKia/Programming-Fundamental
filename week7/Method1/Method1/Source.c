#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
float average(float H[]) {
	float sum = 0, avg;
	int i;
	for (i = 0; i < 10; i++)
		sum = sum + H[i];
	avg = sum / 10;
	return avg;
}


int main() {
	int i;
	float H[10],avg;
	
	printf("Enter 10 students's Height[m] : ");
	for (i = 0; i < 10; i++) {
		scanf("%f", &H[i]);
	}
	
	for (i= 0; i < 10; i++)
		printf("student[%d] : %.2f\n", i + 1, H[i]);
	avg=average(H);
	printf("\nAverage 10 students's Height : %.3f meters\n\n\n", avg);
	return 0;
}

