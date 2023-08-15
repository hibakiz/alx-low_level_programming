#include "main.h"
/**
 *  print_sign - test if a char.
 * @n:  is the input
 *
 * Return:Always 0.
 */
int print_sign(int n)
{
	if (n > 0)
	{
	putchar (43);
	return (1);
	}
	else if (n == 0)
	{
	putchar (48);
	return (0);
	}
	else
	{
	putchar(45);
	return (-1);
}
}
