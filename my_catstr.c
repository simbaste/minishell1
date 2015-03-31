/*
** my_catstr.c for  in /home/simomb_s/semestre1/rendu/PSU_2014_minishell1
**
** Made by stephanedarcy simomba
** Login   <simomb_s@epitech.net>
**
** Started on  Sun Jan 25 15:46:09 2015 stephanedarcy simomba
** Last update Sun Jan 25 16:43:20 2015 stephanedarcy simomba
*/

#include "mysh.h"

char	*my_catstr(char *dest, char *str)
{
  char	*src;
  int	i;
  int	j;

  i = 0;
  j = 0;
  if ((src = malloc((my_strlen(dest)
		     + my_strlen(str) + 2) * sizeof(char *))) == NULL)
    return (NULL);
  while (dest[i] != 0)
    src[j++] = dest[i++];
  src[j++] = '/';
  i = 0;
  while (str[i] != 0)
    src[j++] = str[i++];
  src[j] = 0;
  return (src);
}
