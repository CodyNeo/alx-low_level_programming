#include <stdio.h>
/**
 * main - main function
 *
 * Return: 0
 */
int main(void)
{
	int lo1, lo2, lo3;

	for (lo1 = 0; lo1 < 9; lo1++)
	{
		for (lo2 = lo1 + 1; lo2 < 9; lo2++)
		{
			for (lo3 = lo2 + 1; lo3 < 10; lo3++)
			{
				putchar((lo1 % 10) + '0');
				putchar((lo2 % 10) + '0');
				putchar((lo3 % 10) + '0');
				if (lo1 == 7 && lo2 == 8 && lo3 == 9)
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
