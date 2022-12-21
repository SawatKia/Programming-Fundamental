#include<stdio.h>

int main() {
A: 	int n;
	printf("Enter your value :");
	scanf_s("%d", &n);
	if (n == 1)
		printf("*");
	else if (n == 2)
		printf("**");
	else if (n == 3)
		printf("***");
	else if (n == 4)
		printf("****");
	else if (n == 5)
		printf("*****");
	else if (n == 6)
		printf("******");
	else if (n == 7)
		printf("*******");
	else if (n == 8)
		printf("********");
	else if (n == 9)
		printf("*********");
	else if (n == 10)
		printf("**********");
	else if (n == 11)
		printf("***********");
	else if (n == 12)
		printf("************");
	else if (n == 13)
		printf("*************");
	else if (n == 14)
		printf("**************");
	else if (n == 15)
		printf("***************");
	else if (n == 16)
		printf("****************");
	else if (n == 17)
		printf("*****************");
	else if (n == 18)
		printf("******************");
	else if (n == 19)
		printf("*******************");
	else if (n == 20)
		printf("********************");
	else if (n == 21)
		printf("*********************");
	else if (n == 22)
		printf("**********************");
	else if (n == 23)
		printf("***********************");
	else if (n == 24)
		printf("************************");
	else if (n == 25)
		printf("*************************");
	else if (n == 26)
		printf("**************************");
	else if (n == 27)
		printf("***************************");
	else if (n == 28)
		printf("****************************");
	else if (n == 29)
		printf("*****************************");
	else if (n == 30)
		printf("******************************");
	else if (n == 31)
		printf("*******************************");
	else if (n == 32)
		printf("********************************");
	else if (n == 33)
		printf("*********************************");
	else if (n == 34)
		printf("**********************************");
	else if (n == 35)
		printf("***********************************");
	else if (n == 36)
		printf("***********************************");
	else if (n == 37)
		printf("***********************************");
	else if (n == 38)
		printf("***********************************");
	else if (n == 39)
		printf("***********************************");
	else if (n == 40)
		printf("***********************************");
	else if (n == 41)
		printf("************************************");
	else if (n == 42)
		printf("*************************************");
	else if (n == 43)
		printf("**************************************");
	else if (n == 44)
		printf("***************************************");
	else if (n == 45)
		printf("****************************************");
	else if (n == 46)
		printf("*****************************************");
	else if (n == 47)
		printf("******************************************");
	else if (n == 48)
		printf("*******************************************");
	else if (n == 49)
		printf("********************************************");
	else if (n == 50)
		printf("*********************************************");

	else {
		printf("!!!!!!!!!!!Over Limit!!!!!!!!! \n you enter value over limit or invalid value \n please try agian\n");
		goto A;
	}
	return 0;
}