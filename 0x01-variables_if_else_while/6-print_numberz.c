#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function
 *
 * Return: 0
 */
int main(void)
{
	int lo = 0;

	while (lo < 10)
	{
		putchar(lo + '0');
		lo++;
	}
	putchar('\n');
	return (0);
}
