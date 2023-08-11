#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: 'print using puts'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	int j;
	int k;

	i = 48;
	while (i < 58)
	{
		putchar(i);
		j = 0;
		while (j < 2)
		{
			if (i == 57)
				k = 10;
			else if (j == 0)
				k = 44;
			else if (j == 1)
				k = 32;
			putchar(k);
			if (i == 57)
			break;
			j++;
		}
		i++;
	}
	return (0);
}
