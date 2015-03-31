/*
** my_power_rec.c for my_power_rec.c in /home/simomb_s/Piscine_C_J05
**
** Made by stephanedarcy simomba
** Login   <simomb_s@epitech.net>
**
** Started on  Fri Oct  3 11:48:28 2014 stephanedarcy simomba
** Last update Mon Nov 10 15:45:45 2014 stephanedarcy simomba
*/

#include "my.h"

int	my_power_rec(int nb, int power)
{
  int	result;

  if (power == 0)
    return (1);
  else if (power < 0)
    return (0);
  else if (power > 1)
    {
      result = my_power_rec(nb, (power - 1)) * nb;
      if (result < 0)
	return (0);
      else
	return (result);
    }
  else
    return (nb);
}
