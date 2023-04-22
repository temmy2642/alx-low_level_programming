#include <stdio.h>
#include <stdlib.h>

/**
* main - prints the opcodes of its own main function
* @argc: number of command-line arguments (must be 2)
* @argv: array of command-line argument strings (must contain number of bytes)
*
* Return: 0 on success, 1 on incorrect number of arguments, 2 on neg
*/
int main(int argc, char **argv)
{
	int num_bytes, i;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		printf("Error\n");
		return (2);
}

unsigned char *main_ptr = (unsigned char *)&main;

	for (i = 0; i < num_bytes; i++)
	{
		printf("%02x", *(main_ptr + i));
		if (i != num_bytes - 1)
			printf(" ");
	}

	printf("\n");

	return (0);
}
