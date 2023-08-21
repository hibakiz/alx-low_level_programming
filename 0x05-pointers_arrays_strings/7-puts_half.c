#include "main.h"
#include<stdio.h>
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
	half = leng / 2;
	while (1)
	{
		if (leng % 2 == 0)
		{
			if (*(str + half) == '\0')
				break;
			_putchar(*(str + half));
		}
		else
		{
			
			if (*(str + half + 1) != '\0')
				break;
			_putchar(*(str + half + 1));
		}
		half++;
	}
	_putchar('\n');
}
