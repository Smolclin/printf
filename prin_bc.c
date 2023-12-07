#include "main.h"

/**
 * prin_bc - prints characters
 * @vl: values
 * Return: always 0 (success)
 */

int prin_c(va_list vl)

{
	char m;

	m = va_arg(vl, int);
	put_c(m);
	return (1);
}
