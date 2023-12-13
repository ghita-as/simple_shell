#include "shell.h"

void freestr(char **a)
{
	int i;

	if (!a)
		return;

	for (i = 0; a[i]; i++)
	{
		free(a[i]);
		a[i] = NULL;
	}
	free(a[i]), a[i] = NULL;
}
