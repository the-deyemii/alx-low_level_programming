#include "main.h"
/**
 * jack_bauer - clock timer
 * @hour: pahssf
 * @minute: dkckff
 */

void jack_bauer(void)
{
	int hour;
	int minute;

	hour = minute = 0;
	while (hour < 24)
	{
		printf("%02d:%02d", hour, minute);
		minute++;
		_putchar('\n');
		if (minute ==60)
		{
			hour += 1;
			minute = 0;
		}
	}
	return (0);
}
