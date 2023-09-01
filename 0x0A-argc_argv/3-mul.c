#include<stdio.h>
#include <stdlib.h>
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
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		 int x = atoi(argv[1]);
		 int y = atoi(argv[2]);
		 int z = x * y;

		printf("%d\n", z);
	}
	return (0);
}

