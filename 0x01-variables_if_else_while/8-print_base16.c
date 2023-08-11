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

	i = 48;
	while (i < 103)
	{
		if (i > 57 && i < 97)
		{
			i++;
			continue;
		}
		else
		{
			putchar(i);
			i++;
		}

	}
	putchar('\n');
	return (0);
}
