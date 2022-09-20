#include<stdio.h>
#include "main.h"
/**
 * rev_string - print in reverse
 * @s: characters
 * Return: void
 */
void rev_string(char *s)
{
	int l = 0;
	int max, half;
	char a, b;

	while (s[l] != '\0')
	{
		l++;
	}
	l--;
	max = l;
	half = l / 2;
	while (half >= 0)
	{
		a = s[max - half];
		b = s[half];
		s[half] = a;
		s[max - half] = b;
		half--;
	}
}
