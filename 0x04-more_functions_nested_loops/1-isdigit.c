#include "main.h"

/**
 * _isdigit - checks for Uppercase Character
 * @c: digit
 * Return: 1 for success 0 for otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
