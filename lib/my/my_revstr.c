/*
** my_revstr.c for my_revstr.c in /home/simomb_s/Piscine_C_J06/ex_03
**
** Made by stephanedarcy simomba
** Login   <simomb_s@epitech.net>
**
** Started on  Mon Oct  6 14:14:06 2014 stephanedarcy simomba
** Last update Sat Jan 10 20:39:14 2015 stephanedarcy simomba
*/

#include "my.h"

char	*my_revstr(char *str)
{
  int	i;
  int	j;
  char	c;

  i = 0;
  j = 0;
  while (str[i] != '\0')
    {
      i = i + 1;
    }
  i = i - 1;
  while (i > j)
    {
      c = str[i];
      str[i] = str[j];
      str[j] = c;
      j = j + 1;
      i = i - 1;
    }
  return (str);
}
