#include <stdio.h>
/**
 * add - function that takes two numbers and returns their added values
 *
 * @a: the first value
 * @b: the second value
 *
 * Return: added value
 */

int add(int a, int b)
{
	return (a + b);
}

/**
 * main - main entry file
 * Return: 0
 */

int main(void)
{
	int a;

	a = add(2, 5);
	printf("added value is %d \n", a);
	return (0);
}
