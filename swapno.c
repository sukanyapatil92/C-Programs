//Write a program that prompts the user to enter number in two variables and Swap the contents of the variables.

#include<stdio.h>
int main()
{
	int num1, num2, temp;

	printf("enter number1\n");
	scanf("%d", &num1);

	printf("enter number 2");
	scanf("%d", &num2);

	temp= num1;
	num1= num2;
	num2= temp;

	printf("after swapping num1 is %d and num2 is %d", num1, num2);

	return 0;
}