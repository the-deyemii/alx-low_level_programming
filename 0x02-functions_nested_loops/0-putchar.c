#include <stdio.h>
void task0(char *c);

/**
 * main - Entry point
 * Return: kkk klan
 */
int main(void)
{
	char c[] = "_putchar";

	task0(c);
	putchar('\n');
	return (0);
}
/**
 * task0 - don't stress me
 * @c: una papa
 */

void task0(char *c)
{
	int i = 0;

	while  (c[i] != '\0')
	{
		putchar(c[i]);
		i++;
	}
}
