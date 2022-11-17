#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: parameter
 * @n: numner of integer passed to it
 * Description: does what i say it does
 * Return: 0
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list ap;
unsigned int i;
char *sum;

va_start(ap, n);

sum = 0;

for (i = 0; i < n; i++)
{
sum = va_arg(ap, char*);
if (separator == NULL)
{
printf("%s", sum);
}
else if (sum == NULL)
{
printf("(nil)%s", separator);
}
else
{
printf("%s", sum);
if (i != n - 1)
{
printf("%s", separator);
}
}
}
printf("\n");
}
