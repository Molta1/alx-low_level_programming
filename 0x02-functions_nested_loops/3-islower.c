#include "main."
/**
 * main - Entry point 
 * Description: checks characters lower case or not
 *Return: 1 if it is lowercase or 0 otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
