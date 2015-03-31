/*
** flag_X.c for flag_X.c in /home/simomb_s
**
** Made by stephanedarcy simomba
** Login   <simomb_s@epitech.net>
**
** Started on  Thu Nov 13 13:13:01 2014 stephanedarcy simomba
** Last update Sat Jan 10 19:28:34 2015 stephanedarcy simomba
*/

#include <stdarg.h>
#include <stdio.h>
#include "my.h"

int	flag_X(int i, va_list ap)
{
  int	result;

  result = va_arg(ap, int);
  my_putnbr_base(result, "0123456789ABCDEF");
  i = i + 1;
  return (i);
}
