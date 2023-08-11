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
	int i, j, z;

	for (i = 48; i < 56; i++)
	{
		for (j = i + 1; j < 57; j++)
		{
		for (z = j + 1; z < 58; z++)
		{
		putchar(i);
		putchar(j);
		putchar(z);
		if (i == 55 && j == 56 && z == 57)
		continue;
		putchar(44);
		putchar(32);
		}
		}
		}
		putchar ('\n');
	return (0);
}
