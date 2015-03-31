/*
** epur_str.c for epur_str.c in /home/simomb_s/semestre1/rendu/MUL_2014_fdf
**
** Made by stephanedarcy simomba
** Login   <simomb_s@epitech.net>
**
** Started on  Wed Dec  3 17:14:12 2014 stephanedarcy simomba
** Last update Sun Feb  1 22:49:43 2015 stephanedarcy simomba
*/

#include "mysh.h"

char	*epur_str(char *str)
{
  char	*src;
  int	i;
  int	j;

  i = 0;
  j = 0;
  if ((src = malloc(sizeof(char *) * my_strlen(str))) == NULL)
    return (NULL);
  while (str[i] != '\0')
    {
      if (str[i] == ' ' || str[i] == '\t')
	{
	  while ((str[i] == ' ' || str[i] == '\t') && str[i] != '\0')
	    i = i + 1;
	  if (j > 0 && str[i] != '\0')
	    src[j++] = ' ';
	}
      src[j] = str[i];
      j = j + 1;
      i = i + 1;
    }
  src[j] = '\0';
  return (src);
}

char	*my_close_chaine(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] == ' ')
	str[i] = '\0';
      i = i + 1;
    }
  return (str);
}

char	**my_close(char **tab, int n)
{
  int	i;

  i = 0;
  while (i < n)
    {
      tab[i] = my_close_chaine(tab[i]);
      i = i + 1;
    }
  return (tab);
}
