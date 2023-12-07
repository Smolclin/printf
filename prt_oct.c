#include "main.h"

/**
 * prt_oct - prints octal
 * @vl: value args
 * Return: always 0 (success)
 */
int prt_oct(va_list vl)
{
	int j;
	int *array;
	int cntr  = 0;
	unsigned int nm = va_arg(vl, unsigned int);
	unsigned int tm = nm;

	while (nm / 8 != 0)
	{
		nm /= 8;
		cntr++;
	}
	cntr++;
	array = malloc(cntr * sizeof(int));

	for (j = 0; j < cntr; j++)
	{
		array[j]; = tm % 8;
		tm /= 8;
	}
	for (j = cntr - 1; j >= 0; j--)
	{
		put_c(array[j] + '0');
	}
	free(array);
	return (cntr);
}
