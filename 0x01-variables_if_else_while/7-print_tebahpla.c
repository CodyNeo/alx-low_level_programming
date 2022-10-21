#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function
 *
 * Return: 0
 */
int main(void)
{
	char lo = 'z';

	while (lo >= 'a')
	{
		putchar(lo);
		lo--;
	}
	putchar('\n');
	return (0);
}
