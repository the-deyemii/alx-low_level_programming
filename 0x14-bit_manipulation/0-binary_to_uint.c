<<<<<<< HEAD
#include <stdio.h>
#include <string.h>
#include <main.h>

/**
 * binary_to_uint - converts a binary string to unsigned int
 * @b: char string
 * 
 * Return: the converted number
*/

unsigned int binary_to_uint(const char *b)
{
unsigned int k = 1;
 unsigned int i=0;
 int c;
 unsigned int len;

 len = strlen(b);

  for (c = len-1; c >= 0; c--)
 {
  if (b[c] != '0' && b[c] != '1')
      return (0);
    if (b[c] == '1')
    {
     i += k;
     }
    k *= 2;
}
 return (i);
=======
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * binary_to_uint - function name
 * @b: pointer to a string containing '0' nd '1' chars
 *
 * Description: converts binary no's to integers
 * Return: the converted integer
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int k = 1, i = 0, len;
int c;

len = strlen(b);

for (c = len - 1; c >= 0; c--)
{
if (b[c] != '0' && b[c] != '1')
{
return (0);
}
if (b[c] == '1')
{
i += k;
}
k *= 2;
}
return(i);
>>>>>>> 4c1228170489aff9426f21ed86023e9cfb752d4a
}
