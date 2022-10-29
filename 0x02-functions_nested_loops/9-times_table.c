#include "main.h"
/**
 * times_table - ehat it days
 * @a: hh
 * @b: uuii
 * @c: jisjd
 * @d: tuudy
 * Return: blessed
 */

void times_table(void)
{
	int a = 0; b, c, d;
	for (b = 0, b < 10, b++)
	{
		for (c = 0, c <= 9, c++)
		{
			d = a * c;
			printf("%d ", d);
		}
		printf("\n");
		a++;
	}
	return (0);
}
