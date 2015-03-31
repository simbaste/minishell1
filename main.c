/*
** main.c for  in /home/simomb_s/semestre1/CPE_2014_get_next_line
**
** Made by stephanedarcy simomba
** Login   <simomb_s@epitech.net>
**
** Started on  Mon Jan 12 12:12:38 2015 stephanedarcy simomba
** Last update Fri Jan 30 09:11:12 2015 stephanedarcy simomba
*/

#include "mysh.h"

void	get_signal(int sig)
{
  (void)sig;
  my_printf("\e[00;5;36m\nmysh@simomb_s$> \e[0;0;39m");
}

char	**func(char **envp, char **chemin, char **my_tab, char *src)
{
  if ((chemin = find_path(envp)) == NULL)
    return (NULL);
  src = my_path(chemin, my_tab[0]);
  if ((my_execve(my_tab, envp, src)) == -1)
    return (NULL);
  return (envp);
}

char	**my_func(char *str, char *src, char **chemin, char **envp)
{
  char	**my_tab;
  int	n;

  str = epur_str(str);
  n = count_token(str);
  my_tab = my_str_to_wordtab(str);
  my_tab = my_close(my_tab, n);
  if (my_strcmp("exit", my_tab[0]) == 0)
    exit(0);
  else if (my_strcmp("cd", my_tab[0]) == 0)
    my_cd(my_tab);
  else if (envp[0] != NULL && my_strcmp("setenv", my_tab[0]) == 0 &&
	   my_tab[1] != NULL)
    return (my_setenv(envp, my_tab));
  else if (envp[0] != NULL && my_strcmp("unsetenv", my_tab[0]) == 0 &&
	   my_tab[1] != NULL)
    return (my_unsetenv(envp, my_tab[1]));
  else if (envp[0] != NULL && my_strcmp("env", my_tab[0]) == 0)
    aff_env(envp);
  else if (my_tab[0][0] == '.' && my_tab[0][1] == '/')
    exec_file(my_tab, envp);
  else if (envp[0] != NULL && func(envp, chemin, my_tab, src) == NULL)
    return (NULL);
  return (envp);
}

char	*my_log(char **envp)
{
  char	*log;
  int	i;
  int	j;
  int	k;

  i = 0;
  j = 8;
  k = 0;
  log = NULL;
  while (envp[i] != NULL)
    {
      if (my_strncmp("LOGNAME", envp[i], 6) == 0)
	{
	  if ((log = malloc(sizeof(char *) * my_strlen(envp[i]))) == NULL)
	    return (NULL);
	  while (envp[i][j] != '\0')
	    log[k++] = envp[i][j++];
	  log[k] = '\0';
	}
      i++;
    }
  return (log);
}

int	main(int ac, char **av, char **envp)
{
  char	*str;
  char	*src;
  char	*log;
  char	**chemin;

  if ((log = my_log(envp)) == NULL)
    my_puterror("env is NULL !!!\n");
  my_printf("\e[00;5;36mmysh@%s$> \e[0;0;39m", log);
  (void)ac;
  (void)av;
  src = NULL;
  chemin = NULL;
  signal(SIGINT, get_signal);
  signal(SIGTSTP, get_signal);
  while ((str = get_next_line(0)))
    {
      if (str[0] != '\0' && (envp = my_func(str, src, chemin, envp)) == NULL)
	return (-1);
      free(str);
      my_printf("\e[00;5;36mmysh@%s$> \e[0;0;39m", log);
    }
  return (0);
}
