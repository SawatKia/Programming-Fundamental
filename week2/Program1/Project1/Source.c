#include<stdio.h>
#include<math.h>


int main() {
	float w, h, bmi;
	int ans;
	printf("\n\nThis is your Body Mass Index(BMI) Program\n\n");
	printf("\nplease insert your value\n\n");
IS:	printf("weight(kg) : ");
	scanf_s("%f", &w);
	printf("height(m) : ");
	scanf_s("%f", &h);
	printf("\nplease vheck your info\n\n");
	printf("weight : %.2f kg, height : %.2f m", w, h);
	printf("\n\nis it incorrect? [1 = yes 2 = no] :");
	scanf_s("%d", &ans);
	if (ans == 2) {
		bmi = w / (h * h);
		printf("\nyour Body Mass Index(BMI) is : %f", bmi);
		if (bmi < 18.5) {
			printf("\n\nyou are underweight\n\n");
		}
		else if (bmi >= 18.5 && bmi <= 24.9) {
			printf("\n\nyou are in normal range\n\n");
		}
		else if (bmi >= 25 && bmi <=29.9) {
			printf("\n\nyou are above standard\n\n");
		}
		else
			printf("\n\nyou are overweight\n\n");
	}
	else {
		printf("\nplease correct info\n\n");
		goto IS;

	}
	printf("-------------------------------------------\n");
	printf("|           This program made by           |\n");
	printf("|         61011085 SawatLapprsertlum       |\n");
	printf("|                 Thank you                |\n");
	printf("-------------------------------------------\n");

	return 0;
}