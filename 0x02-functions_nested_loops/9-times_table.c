#include <stdio.h>
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
	int num = 0, res, i, j;
	for(i = 0; i < 9; i++)
	{
		for(j = 0; j <= 9; j++)
		{
			res = num * j;
			printf("%d  ", res);
		}
		printf("\n");
		num++;
	}
	return;
}
