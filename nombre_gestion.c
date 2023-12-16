#include "shell.h"

int posi( char *s)
{
	int i;

	if (!s)
		return (0);

	for (i = 0; s[i]; i++)
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
	}
	return (1);
}

int _atoi(char *s)
{
	int i, n = 0;

	for (i = 0; s[i]; i++)
	{
		n *= 10;
		n += (s[i] - '0');
	}
	return (n);
}
