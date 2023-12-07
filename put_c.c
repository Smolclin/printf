#include "main.h"

/**
 * put_c - prints character's no
 * @n: character
 * Return: always 0 (success)
 */

int put_c(char n)
{
	return (write(1, &n, 1));
}
