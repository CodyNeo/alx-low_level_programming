<<<<<<< HEAD
#include "main"
int main(void){
	char school[10] = "_putchar";
	int i;
	for (i = 0;i<8;i++){
		_putchar(school[i]);
	}
	_putchar(10);
	return(0);
=======
#include "main.h"

/**
*main - function prints text as output
*
*Return:return 0
*/
int main(void)
{
	char school[10] = "_putchar";

	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(school[i]);
	}
	_putchar(10);
	return (0);
>>>>>>> 2a04f32e20806fdde475cbc7eeb65508b23a4a9f
}
