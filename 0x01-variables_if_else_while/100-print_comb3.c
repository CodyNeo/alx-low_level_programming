#include <stdio.h>
/**
 *main - Prints all combinations of two digits with,
 * and space followed by new line
 *
 * Return: returns 0
 */
int main(void)
{
	int lo1, lo2;

	for (lo1 = 0; lo1 <= 8; lo1++)
	{
		for (lo2 = lo1 + 1; lo2 <= 9; lo2++)
		{
			putchar(lo1 + '0');
			putchar(lo2 + '0');
			if (lo1 == 8 && lo2 == 9)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

