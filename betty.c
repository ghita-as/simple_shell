#include <stdio.h>

/**
 * mul - Calculates the multiplication of two numbers
 *
 * @n1: The first number to multiply
 * @n2: The second number to multiply
 *
 * Return: The multiplication of n1 and n2
 */

int mul(int n1, int n2)
{
	return (n1 * n2);
}

/**
 * main - Entry point
 *
 * Description: This function takes two numbers as input, calculates
 * their multiplication, and prints the result.
 *
 * Return: 0 if success
 */

int main(void)
{
	int n1, n2, m;

	printf("Enter the first number: ");
	scanf("%d", &n1);
	printf("Enter the second number: ");
	scanf("%d", &n2);
	m = mul(n1, n2);

	printf("The multiplication of the numbers is: %d\n", m);

	return (0);
}
