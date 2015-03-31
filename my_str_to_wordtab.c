/*
** my_str_to_wordtab.c for my_str_to_wordtab.c in /home/simomb_s/projet_Bistro
**
** Made by stephanedarcy simomba
** Login   <simomb_s@epitech.net>
**
** Started on  Tue Oct 28 15:11:14 2014 stephanedarcy simomba
** Last update Fri Jan 30 09:02:35 2015 stephanedarcy simomba
*/

#include "mysh.h"

int	count_token(char *str)
{
  int	i;
  int	j;

  i = 0;
  j = 0;
  while (str[i] != '\0')
    {
      if (str[i] == ' ')
	j = j + 1;
      i = i + 1;
    }
  return (j + 1);
}

char	**my_str_to_wordtab(char *str)
{
  int	i;
  int	j;
  int	n;
  char	**src;

  i = 1;
  j = 1;
  n = count_token(str);
  if ((src = malloc((n + 2) * sizeof(src))) == NULL)
    return (NULL);
  src[0] = str;
  while (str[i] != '\0')
    {
      if (str[i - 1] == ' ')
	{
	  src[j] = &str[i];
	  j = j + 1;
	}
      i = i + 1;
    }
  if (my_strncmp(src[0], "ls", 1) == 0)
    src[j++] = "--color";
  src[j] = NULL;
  return (src);
}
