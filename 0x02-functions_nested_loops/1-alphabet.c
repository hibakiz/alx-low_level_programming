#include "main.h"
/**
 * print_alphabet - printi a-z.
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
	putchar(i);
	}
	putchar('\n');
}
