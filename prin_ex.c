#include "main.h"

/**
 * prin_ex - prints hexgecimal
 * @vl: value
 * Return: 1
 */

int prin_ex(va_list vl)
{
	int j;
	int *array;
	int cntr = 0;
	unsigned int nm = va_arg(vl, unsigned int);
	unsigned int tm = nm;

	while (nm / 16 != 0)
	{
		nm /= 16;
		cntr++;
	}
	cntr++;
	array = malloc(cntr * sizeof(int));

	for (j = 0; j < cntr; j++)
	{
		array[j] = tm % 16;
		tm /= 16;
	}
	for (j = cntr - 1; j >= 0; j--)
	{
		if (array[j] > 9)
			array[j] = array[j] + 39;
		put_c(array[j] + '0');
	}
	free(array);
	return (cntr);
}
