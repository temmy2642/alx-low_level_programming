#include <stdio.h>
/**
 * print_before_main - Prints a message before the main function is executed.
 *
 *
 * Return: This function does not return anything.
 */

void __attribute__ ((constructor)) before_main()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
