#include "shell.h"

char *_getpath(char *co)
{
	char *p_env, *co_full, *d;
	struct stat t;
	int i;

	for (i = 0; co[i]; i++)
	{
		if (co[i] == '/')
		{
			if (stat(co, &t) == 0)
				return (_strdup(co));
			
			return (NULL);
		}
	}

	p_env = _getenv("PATH");
	
	if (!p_env)
		return (NULL);

	d = strtok(p_env, ":");

	while (d)
	{
		co_full = malloc(_strlen(d) + _strlen(co) + 2);
		if (co_full)
		{
			_strcpy(co_full, d);
			_strcat(co_full, "/");
			_strcat(co_full, co);

			if (stat(co_full, &t) == 0)
			{
				free(p_env);
				return(co_full);
			}
			free(co_full);
			co_full = NULL;

			d = strtok(NULL, ":");
		}
	}
	free(p_env);
	return (NULL);
}
