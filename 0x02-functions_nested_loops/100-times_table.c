#include "main.h"
#include<stdio.h>
/**
 *  print_to_98 - test if a char.
 * @n:  is the input
 *
 * Return:Always 0.
 */
 void print_times_table(int n)
{
	int i, j, k;
	
	if (n > 15 || n < 0)
	printf("wtf");
	else
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j < 6; j++)
			{
				printf("%d, ", i * j);
			}
			putchar('\n');
		
		}
	} 
}
