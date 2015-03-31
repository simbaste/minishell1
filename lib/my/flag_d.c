/*
** flag_d.c for flag_d.c in /home/simomb_s/semestre1/rendu/PSU_2014_my_printf
**
** Made by stephanedarcy simomba
** Login   <simomb_s@epitech.net>
**
** Started on  Thu Nov 13 12:33:00 2014 stephanedarcy simomba
** Last update Thu Nov 13 15:51:38 2014 stephanedarcy simomba
*/

#include <stdarg.h>
#include <stdio.h>
#include "my.h"

int	flag_d(int i, va_list ap)
{
  int	result;

  result = va_arg(ap, int);
  my_put_nbr(result);
  i = i + 1;
  return (i);
}
