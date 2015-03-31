/*
** my_square_root.c for my_square_root.c in /home/simomb_s/Piscine_C_J07
**
** Made by stephanedarcy simomba
** Login   <simomb_s@epitech.net>
**
** Started on  Wed Oct  8 16:09:39 2014 stephanedarcy simomba
** Last update Mon Nov 10 15:51:21 2014 stephanedarcy simomba
*/

#include "my.h"

int	my_square_root(int nb)
{
  int	i;

  i = 1;
  while (i < nb)
    {
      if ((i * i) == nb)
	return (i);
      i = i + 1;
    }
  return (0);
}
