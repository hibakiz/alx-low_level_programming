#include "main.h"
#include<stdio.h>
/**
 *  print_times_table - test if a char.
 * @n:  is the input
 *
 * Return:Always 0.
 */
void print_times_table(int n)
{
	int i, j;

	if (n > 15 || n < 0)
	printf("wtf");
	else
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n ; j++)
			{
				if (j != n)
				{
				if (j <= 9)
				printf("%d,   ", i * j);
				else
				printf("%d", i * j);
				}
				else
				{
				printf("%d\n", i * j);
			}
			}

		}	}
}
