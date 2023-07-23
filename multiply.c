#include <stdio.h>

/**
 * multiply - multiply two nums
 * @a: first variable
 * @b: second Variable
 *
 * Return: int
 */

int multiply(int a, int b)
{
	return (a * b);
}

/**
 * main - majour entry
 *
 * Return: void
 */

int main(void)
{
	int mul;

	mul = multiply(6, 5);
	printf("multiplied value is %d \n", mul);

	return (0);
}
