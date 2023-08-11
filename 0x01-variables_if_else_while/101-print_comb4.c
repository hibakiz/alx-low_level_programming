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
	int i, j, z, k, w;

	i = 48;
	while (i < 56)
	{
		j = 49;
		while (j < 58)
		{
		z = 50;
		while (z < 58)
		{
		if (z <= j)
		{
		z++;
		continue;
		}
		else
		{
		putchar(i);
		putchar(j);
		putchar(z);
		k = 0;
		while (k < 2)
		{
			if (i == 55 && j == 56 && z == 57)
				w = 10;
			else if (k == 0)
				w = 44;
			else if (k == 1)
				w = 32;
			putchar(w);
			if (i == 55 && j == 56 && z == 57)
			break;
			k++;
		}
		}
		z++;
		}
		j++;
		}
		i++;
		}
	return (0);
}
