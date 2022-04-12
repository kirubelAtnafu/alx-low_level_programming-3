#include "main.h"

/**
 * _isalpha - Used to check for alphabetic characters
 * @c: an input character
 * Description: This program uses returns 1 if character is a
 * lowercase or uppercase letter
 * Return: return 1 or 0
 */
int _isalpha(int c)
{
	char i;
	int isletter = 0;
	for((i = 'a'; i <= 'z'; i++) || (i = 'A'; i <= 'Z'))
	{	
		if(i == c)
		{
			isletter = 1;
		}
	}
	return (isletter);
}
