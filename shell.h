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
int _executer(char **commande, char **argv, int id);
void free2Dstri(char **a);
char *_getenv(char *n);
char *_getpath(char *co);
void error_print(char *n, char *com, int id);
int integre(char *co);
void gestion_integre(char **co, char **argv, int *s, int id);
void sortie_shell(char **co, char **argv, int *s, int id);
void aff_env(char **co, int *s);

int posi( char *s);
int _atoi(char *s); 
char *_strdup(const char *s);
int _strcmp(char *s1, char *s2);
int _strlen(char *s);
char *_strcat(char *d, char *so);
char *_strcpy(char *d, char *so);
char *_itoa(int n);
void str_reverse(char *s, int l);

#endif
