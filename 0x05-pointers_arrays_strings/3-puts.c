#include "main.h"
/**
 * _puts - Entry point
 *@str: int
 *
 * Description: 'tsks'
 *
 *
 * Return: Always 0 (Success)
 */
void _puts(char *str)
{
	int leng = 0;

	while (1)
	{
		if (*(str + leng) == '\0')
		{
			break;
		}
		else
		{
		_putchar(*(str + leng));

		leng++;
	}
	}
	_putchar('\n');
}
