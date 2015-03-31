/*
** my_str_isprintable.c for my_str_isprintable.c in /home/simomb_s/Piscine_C_J06/ex_14
**
** Made by stephanedarcy simomba
** Login   <simomb_s@epitech.net>
**
** Started on  Tue Oct  7 20:48:44 2014 stephanedarcy simomba
** Last update Sat Jan 10 20:58:30 2015 stephanedarcy simomba
*/

int	my_str_isprintable(char *str)
{
  while (*str != '\0')
    {
      if (*str < 32)
	return (0);
      str = str + 1;
    }
  return (1);
}
