/*
** my_putstr.c for my_putstr.c in /home/simomb_s/Piscine_C_J04
**
** Made by stephanedarcy simomba
** Login   <simomb_s@epitech.net>
**
** Started on  Fri Oct  3 22:08:07 2014 stephanedarcy simomba
** Last update Tue Jan 27 18:31:39 2015 stephanedarcy simomba
*/

#include <stdlib.h>
#include "my.h"

int	my_putstr(char* str)
{
  int	i;

  i = 0;
  while (str != NULL && str[i] != '\0')
    {
      my_putchar(str[i]);
      i = i + 1;
    }
  return (0);
}
