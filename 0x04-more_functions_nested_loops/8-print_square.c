#include "main.h"
#include<stdio.h>
/**
 * print_square - Entry point
 *@size: int
 * Description: 'tsks'
 *
 *
 * Return: Always 0 (Success)
 */
void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		/*_putchar(' ');*/
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
			_putchar('#');
			}
			_putchar('\n');
		}
	}
}
