#include "main.h"
/**
 * option_s - Evaluates the format s for _printf
 * @format: string of characteres
 * @args: A va_lis
 * @buffer: is the space to locate all the string
 * @counter: the counter of original function to count the string
 * Return: characters stored to output
 */

int option_s(const char *format, va_list args, char *buffer, int counter)
{
	int i = 0;
	const char *s = va_arg(args, const char *);

	if (*format == 's')
	{
		if (!s)
			s = "(null)";

		while (s && *s)
		{
			buffer[counter] = *s++;
			counter++, i++;
		}
	}
	return (i);
}
