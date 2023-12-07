#include "main.h"

/**
 * prin_ex_xtr - prints hex nums
 * @nm: the number to be printed
 * Return: 1
 */

int prin_ex_xtr(unsigned long int nm)
{
	long int j;
	long int *array;
	long int cntr = 0;
	unsigned long int tmp = nm;

	while (nm / 16 != 0)
	{
		nm /= 16;
		cntr++;
	}
	cntr++;
	array = malloc(cntr * sizeof(long int));

	for (j = 0; j < cntr; j++)
	{
		array[j] = tmp % 16;
		tmp = tmp / 16;
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
