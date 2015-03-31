/*
** my_word_in_tab.c for  in /home/simomb_s/semestre1/rendu/PSU_2014_minishell1
**
** Made by stephanedarcy simomba
** Login   <simomb_s@epitech.net>
**
** Started on  Mon Jan 19 10:39:42 2015 stephanedarcy simomba
** Last update Sun Jan 25 16:44:13 2015 stephanedarcy simomba
*/

#include "mysh.h"

char	*epur_chaine(char *str)
{
  int	i;
  int	j;
  char *src;

  i = 0;
  j = 0;
  if ((src = malloc((my_strlen(str) + 2) * sizeof(char *))) == NULL)
    return (NULL);
  while (str[i] != '\0')
    {
      if (str[i] == ' ' || str[i] == '\t')
	{
	  while (str[i] != '\0' && (str[i] == ' ' || str[i] == '\t'))
	    i++;
	  src[j++] = ' ';
	}
      src[j] = str[i];
      i++;
      j++;
    }
  src[j] = '\0';
  return (src);
}

int	count_word(char *str)
{
  int	i;
  int	j;

  i = 0;
  j = 0;
  while (str[i] != '\0')
    {
      if (str[i] == ':')
	j = j + 1;
      i = i + 1;
    }
  return (j + 1);
}

char	**my_loop(char *str, char **src, int *j, int *k)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] == ':')
	{
	  src[*j][*k] = '\0';
	  if ((src[++(*j)] = malloc(my_strlen(str) * sizeof(char *))) == NULL)
	    return (NULL);
	  i++;
	  *k = 0;
	}
      src[*j][*k] = str[i];
      i++;
      (*k)++;
    }
  return (src);
}

char	**my_word_in_tab(char *str)
{
  int	j;
  int	k;
  char	**src;

  j = 0;
  k = 0;
  str = epur_chaine(str);
  if ((src = malloc((count_word(str) + 2) * sizeof(*src))) == NULL)
    return (NULL);
  if ((src[0] = malloc(my_strlen(str) * sizeof(char *))) == NULL)
    return (NULL);
  if ((src = my_loop(str, src, &j, &k)) == NULL)
    return (NULL);
  src[j][k] = '\0';
  src[j + 1] = NULL;
  return (src);
}
