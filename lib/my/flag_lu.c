/*
** flag_lu.c for flag_lu.c in /home/simomb_s
**
** Made by stephanedarcy simomba
** Login   <simomb_s@epitech.net>
**
** Started on  Thu Nov 13 12:49:47 2014 stephanedarcy simomba
** Last update Sat Jan 10 19:26:22 2015 stephanedarcy simomba
*/

#include <stdarg.h>
#include <stdio.h>
#include "my.h"

int		flag_lu(int i, va_list ap)
{
  unsigned int	result;

  result = va_arg(ap, unsigned int);
  my_put_nbr(result);
  i = i + 2;
  return (i);
}
