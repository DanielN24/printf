#include "main.h"
/**
 *ini_printf - function that produces output according to a format
 *@format: info to print
 *@args: info to print
 *Return: counter
 */
int ini_printf(const char *format, va_list args)
{
	char buffer[2048];
	int counter = 0;

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
				case 'c':
					option_c(format, args, buffer, counter);
					counter++;
					format++;
					break;
				case 's':
					counter = counter + option_s(format, args, buffer, counter);
					format++;
					break;
				case '%':
					buffer[counter] = '%';
					format++;
					counter++;
					break;
				default:
					format--;
					buffer[counter] = *format;
					counter++;
					format++;
					break;
			}
		}
		else
		{
			buffer[counter] = *format;
			counter++;
			format++;
		}
	}
	write(1, buffer, counter);
	return (counter);
}
