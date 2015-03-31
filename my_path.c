/*
** my_path.c for  in /home/simomb_s/semestre1/rendu/PSU_2014_minishell1
**
** Made by stephanedarcy simomba
** Login   <simomb_s@epitech.net>
**
** Started on  Sun Jan 25 15:53:27 2015 stephanedarcy simomba
** Last update Sun Feb  1 22:52:28 2015 stephanedarcy simomba
*/

#include "mysh.h"

void		my_err(int b, char *str)
{
  if (b == 0)
    {
      my_puterror(str);
      my_puterror(" : command not found\n");
    }
}

char		*my_path(char **path, char *str)
{
  int		i;
  int		b;
  char		*chemin;
  DIR		*dirp;
  struct dirent	*entry;

  i = 0;
  b = 0;
  while (path != NULL && path[i] != NULL)
    {
      if ((dirp = opendir(path[i])) != NULL)
	while ((entry = readdir(dirp)) != NULL)
	  if (my_strcmp(entry->d_name, str) == 0)
	    {
	      b = 1;
	      if ((chemin = my_catstr(path[i], str)) == NULL)
		return (NULL);
	      return (chemin);
	    }
      closedir(dirp);
      i++;
    }
  my_err(b, str);
  return (NULL);
}

char		**find_path(char **envp)
{
  int		i;
  char		**chemin;

  i = 0;
  while (envp != NULL && envp[i])
    {
      if (envp[i][0] == 'P' && envp[i][1] == 'A' &&
	  envp[i][2] == 'T' && envp[i][3] == 'H')
	{
	  chemin = my_word_in_tab(&envp[i][5]);
	  return (chemin);
	}
      i++;
    }
  return (NULL);
}

void		aff_env(char **envp)
{
  int		i;

  i = 0;
  while (envp != NULL && envp[i])
    {
      my_putstr(envp[i++]);
      my_putchar('\n');
    }
}
