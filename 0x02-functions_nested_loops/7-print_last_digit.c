#include "main.h"
/**
 *  print_last_digit - tasks.
 * @n:  is the input
 *
 * Return:Always 0.
 */
int print_last_digit(int n)
{
	int f, z;

	f = n % 10;
	if (f >= 0)
	z = f; 
	else
	z = f * -1;
	_putchar ('0' + z);
	return (z);
}
