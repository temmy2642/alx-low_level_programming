#include <stdlib.h>
#include "main.h"
/**
* argstostr - main function
* @ac: parameter1
* @av: parameter2
*
* Return: returns str
*/
char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, len = 0, k = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			len++;
		len++;
	}
	len++;

	str = malloc(len * sizeof(char));
	if (str == NULL)
		return (NULL);


	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			str[k++] = av[i][j];
		str[k++] = '\n';
	}
	str[k] = '\0';

	return (str);
}
