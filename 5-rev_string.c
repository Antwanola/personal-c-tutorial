#include "main.h"
#include <string.h>

/**
 * rev_string - main entry
 * Description: functions that reverses a string
 * @s: input string
 * Return: void
 */
void rev_string(char *s)
{
	int i;
	int temp;
	int len = strlen(s);
	int middle = len / 2;


	for (i = 0; i < middle; i++)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}

	_putchar('\n');
}
