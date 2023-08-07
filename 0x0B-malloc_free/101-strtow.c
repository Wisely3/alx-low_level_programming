#include "main.h"
#include <stdlib.h>

int word_len(char *str);
int count_words(char *str);
char **strtow(char *str);

/**
 * word_len - locates the index
 * @str: string to be located
 *
 * Return: index
 */

int word_len(char *str)
{
	int i = 0, l = 0;

	while (*(str + i) && *(str + i) != ' ')
	{
		l++;
		i++;
	}

	return (l);
}

/**
 * count_words - counts the number of words
 * @str: string to be searched
 *
 * Return: number of words
 */

int count_words(char *str)
{
	int i = 0, n = 0, l = 0;

	for (i = 0; *(str + i); i++)
		l++;

	for (i = 0; i < l; i++)
	{
		if (*(str + i) != ' ')
		{
			n++;
			i += word_len(str + i);
		}
	}

	return (n);
}

/**
 * strtow - function that splits a string into words
 * @str: string to be split
 *
 * Return: NULL if str == NULL or str == "", otherwise NULL
 */

char **strtow(char *str)
{
	int i = 0, n, m, l, k;
	char **e;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	n = count_words(str);
	if (n == 0)
		return (NULL);

	e = malloc(sizeof(char *) * (n + 1));
	if (e == NULL)
		return (NULL);

	for (m = 0; m < n; m++)
	{
		while (str[i] == ' ')
			i++;

		l = word_len(str + i);

		e[m] = malloc(sizeof(char) * (l + 1));

		if (e[m] == NULL)
		{
			for (; m >= 0; m--)
				free(e[m]);

			free(e);
			return (NULL);
		}

		for (k = 0; k < l; k++)
			e[m][k] = str[i++];

		e[m][k] = '\0';
	}
	e[m] = NULL;

	return (e);
}
