#include<stdio.h>
#include "main.h"
/**
 * print_triangle - Entry point
 *@size: int
 * Description: 'tsks'
 *
 *
 * Return: Always 0 (Success)
 */
void print_triangle(int size)
{
	int i, j, n, k;

	n = size;
	if (n <= 0)
	{
		/*_putchar(' ');*/
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = n; j > i + 1; j--)
			{
				_putchar(' ');
			}
			for (k = 0; k <= i; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
