#include "shell.h"

char **separateur(char *ligne)
{
	char *t;
	char del[] = " \t\n";
	char *tmp = NULL;
	char **co = NULL;
	int cmpt = 0;
	int i = 0;

	if (!ligne)
		return (NULL);
	
	tmp = _up(ligne);
	t = strtok(tmp, del);

	if (t == NULL)
	{
		free(ligne), ligne = NULL;
		free(tmp), tmp = NULL;
		return (NULL);
	}

	while (t)
	{
		cmpt++;
		t = strtok(NULL, del);
	}
	free(tmp), tmp = NULL;

	co = malloc(sizeof(char *) * (cmpt + 1));
	
	if (!co)
	{
		free(ligne), ligne = NULL;
		return (NULL);
	}

	t = strtok(ligne, del);
	while (t)
        {
		co[i] = _up(t);
		t = strtok(NULL, del);
		i++;
	}
	free(ligne), ligne = NULL;
	co[i] = NULL;
	return (co);
}
