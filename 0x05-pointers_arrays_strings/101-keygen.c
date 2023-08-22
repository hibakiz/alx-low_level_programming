#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
* main - tsks
*
* return 0
*/
int main(void)
{
	int x;
	int count;
	int total;

	srand(time(NULL));
	for (count = 0, total = 2772; total > 122; count++)
	{
		x = (rand() % 125) + 1;
		printf("%c", x);
		total -= x;
	}
	printf("%c", total);

	return (0);
}
