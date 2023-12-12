#include <stdio.h>

/**
 * multiple  - calculates the multiplication of two numbers
 * @num1 - the first int variable
 * @num2 - the second int variable
 * Return: the multiplication of num1 and num2
 */

int multiple(int num1, int num2)
{
	return (num1 * num2);
}

/**
 * main - entry function
 * Return : 0 (success)
 */

int main()
{
	int n1, n2, m;

	printf("The first number is: ");
	scanf("%d\n", &n1);
	printf("The second number is: ");
	scanf("%d\n", &n2);
	m = mulriple(n1, n2);

	printf("The multiplication of the numbers is : %d\n", &m);
	return (0);
}
