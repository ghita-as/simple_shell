#include "shell.h"
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
 * multiplication - Takes two numbers, calculates
 * their multiplication, and prints the result.
 *
 * @num1: The first number
 * @num2: The second number
 */
void multiplication(int num1, int num2)
{
	int result = mul(num1, num2);

	printf("La multiplication des deux nombre est: %d\n", result);
}
/**
 * betty_fct - Enter point
 * Return: always 0 if success
 */
int betty_fct(void)
{
	int n1, n2;

	printf("Entrer le premier nombre: ");
	scanf("%d", &n1);
	printf("Entrer le deuxième nombre: ");
	scanf("%d", &n2);

	multiplication(n1, n2);

	return (0);
}
