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

	for (i = 97; i < 123; i++)
	{
	if (i == 101 || i == 113)
	continue;
	putchar(i);

	}
	putchar('\n');
	return (0);
}
