#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_all - prints all arguments passed to it
 * @format: a string containing the types of arguments passed
 *
 * This function takes a format string and a variable number of arguments.
 * The format string contains characters that indicate the type of argument
 * that is expected. The following characters are supported:
 *  'c' for char
 *  'i' for int
 *  'f' for float
 *  's' for string
 *
 * If the character is not one of these, it is ignored.
 * If the argument is a string, it will be printed as-is.
 * If the argument is NULL, "(nil)" will be printed instead.
 */
void print_all(const char *const format, ...)
{
	va_list args;
	int i = 0;
	char *str = NULL;

	va_start(args, format);

	while (format && format[i])
	{
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(args, int));
			break;
		case 'i':
			printf("%d", va_arg(args, int));
			break;
		case 'f':
			printf("%f", va_arg(args, double));
			break;
		case 's':
			str = va_arg(args, char *);
			if (!str)
				str = "(nil)";
			printf("%s", str);
			break;
		}

		if (format[i - 1] && format[i + 1])
			printf(", ");
		i++;
	}

	printf("\n");
	va_end(args);
}
