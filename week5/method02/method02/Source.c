#include<stdio.h>

int main() {
AB:	int n;
	printf("Enter Number:");
	scanf_s("%d", &n);
	if (n == 1)
		printf("*");
	else if (n == 2)
		printf("*\n**");
	else if (n == 3)
		printf("*\n**\n***");
	else if (n == 4)
		printf("*\n**\n***\n****");
	else if (n == 5)
		printf("*\n**\n***\n****\n*****");
	else if (n == 6)
		printf("*\n**\n***\n****\n*****\n*******");
	else if (n == 7)
		printf("*\n**\n***\n****\n*****\n*******\n*******");
	else if (n == 8)
		printf("*\n**\n***\n****\n*****\n*******\n*******\n********");
	else if (n == 9)
		printf("*\n**\n***\n****\n*****\n*******\n*******\n********\n*********");
	else if (n == 10)
		printf("*\n**\n***\n****\n*****\n******\n*******\n********\n*********\n**********");
	else {
		printf("Invalid Value OR negative Value\nPlease enter correct Value\n\n\n");
		goto AB;
	}
	return 0;

}