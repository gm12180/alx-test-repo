#include "holberton.h"
/**
 * _abs - calculate the absolute number form zero.
 * @i: the integer to be converted.
 * Return: absolute value of the input integer.
 */
int _abs(int i)
{
	if (i < 0)
		i = i * -1;
	return (i);

}
