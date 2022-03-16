#include "main.h"
/**
 * _islower - tests wherether a char is lowercase
 * lowercase letter from the English alphabet.
 * @c: character to test.
 * Return: 1 if it is a lowercase letter , 0 if not lowercase
 */
int _islower(int c)

{

	if (c > 'a' && c < 'z')
	{
		return (1);
	}

	else
	{
		return (0);
	}

}
