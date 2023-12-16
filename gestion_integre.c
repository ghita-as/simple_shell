#include "shell.h"

int integre(char *co)
{
	char *gest[] = {
		"exit", "env", "cd", "setenv", NULL
	};
	int i;

	for (i = 0; gest[i]; i++)
	{
		if (_strcmp(co, gest[i]) == 0)
			return (1);
	}
	return (0);
}

void gestion_integre(char **co, char **argv, int *s, int id)
{
	if (_strcmp(co[0], "exit") == 0)
		sortie_shell(co, argv, s, id);
	else if (_strcmp(co[0], "env") == 0)
		aff_env(co, s);
}

void sortie_shell(char **co, char **argv, int *s, int id)
{
	int valeur_sortie = (*s);
	char *ind;
	char message[] = ": exit: Illegal number: ";

	if (co[1])
	{
		if (posi(co[1]))
		{
			valeur_sortie = _atoi(co[1]);
		}
		else
		{
			ind = _itoa(id);

			write(STDERR_FILENO, argv[0], _strlen(argv[0]));
			write(STDERR_FILENO, ": ", 2);
			write(STDERR_FILENO, ind, _strlen(ind));
			write(STDERR_FILENO, message, _strlen(message));
			write(STDERR_FILENO, co[1], _strlen(co[1]));
			write(STDERR_FILENO, "\n", 1);
			free(ind);
			free2Dstri(co);
			(*s) = 2;
			return;
		}
	}
	free2Dstri(co);
	exit(valeur_sortie);
}

void aff_env(char **co, int *s)
{
	int i;

	for (i = 0; environ[i]; i++)
	{
		write(STDOUT_FILENO, environ[i], _strlen(environ[i]));
		write(STDOUT_FILENO, "\n", 1);
	}
	free2Dstri(co);
	(*s) = 0;
}
