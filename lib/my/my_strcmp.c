/*
** my_strcmp.c for my_strcmp.c in /home/simomb_s/Piscine_C_J06/ex_05
**
** Made by stephanedarcy simomba
** Login   <simomb_s@epitech.net>
**
** Started on  Tue Oct  7 10:52:32 2014 stephanedarcy simomba
** Last update Sat Jan 10 20:53:41 2015 stephanedarcy simomba
*/

#include "my.h"

int	my_strcmp(char *s1, char *s2)
{
  if (s1[0] == s2[0])
    {
      if (s1[0] == '\0')
	return (0);
      return (my_strcmp(s1 + 1, s2 + 1));
    }
  return (s1[0] - s2[0]);
}
