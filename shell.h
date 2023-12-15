#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <errno.h>
#include <fcntl.h>

extern char **environ;

int betty_fct(void);
char *lire_ligne(void);
char **separateur(char *ligne);
int _executer(char **commande, char **argv);
void free2Dstri(char **a);

char *_strdup(const char *s);
int _strcmp(char *s1, char *s2);
int _strlen(char *s);
char *_strcat(char *d, char *so);
char *_strcpy(char *d, char *so);

#endif
