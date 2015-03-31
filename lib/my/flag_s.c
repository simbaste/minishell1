/*
** flag_s.c for flag_s.c in /home/simomb_s/semestre1/rendu/PSU_2014_my_printf
**
** Made by stephanedarcy simomba
** Login   <simomb_s@epitech.net>
**
** Started on  Thu Nov 13 12:40:26 2014 stephanedarcy simomba
** Last update Sun Nov 30 07:44:00 2014 stephanedarcy simomba
*/

#include <stdarg.h>
#include <stdio.h>
#include "my.h"

int	flag_s(int i, va_list ap)
{
  char	*result;

  result = va_arg(ap, char *);
  my_putstr(result);
  i = i + 1;
  return (i);
}
