#include "main.h"
/**
 *_printf - function that produces output according to a format
 *@format: info to print
 *Return: retu
 */
int _printf(const char *format, ...)
{
	va_list args;
	int retu;

	if (format == NULL)
		return (-1);

	va_start(args, format);

	retu = ini_printf(format, args);

	va_end(args);

	return (retu);
}
