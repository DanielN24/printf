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

	if (!format)
		return (-1);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
				case 'c':
					option_c(format, args, buffer, counter);
					counter++, format++;
					break;
				case 's':
					counter = counter + option_s(format, args, buffer, counter);
					format++;
					break;
				case '%':
					buffer[counter] = '%';
					format++, counter++;
					break;
				case '\0':
					return (-1);
				default:
					format--;
					buffer[counter] = *format;
					counter++, format++;
			}
		} else
		{
			buffer[counter] = *format;
			counter++, format++;
		}
	}
	write(1, buffer, counter);
	return (counter);
}
/**
 *ini_printf_di - function that produces output according to a format
 *@format: info to print
 *@args: info to print
 *Return: counter
 */
int ini_printf_di(const char *format, va_list args)
{
	char buffer[2048];
	int counter = 0;

	if (!format)
		return (-1);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
				case 'd':
				{
					int n = va_arg(args, int), i;

					char buf[32];

					number_to_string(n, 10, buf);

					for (i = 0; buf[i]; i++)
						_putchar(buf[i]);
					break;
				}
			}
		}  else
		{
			buffer[counter] = *format;
			counter++, format++;
		}
	}
	write(1, buffer, counter);
	return (counter);
}
/**
*unsigned_number_to_string - numbers to string
*@number: numbers
*@base: variable name
*@buffer: buffer
*/
void unsigned_number_to_string(int number, int base, char *buffer)
{
	char buf[65];
	int i, cur = 0;

	if (number == 0)
	{
		*buffer++ = '0';
		*buffer = 0;
		return;
	}
	for (i = 0; i < 65; i++)
		buf[i] = 0;
	while (number)
	{
		int digit = number % base;

		if (digit >= 10)
		{
			buf[cur++] = 'a' + (digit - 10);
		} else
		{
			buf[cur++] = '0' + digit;
		}
		number /= base;
	}
	for (i = cur - 1; i != 0; i--)
		*buffer++ = buf[i];
	*buffer++ = buf[0];
	*buffer = 0;
}
/**
*number_to_string - numbers to string
*@number: numbers
*@base: variable name
*@buffer: buffer
*/
void number_to_string(int number, int base, char *buffer)
{
	if (number < 0)
	{
		*buffer++ = '-';
		number = -number;
	}

	unsigned_number_to_string(number, base, buffer);
}
