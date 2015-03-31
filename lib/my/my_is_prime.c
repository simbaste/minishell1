/*
** my_is_prime.c for my_is_prime.c in /home/simomb_s/Piscine_C_J07
**
** Made by stephanedarcy simomba
** Login   <simomb_s@epitech.net>
**
** Started on  Wed Oct  8 16:20:20 2014 stephanedarcy simomba
** Last update Mon Nov 10 15:43:25 2014 stephanedarcy simomba
*/

#include "my.h"

int	my_is_prime(int nb)
{
  int	i;

  i = 2;
  if (nb == 0 || nb == 1)
    return (0);
  else if (nb < 0)
    return (0);
  while (i < nb)
    {
      if ((nb % i) == 0)
	return (0);
      i = i + 1;
    }
  return (1);
}
