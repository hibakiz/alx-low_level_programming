/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
#include "main.h"

int main(void)
{
	int r;
	r = print_sign(-23);
	putchar(r + '0');
	r = print_sign(23);
	putchar(r + '0');
	putchar('\n');
	return (0);
}
