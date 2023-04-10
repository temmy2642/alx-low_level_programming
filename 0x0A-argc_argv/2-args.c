#include <stdio.h>
#include "main.h"
/**
 * main - main function
* @argc: the parame
 * @argv: the second parame
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
