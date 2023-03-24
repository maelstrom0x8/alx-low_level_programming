#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - Entrypoint
 * Description: A function that prints anything
 * @format: Format specifier
 */

void print_all(const char * const format, ...)
{
	va_list ap;
	int index;
	char *str;

	va_start(ap, format);
	index = 0;
	while (format[index] && format)
	{
		switch (format[index])
		{
			case 'f':
				printf("%e", va_arg(ap, double));
				break;
			case 'i':
				printf("%d", va_arg(ap, int));
				break;
			case 'c':
				printf("%c", va_arg(ap, int));
				break;
			case 's':
				str = va_arg(ap, char *);
				if (str != NULL)
				{
					printf("%s", str);
					break;
				}
				printf("(nil)");
				break;
			default:
				index++;
				continue;
		}
		if (format[index + 1])
		{
			printf(", ");
		}
		index++;
	}
	printf("\n");
	va_end(ap);
}
