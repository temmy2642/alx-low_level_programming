#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - prints anything
 * @format: parameter
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	char *str;

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
				printf("%f", (float)va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char *);
				printf("%s", str ? str : "(nil)");
				break;
			default:
				i++;
				continue;
		}

		if (format[i + 1])
			printf(", ");
		i++;
	}

	printf("\n");
	va_end(args);
}
