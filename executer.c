#include "shell.h"

int _executer(char **commande, char **argv, char **env)
{
	pid_t fils;
	int s;
	
	fils = fork();
	if (fils == 0)
	{
		if (execve(commande[0], commande, env) == -1)
		{
			perror(argv[0]);
			freestr(commande);
			exit(150);
		}
	}
	else
	{
		waitpid(fils, &s, 0);
		freestr(commande);
	}
	return (WEXITSTATUS(s));
}
