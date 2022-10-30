#include <stdio.h>
#include "main.h"
/**
 * times_table - ehat it days
 * @j:hh
 * @i:ui
 * @res: tyy
 * @num:dy
 * Return: lessed
 */

void times_table(void)
{
	int num = 0, res, i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			res = num * j;
			printf("%d,  ", res);
		}
		if (i == 9)
		{
			printf("%d", res);
		}
		printf("\n");
		num++;
	}
}
