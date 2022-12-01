#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * get_bit- function name
 * @n: given no 
 * @:index: index, starting from 0
 *
 * Description: fuction that returns the value of a bit in a given index
 * Return: thee value of the bit or -1 if it fails
 */
int get_bit(unsigned long int n, unsigned int index)
{
unsigned int bit_value;
unsigned int i = 0;

if (index >= i)
{
bit_value = (n >> index) & 1;
return (bit_value);
}
return (-1);
}
