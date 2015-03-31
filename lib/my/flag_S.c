/*
** flag_S.c for flag_S.c in /home/simomb_s
**
** Made by stephanedarcy simomba
** Login   <simomb_s@epitech.net>
**
** Started on  Thu Nov 13 13:04:13 2014 stephanedarcy simomba
** Last update Sat Jan 10 19:27:39 2015 stephanedarcy simomba
*/

#include <stdarg.h>
#include <stdio.h>
#include "my.h"

int	flag_S(int i, va_list ap)
{
  char	*result;

  result = va_arg(ap, char *);
  my_putstring(result);
  i = i + 1;
  return (i);
}
