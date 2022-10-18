#ifndef _MAIN_H_
#define _MAIN_H_

void task0(char [a])
{
	int i = 0;

	while (a[i] != '\0')
	{
		putchar(a[i]);
		i++;
	}
}


void print_alphabet(char ch)
{
	char ch = 'a';

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
#endif
