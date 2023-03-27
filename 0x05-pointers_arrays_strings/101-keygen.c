#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* generate_password - Generates a random password of the specified length.
* @length: The length of the password to generate.
*
* Return: A pointer to the generated password.
*/
char *generate_password(int length)
{
	const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()_+";
	char *password = malloc(length + 1);
	
	srand(time(NULL));
	for (int i = 0; i < length; i++)
	{
		password[i] = charset[rand() % sizeof(charset)];
	}
	password[length] = '\0';
	return (password);
}

/**
* main - Generates a random password and prints it.
*
* Return: Always 0.
*/
int main(void)
{
	char *password = generate_password(10);

	printf("Generated password: %s\n", password);
	free(password);
	return (0);
}
