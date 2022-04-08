#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of char type: %d byte(s)\n", sizeof(char));
	printf("Size of int type: %d byte(s)\n", sizeof(int));
	printf("Size of long type: %d byte(s)\n", sizeof(long));
	printf("Size of long long type: %d byte(s)\n", sizeof(long long));
	printf("Size of float type: %d byte(s)\n", sizeof(float));
	return (0);
}
