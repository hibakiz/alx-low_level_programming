#include "main.h"
/**
 * puts_half - Entry point
 *@str: int
 *
 * Description: 'tsks'
 *
 *
 * Return: Always 0 (Success)
 */
void puts_half(char *str)
{
	int leng = 0;
	int half;

	while (1)
	{
		if (*(str + leng) == '\0')
			break;
		leng++;
	}
	half = leng / 2 + 1;
	while (half < leng)
	{
		_putchar(*(str + half));
		half++;
	}
	_putchar('\n');
}
