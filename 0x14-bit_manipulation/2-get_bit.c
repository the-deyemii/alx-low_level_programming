#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * get_bit - function name
 * @n: given no
 * @:index: index, starting from 0
 *
 * Description: fuction that returns the value of a bit in a given index
 * Return: thee value of the bit or -1 if it fails
 */
int get_bit(unsigned long int n, unsigned int index)
{
int bit_value;
unsigned int i;

i = (sizeof(unsigned long int) * 8);
if (index > i)
{
return (-1);
}

bit_value = ((n >> index) & 1);

return (bit_value);
}
