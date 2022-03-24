#include "main.h"
/**
 *ini_printf - function that produces output according to a format
 *@format: info to print
 *@args: info to print
 *Return: retu
 */
int ini_printf(const char *format, va_list args)
{
	int state = 0, counter = 0;

	while (*format)
	{
		if (state == 0)
		{
			if (*format == '%')
				state = 1;
			else
			{
				_putchar(*format);
			}
		}
		else if (state == 1)
		{
			switch (*format)
			{
				case 'c':
					option_c(format, args);
					counter--;
				break;
				case 's':
					counter = counter + option_s(format, args);
				break;
				case '%':
					_putchar('%');
				break;
			}
			state = 0;
		}
		counter++;
		format++;
	}
	return (counter);
}
