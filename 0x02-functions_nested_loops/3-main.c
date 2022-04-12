#include "main.h"

/**
 * main - Test running _islower funtion
 * _islower checks for lower case characters to return
 * 1 if true and 0 if false.
 * Return: return '0' or '1'
 */
int main(void)
{
	int r;
	
	r = _islower('H');
	_putchar(r + '0');
	r = _islower('o');
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}	
