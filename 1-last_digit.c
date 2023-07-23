#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/* betty style doc for function main goes there */
/**
* main - this is the main function
*
* Return: always 0
*/
int main(void)
{
	int n, mod;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	mod = n % 10;
	if (mod > 5)
	{
		printf("Last digit of %d ins %d and is greater than 5 \n", n, mod);

	}
	else if (mod == 0)
	{
		printf("The last digit of %d is %d and is 0 \n", n, mod);
	}
	else if (mod < 6 && mod != 0)
	{
		printf("The last digit of %d is %d and is less than 0 \n", n, mod);
	}
	return (0);
}
