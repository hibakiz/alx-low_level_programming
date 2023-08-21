#include "main.h"
/**
 * puts2 - Entry point
 *@str: int
 *
 * Description: 'tsks'
 *
 *
 * Return: Always 0 (Success)
 */
void puts2(char *str)
{
	int leng = 0;

	while (1)
	{
		if (*(str + leng) == '\0')
			break;
		if (leng % 2 == 0)
		_putchar(*(str + leng));

		leng++;
	}
	_putchar('\n');
}
