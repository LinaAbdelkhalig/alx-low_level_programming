#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concats all arguments of a program
 * @ac: number of arguments
 * @av: array of arguments
 * Return: pointer to a new string or NULL
 */

char *argstostr(int ac, char **av)
{
	int i, c = 0, n = 0, compute = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++, c++)
		c += _strlen(av[i]);

	s = malloc(sizeof(char) * c + 1);
	if (s == 0)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (; av[i][n] != '\0'; n++, compute++)
			s[compute] = av[i][n];
		s[compute] = '\n';
		compute++;
	}
	s[compute] = '\0';
	return (s);
}
