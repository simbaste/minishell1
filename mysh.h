/*
** mysh.h for  in /home/simomb_s/semestre1/rendu/PSU_2014_minishell1
**
** Made by stephanedarcy simomba
** Login   <simomb_s@epitech.net>
**
** Started on  Sat Jan 17 20:53:52 2015 stephanedarcy simomba
** Last update Wed Jan 28 14:13:53 2015 stephanedarcy simomba
*/

#ifndef __MYSH_H__
#define __MYSH_H__

#include <sys/types.h>
#include <sys/time.h>
#include <sys/resource.h>
#include <sys/wait.h>
#include <dirent.h>
#include <stdlib.h>
#include <signal.h>
#include <stdio.h>
#include <unistd.h>
#include "get_next_line.h"

char	**my_word_in_tab(char *str);
char	**my_str_to_wordtab(char *str);
char	*my_strcat(char *dest, char *str);
char	*my_catstr(char *dest, char *str);
char	*my_strcpy(char *dest, char *str);
int	my_printf(const char *format, ...);
void	my_puterror(char *str);
int	my_strncmp(char *dest, char *str, int nb);
char	*my_path(char **path, char *str);
char	**find_path(char **envp);
int	my_strcmp(char *str, char *src);
char	*epur_str(char *str);
char	**my_close(char **my_tab, int n);
char	**my_unsetenv(char **my_tab, char *str);
char	**my_setenv(char **envp, char **my_tab);
int	my_cd(char **tab);
int	count_token(char *str);
int	exec_file(char **my_tab, char **envp);
void	aff_env(char **envp);
int	my_execve(char **my_tab, char **envp, char *src);
int	my_strlen(char *str);
int	my_putchar(char c);
int	my_putstr(char *str);

#endif /* !__MYSH_H__ */
