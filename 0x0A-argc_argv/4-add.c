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

	int i, x, sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (!(*argv[i] >= 48 && *argv[i] <= 57))
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			x = atoi(argv[i]);
			sum = sum + x;
		}
	}
	printf("%d\n", sum);
	return (0);
}

