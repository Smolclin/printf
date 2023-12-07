#include "main.h"

/**
 * p_EX - prints hexadecimal number
 * @vl: value arg
 * Return: always 0 (success)
 */

int p_EX(va_list vl)
{
	int j; int *array; int cntr = 0;

	unsigned int nm = va_arg(vl, unsigned int);
	unsigned int tm = nm;

	while (nm != 0 )
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
		if(array[j] > 9)
			array[j] = array[j] + 7;
		put_c(array[j] + '0');
	}
	free(array);
	return (cntr);
}
