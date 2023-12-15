#include "shell.h"

int _executer(char **commande, char **argv)
{
	pid_t fils;
	int s;
	
	fils = fork();
	if (fils == 0)
	{
		if (execve(commande[0], commande, environ) == -1)
			
		{
			perror(argv[0]);
			freestr(commande);
			exit(0);
		}
	}
	else
	{
		waitpid(fils, &s, 0);
		freestr(commande);
	}
	return (WEXITSTATUS(s));
}
