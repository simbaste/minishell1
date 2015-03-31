/*
** my_printf.c for my_printf.c in /home/simomb_s/semestre1/rendu/PSU_2014_my_printf
**
** Made by stephanedarcy simomba
** Login   <simomb_s@epitech.net>
**
** Started on  Mon Nov 10 12:24:03 2014 stephanedarcy simomba
** Last update Sat Jan 10 19:21:37 2015 stephanedarcy simomba
*/

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "my.h"

int		(*flag_ptr[10])(int, va_list) = {flag_d, flag_s, flag_c,
						 flag_x, flag_S, flag_b,
						 flag_p, flag_X, flag_ld};

char		*list_flag()
{
  char		*flag;

  flag = malloc(10 * sizeof(char));
  flag[0] = 'd';
  flag[1] = 's';
  flag[2] = 'c';
  flag[3] = 'x';
  flag[4] = 'S';
  flag[5] = 'b';
  flag[6] = 'p';
  flag[7] = 'X';
  flag[8] = 'l';
  flag[9] = '\0';
  return (flag);
}

int		gere_flag(const char *format, char *flag, int i, va_list ap)
{
  int		j;

  j = 0;
  while (format[i + 1] != flag[j])
    {
      if (flag[j] == '\0')
	{
	  my_putchar('%');
	  my_putchar(format[i + 1]);
	  i = i + 1;
	  return (i);
	}
      j = j + 1;
    }
  i = flag_ptr[j](i, ap);
  return (i);
}

int		space_in_flag(const char *format, int i)
{
 int		j;

 j = 0;
 while (j <= i)
   {
     j = j + 1;
     format = format + 1;
   }
  j = 1;
  while (j < my_getnbr(format))
    {
      my_putchar(' ');
      j = j + 1;
    }
  j = 0;
  while (format[j] > '0' && format[j] < '9')
    {
      i = i + 1;
      j = j + 1;
    }
  return (i);
}

void		my_funct(const char *format, char *flag, va_list ap)
{
  int		i;

  i = 0;
  while (format[i] != '\0')
    {
      if (format[i] == '%' && format[i + 1] == '%')
	{
	  my_putchar('%');
	  i = i + 1;
	}
      else if (format[i] == '%' && format[i + 1] != '%')
	{
	  if (format[i + 1] > '0' && format[i + 1] < '9')
	    i = space_in_flag(format, i);
	  i = gere_flag(format, flag, i, ap);
	}
      else
	my_putchar(format[i]);
      i = i + 1;
    }
}

int		my_printf(const char *format, ...)
{
  va_list	ap;
  char		*flag;

  flag = list_flag();
  va_start(ap, format);
  my_funct(format, flag, ap);
  va_end(ap);
  return (0);
}
