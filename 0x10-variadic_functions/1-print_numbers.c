#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @separator: parameter
 * @n: numner of integer passed to it
 * Description: does what i say it does
 * Return: 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list ap;
unsigned int i, sum;

va_start(ap, n);

sum = 0;

for (i = 0; i < n; i++)
{
sum = va_arg(ap, unsigned int);
if (separator == NULL)
{
printf("%i", sum);
}
else
{
printf("%i", sum);
if (i != n - 1)
{
printf("%s", separator);
}
}
}
printf("\n");
}
