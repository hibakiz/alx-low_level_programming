#include"main.h"
/**
 * main - Entry point
 *
 * Description: 'print using puts'
 *
 * Return: Always 0 (Success)
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
int main(void)
{
	print_alphabet();
	return (0);
}
