#include "shell.h"

char *lire_ligne(void)
{
	char *ligne = NULL;
	size_t lon = 0;
	ssize_t n;

	if (isatty(STDIN_FILENO) == 1)
		write(STDOUT_FILENO, "$ ", 2);

	n = getline(&ligne, &lon, stdin);
	if (n == -1)
	{
		free(ligne);
		return (NULL);
	}
	return (ligne);
}
