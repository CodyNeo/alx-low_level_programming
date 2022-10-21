#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function
 *
 * Return: 0
 */
int main(void)
{
	char lo = '0';

	for (; lo <= '9'; lo++)
	{
		putchar(lo);
		if (lo == '9')
			break;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
