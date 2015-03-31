/*
** flag_x.c for flag_x.c in /home/simomb_s
**
** Made by stephanedarcy simomba
** Login   <simomb_s@epitech.net>
**
** Started on  Thu Nov 13 13:01:40 2014 stephanedarcy simomba
** Last update Sat Jan 10 19:28:12 2015 stephanedarcy simomba
*/

#include <stdarg.h>
#include <stdio.h>
#include "my.h"

int	flag_x(int i, va_list ap)
{
  int	result;

  result = va_arg(ap, int);
  my_putnbr_base(result, "0123456789abcdef");
  i = i + 1;
  return (i);
}
