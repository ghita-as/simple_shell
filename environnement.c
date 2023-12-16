#include "shell.h"

char *_getenv(char *n)
{
	int i;
	char *tmp, *k, *valeur, *copie;

	for (i = 0; environ[i]; i++)
	{
		tmp = _strdup(environ[i]);
		k = strtok(tmp, "=");

		if (_strcmp(k, n) == 0)
		{
			valeur = strtok(NULL, "\n");
			copie = _strdup(valeur);
			free(tmp);
			return (copie);
		}
		free(tmp);
		tmp = NULL;
	}
	return (NULL);
}
