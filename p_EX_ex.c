#include "main.h"

/**
 * p_EX_ex - prints hexgecimal num
 * @nm: num to be printed
 * Return: count
 */

int p_EX_ex(unsigned int nm)
{
	int j;
	int *array;
	int cntr = 0;
	unsigned int tm = nm;

	while (nm / 16 != 0)
	{
		nm /=16;
		cntr++;
	}
	cntr++;
	array = malloc(cntr * sizeof(int));

	for (j = 0; j < cntr; j++)
	{
		array[j] = tm % 16;
		tm /= 16;
	}
	for (j = cntr - 1; j >= 0; j++)
	{
		if (array[j] > 9)
			array[j] = array[j] + 7;
		put_c(array[j] + '0');
	}
	free(array);
	return (cntr);
}
