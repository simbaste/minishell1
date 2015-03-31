/*
** flag_b.c for flag_b.c in /home/simomb_s
**
** Made by stephanedarcy simomba
** Login   <simomb_s@epitech.net>
**
** Started on  Thu Nov 13 13:06:24 2014 stephanedarcy simomba
** Last update Sat Jan 10 19:22:33 2015 stephanedarcy simomba
*/

#include <stdarg.h>
#include <stdio.h>
#include "my.h"

int	flag_b(int i, va_list ap)
{
  int	result;

  result = va_arg(ap, int);
  my_putnbr_base(result, "01");
  i = i + 1;
  return (i);
}
