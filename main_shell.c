#include "shell.h"

/**
 * main - main entry point
 * @a: count of arguments to be used
 * @b: the arguments
 * Return: always 0 when success
 */

int main(int a, char **argv)
{
	char *ligne = NULL;
	char **commande = NULL;
	int s = 0, id = 0;
	(void)a;

	while (1)
	{
		ligne = lire_ligne();
		if (ligne == NULL) /* EOF is reached*/
		{
			if (isatty(STDIN_FILENO))
				write(STDOUT_FILENO, "\n", 1);
			return (s);
		}
		id++;
	
		commande = separateur(ligne);
		if (commande == NULL)
			continue;

		if (integre(commande[0]))
			gestion_integre(commande, argv, &s, id);
		else
			s = _executer(commande, argv, id);

	}
}
