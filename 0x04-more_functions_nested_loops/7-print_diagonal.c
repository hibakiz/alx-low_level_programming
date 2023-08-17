#include "main.h"
#include<stdio.h>
/**
 * print_diagonal - Entry point
 *@n: int
 * Description: 'tsks'
 *
 *
 * Return: Always 0 (Success)
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		/*_putchar(' ');*/
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
