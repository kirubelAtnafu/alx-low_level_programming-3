#include "main.h"

/**
 * main -to tset run _islower function
 *
 * Return: retunrs 1 or 0
 */
int main(void)
{
	int r;

	r = _isalpha('H');
	_putchar(r + '0');
	r = _isalpha('k');
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}
