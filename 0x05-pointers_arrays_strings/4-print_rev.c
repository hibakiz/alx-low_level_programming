#include "main.h"
/**
 * print_rev - Entry point
 *@s: int
 *
 * Description: 'tsks'
 *
 *
 * Return: Always 0 (Success)
 */
void print_rev(char *s)
{
	int leng = 0;

	while (1)
	{
		if (*(s + leng) == '\0')
			break;
		leng++;
	}
	while (leng > 0)
	{
		_putchar(*(s + leng));
		leng--;
	}
	_putchar('\n');
}
