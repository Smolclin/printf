#include "main.h"

/**
 * f_strln - find strln
 * @s: strn
 * Return: int
 */

int f_strln(char *s)
{
	int i;

	for (i = 0; s[i] != 0; i++)
		;
	return (i);
}

/**
 * f_strln - strln for const characters
 * @s: strn
 * Return: always 0
 */

int f_strln(char *s)
{
	int i;
	for (i = 0; s[i] != 0; i++)
		;
	return (i);
}
