#include<stdio.h>
#include <stdint.h>
/**
 * main - Entry point
 * @argc: int
 * Description: 'print using puts'
 * @argv: int
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{

	if (argc < 3)
		printf("Error\n");
	else
	{
		int x = (int)*argv[1] - '0';
		int y = (int)*argv[2] - '0';

		printf("%d\n", x * y);
	}
	return (0);
}

