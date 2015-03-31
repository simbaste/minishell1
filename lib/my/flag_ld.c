/*
** flag_ld.c for flag_ld.c in /home/simomb_s
**
** Made by stephanedarcy simomba
** Login   <simomb_s@epitech.net>
**
** Started on  Thu Nov 13 12:46:32 2014 stephanedarcy simomba
** Last update Sat Jan 10 19:25:29 2015 stephanedarcy simomba
*/

#include <stdarg.h>
#include <stdio.h>
#include "my.h"

int	flag_ld(int i, va_list ap)
{
  long	result;

  result = va_arg(ap, long);
  my_put_nbr(result);
  i = i + 2;
  return (i);
}
