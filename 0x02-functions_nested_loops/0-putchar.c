#include "main.h"


/**
 * main - Prints _putchar
 * Return: 0 always
 */
int main(void)
{
	int i = 0;

	char k[] = "_putchar";

	while (i <= 7)
	{
		_putchar(k[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
