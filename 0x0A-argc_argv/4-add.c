#include<stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: int
 * Description: 'print using puts'
 * @argv: int
 * Return: Always 0 (Success)
 */
int main(int argc, char __attribute__((unused)) *argv[])
{

	int i, x, sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (x = 0; argv[i][x]; x++)
		{
			if (argv[i][x] < '0' || argv[i][x] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}

