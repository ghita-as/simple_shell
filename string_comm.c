#include "shell.h"

char *_strdup(const char *s)
{
	char *p;
	int i, lon = 0;

	if (s == NULL)
		return (NULL);
	while (*s != '\0')
	{
		lon++;
		s++;
	}
	s = s - lon;
	p = malloc(sizeof(char) * (lon + 1));
	if (p == NULL)
		return (NULL);
	for (i = 0; i <= lon; i++)
		p[i] = s[i];
	return (p);
}

int _strcmp(char *s1, char *s2)
{
	int c;

	c = (int)*s1 - (int)*s2;
	while (*s1)
	{
		if (*s1 != *s2)
			break;
		s1++;
		s2++;
		c = (int)*s1 - (int)*s2;
	}
	return (c);
}

int _strlen(char *s)
{
	int lon = 0;

	while (s[lon])
		lon++;
	return (lon);
}

char *_strcat(char *d, char *so)
{
	char *p = d;

	while (*p)
		p++;

	while (*so)
	{
		*p = *so;
		p++;
		so++;
	}
	*p = *so;
	return (d);
}

char *_strcpy(char *d, char *so)
{
	int i = 0;

	while (so[i])
	{
		d[i] = so[i];
		i++;
		so++;
	}
	*d = *so;
	return (d);
}
