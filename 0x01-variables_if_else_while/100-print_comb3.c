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
	int k, w;

	i = 48;
	while (i < 58)
	{
		j = 49;
		while (j < 58)
		{
		if (j <= i)
		{
		j++;
		continue;
		}
		else
		{
		putchar(i);
		putchar(j);
		k = 0;
		while (k < 2)
		{
			if (i == 56 && j == 57)
				w = 10;
			else if (k == 0)
				w = 44;
			else if (k == 1)
				w = 32;
			putchar(w);
			if (i == 56 && j == 57)
			break;
			k++;
		}
		j++;
		}
		}

		i++;
	}
	return (0);
}
