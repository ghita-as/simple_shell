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
	(void) argv;
	(void)id;
	
	if (_strcmp(co[0], "exit") == 0)
		sortie_shell(co, s);
	else if (_strcmp(co[0], "env") == 0)
		aff_env(co, s);
}

void sortie_shell(char **co, int *s)
{
	free2Dstri(co);
	exit(*s);
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
