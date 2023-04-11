#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* count_words - main function
* @str: parameter
*
* Return: returns count
*/
int count_words(char *str)
{
	int i, count = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
			count++;
	}

	return (count);
}

/**
* word_len - main function
* @str: parameter
*
* Return: returns len
*/
int word_len(char *str)
{
	int len = 0;

	while (*str != '\0' && *str != ' ')
	{
		len++;
		str++;
	}

	return (len);
}

/**
* strtow - main function
* @str: parameter
*
* Return: returns w at the end
*/
char **strtow(char *str)
{
	int i, j, k, len, words;
	char **w;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	words = count_words(str);
	if (words == 0)
		return (NULL);

	w = malloc(sizeof(char *) * (words + 1));
	if (w == NULL)
		return (NULL);

	for (i = 0, j = 0; i < words; i++)
	{
		while (str[j] == ' ')
			j++;

		len = word_len(str + j);

		w[i] = malloc(sizeof(char) * (len + 1));
		if (w[i] == NULL)
		{
			for (k = 0; k < i; k++)
				free(w[k]);
			free(w);
			return (NULL);
		}

		for (k = 0; k < len; k++)
			w[i][k] = str[j + k];

		w[i][k] = '\0';
		j += len;
	}

	w[i] = NULL;
	return (w);
}
