#include"main.h"
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
