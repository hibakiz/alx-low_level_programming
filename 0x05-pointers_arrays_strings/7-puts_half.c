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
	int i, half;

	while (1)
	{
		if (*(str + leng) == '\0')
			break;
		leng++;
	}
	half = leng / 2;
	for (i = 0; *(str + i) != 0; i++)
	{
		_putchar(*(str + half));
		half++;
	}
	_putchar('\n');
}
