 #include "main.h"
/**
 *print_sign: prints the sign of a number afafter testing
 *@n: positive, zero or negative sign
 * Return: 1 if positive, 0 negative, -1 less 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
}
