/*
** my_putnbr_base.c for my_putnbr_base.c in /home/simomb_s/Piscine_C_J06/ex_15
**
** Made by stephanedarcy simomba
** Login   <simomb_s@epitech.net>
**
** Started on  Thu Oct  9 17:37:41 2014 stephanedarcy simomba
** Last update Sat Jan 10 20:34:43 2015 stephanedarcy simomba
*/

#include "my.h"

int		my_putnbr_base(int nbr, char *base)
{
  int		d;
  unsigned int	t;
  unsigned int	nb;

  d = 1;
  t = my_strlen(base);
  if (nbr < 0)
    {
      my_putchar('-');
      nbr = nbr * -1;
    }
  nb = nbr;
  while ((nb / d) >= t)
    {
      d = d * t;
    }
  while (d > 0)
    {
      my_putchar(base[(nb / d) % t]);
      d = d / t;
    }
  return (0);
}
