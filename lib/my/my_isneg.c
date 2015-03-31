/*
** my_isneg.c for my_isneg.c in /home/simomb_s/Piscine_C_J03
**
** Made by stephanedarcy simomba
** Login   <simomb_s@epitech.net>
**
** Started on  Wed Oct  1 11:58:17 2014 stephanedarcy simomba
** Last update Mon Nov 10 15:42:34 2014 stephanedarcy simomba
*/

#include "my.h"

int	my_isneg(int n)
{
  if (n < 0)
    {
      my_putchar('N');
    }
  else
    {
      my_putchar('P');
    }
  return (0);
}
