#include "shell.h"

int _executer(char **commande, char **argv, int id)
{
	char *co_full;
	pid_t fils;
	int s;

	co_full = _getpath(commande[0]);

	if (!co_full)
	{
		error_print(argv[0], commande[0], id);
		free2Dstri(commande);
		return (127);
	}
	
	fils = fork();
	if (fils == 0)
	{
		if (execve(co_full, commande, environ) == -1)	
		{
			free(co_full);
			co_full = NULL;
			free2Dstri(commande);
		}
	}
	else
	{
		waitpid(fils, &s, 0);
		free2Dstri(commande);
		free(co_full);
		co_full = NULL;
	}
	return (WEXITSTATUS(s));
}
