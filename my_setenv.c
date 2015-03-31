/*
** my_setenv.c for  in /home/simomb_s/semestre1/rendu/PSU_2014_minishell1
**
** Made by stephanedarcy simomba
** Login   <simomb_s@epitech.net>
**
** Started on  Sun Jan 25 15:56:27 2015 stephanedarcy simomba
** Last update Wed Jan 28 18:09:51 2015 stephanedarcy simomba
*/

#include "mysh.h"

int	my_tablen(char **my_tab)
{
  int	i;

  i = 0;
  while (my_tab[i] != NULL)
    i++;
  return (i);
}

char	**my_realloc_tab(char **my_tab)
{
  int	i;
  char	**tmp;

  i = 0;
  if ((tmp = malloc((my_tablen(my_tab) + 2) * sizeof(*tmp))) == NULL)
    return (NULL);
  while (my_tab[i] != NULL)
    {
      tmp[i] = my_tab[i];
      i++;
    }
  tmp[i] = NULL;
  return (tmp);
}

char	*my_name(char **my_tab)
{
  char	*str;
  int	i;
  int	j;

  i = 0;
  j = 0;
  str = NULL;
  if (my_tab[1] == NULL || my_tab[2] == NULL || my_tab[3] != NULL)
    my_puterror("usage : setenv NAME value\n");
  else
    {
      if ((str = malloc((my_strlen(my_tab[1]) + my_strlen(my_tab[2]) + 2)
			* sizeof(char *))) == NULL)
	return (NULL);
      while (my_tab[1][i] != '\0')
	str[j++] = my_tab[1][i++];
      str[j++] = '=';
      i = 0;
      while (my_tab[2][i])
	str[j++] = my_tab[2][i++];
      str[j] = '\0';
    }
  return (str);
}

char	**my_setenv(char **envp, char **my_tab)
{
  char	*str;
  int	b;
  int	j;

  j = 0;
  b = 0;
  while (envp[j] != NULL)
    {
      if (my_strncmp(envp[j], my_tab[1], my_strlen(my_tab[1]) - 1) == 0 &&
	  envp[j][my_strlen(my_tab[1])] == '=')
	{
	  b = 1;
	  if ((str = my_name(my_tab)) != NULL)
	    envp[j] = str;
	}
      j++;
    }
  if (b == 0 && (str = my_name(my_tab)) != NULL)
    {
      envp = my_realloc_tab(envp);
      envp[j++] = str;
      envp[j] = NULL;
    }
  return (envp);
}

char	**my_unsetenv(char **envp, char *str)
{
  char	**dest;
  int	b;
  int	j;
  int	k;

  j = 0;
  k = 0;
  b = 0;
  if ((dest = malloc((my_tablen(envp) + 1) * sizeof(*dest))) == NULL)
    return (NULL);
  while (envp[j] != NULL)
    {
      if (my_strncmp(envp[j], str, my_strlen(str) - 1) == 0 &&
	  envp[j][my_strlen(str)] == '=')
	{
	  b = 1;
	  j++;
	}
      else
	dest[k++] = envp[j++];
    }
  dest[k] = NULL;
  if (b == 0)
    my_puterror("usage : unsetenv NAME\n");
  return (dest);
}
