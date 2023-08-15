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
	z = _abs(f);
	_putchar ('0' + z);
	return (z);
}
