#include "shell.h"

void free2Dstri(char **a)
{
	int i;

	if (!a)
		return;

	for (i = 0; a[i]; i++)
	{
		free(a[i]);
		a[i] = NULL;
	}
	free(a);
	a = NULL;
}

void error_print(char *n, char *com, int id)
{
	char *ind, message[] = ": not found\n";

	ind = _itoa(id);

	write(STDERR_FILENO, n, _strlen(n));
	write(STDERR_FILENO, ": ", 2);
	write(STDERR_FILENO, ind, _strlen(ind));
	write(STDERR_FILENO, ": ", 2);
	write(STDERR_FILENO,com, _strlen(com));
	write(STDERR_FILENO, message, _strlen(message));

	free(ind);
}

char *_itoa(int n)
{
	char b[20];
	int i = 0;

	if (n == 0)
	{
		b[i++] = '0';
	}
	else
	{
		while (n > 0)
		{
			b[i++] = (n % 10) + '0';
			n /= 10;
		}
	}

	b[i] = '\0';
	str_reverse(b, i);

	return (_strdup(b));
}

void str_reverse(char *s, int l)
{
	char tmp;
	int debut = 0;
	int fin = l - 1;

	while (debut < fin)
	{
		tmp = s[debut];
		s[debut] = s[fin];
		s[fin] = tmp;
		debut++;
		fin--;
	}
}

