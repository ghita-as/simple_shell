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

extern char **env;

int betty_fct(void);
char *lire_ligne(void);
char **separateur(char *ligne);
int _executer(char **commande, char **argv, char **env);
void freestr(char **a);

char *_up(const char *s);
int _cmp(char *s1, char *s2);
int _lenght(char *s);
char *_cat(char *d, char *so);
char *_cp(char *d, char *so);

#endif
