#include "main.h"
/**
 *ini_printf - function that produces output according to a format
 *@format: info to print
 *@args: info to print
 *Return: counter
 */
int ini_printf(const char *format, va_list args)
{
	int counter = 0;

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
				case 'c':
					option_c(format, args);
					counter++;
					format++;
					break;
				case 's':
					counter = counter + option_s(format, args);
					format++;
					break;
				case '%':
					format++;
					counter++;
					_putchar('%');
					break;
			}
		}
		else
		{
			_putchar(*format);
			counter++;
			format++;
		}
	}
	return (counter);
}
