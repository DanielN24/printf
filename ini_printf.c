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
*_printf_i - function that produces output according to a format
*@di: info to print
*Return: a
*/
char *_printf_i(int di)
{
	char *a;

	a = malloc(sizeof(char) * 4);
	if (a == NULL)
		return (0);
	a[0] = (di / 100) + '0';
	a[1] = ((di - ((di / 100 * 100)) / 10) + '0');
	a[2] = ((di % 10) + '0');
	return (a);
}
/**
*_printf_d - function that produces output according to a format
*@di: info to print
*Return: a
*/
char *_printf_d(int di)
{
	char *a;

	a = malloc(sizeof(char) * 4);
	if (a == NULL)
		return (0);
	a[0] = (di / 100) + '0';
	a[1] = ((di - ((di / 100 * 100)) / 10) + '0');
	a[2] = ((di % 10) + '0');
	return (a);
}
