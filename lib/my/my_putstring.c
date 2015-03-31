/*
** my_putstring.c for my_putstrstring.c in /home/simomb_s/semestre1/rendu/PSU_2014_my_printf
**
** Made by stephanedarcy simomba
** Login   <simomb_s@epitech.net>
**
** Started on  Mon Nov 10 16:20:12 2014 stephanedarcy simomba
** Last update Wed Nov 12 10:52:33 2014 stephanedarcy simomba
*/

#include "my.h"

int	my_putstring(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] < 32 || str[i] >= 127)
	{
	  my_putchar('\\');
	  my_putnbr_base(str[i], "01234567");
	}
      else
	my_putchar(str[i]);
      i = i + 1;
    }
  return (0);
}
