#include <stdio.h>
/**
 * main - main function
 *
 * Return: 0
 */
int main(void)
{
	int lo1, lo2;

	for (lo1 = 0; lo1 <= 98; lo1++)
	{
		for (lo2 = lo1 + 1; lo2 <= 99; lo2++)
		{
			putchar((lo1 / 10) + '0');
			putchar((lo1 % 10) + '0');
			putchar(' ');
			putchar((lo2 / 10) + '0');
			putchar((lo2 % 10) + '0');
			if (lo1 / 10 != 9 || lo1 % 10 != 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
