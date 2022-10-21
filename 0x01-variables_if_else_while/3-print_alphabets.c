#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function
 * Return: 0
 */
int main(void)
{
	char loo = 'a';

	while (loo <= 'z')
	{
		printf("%c", loo);
		loo++;
	}
	loo = 'A';
	while (loo <= 'Z')
	{
		printf("%c", loo);
		loo++;
	}
	printf("\n");
	return (0);
}
