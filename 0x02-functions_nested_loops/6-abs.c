#include "main.h"
/**
 * _abs: compute the absolute value
 * @n: is the integer to find its  absolute value
 * Return: returns an integer (int)
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (n);
	}
}
