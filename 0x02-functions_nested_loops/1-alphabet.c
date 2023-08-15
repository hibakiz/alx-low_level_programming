#include"main.h"
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	print_alphabet();
	return (0);
}
void print_alphabet(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
	putchar(i);
	}
	putchar('\n');
}
