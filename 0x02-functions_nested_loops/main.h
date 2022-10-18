void task0(char [a])
{
	int i = 0;

	while (a[i] != '\0')
	{
		putchar(a[i]);
		i++;
	}
}



void print_alphabet(void)
{
	char b  = 'a';

	for (b = 'a'; b <= 'z'; ++b)
		putchar(b);
}	
