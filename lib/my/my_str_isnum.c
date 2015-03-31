/*
** my_str_isnum.c for my_str_isnum.c in /home/simomb_s/Piscine_C_J06/ex_11
**
** Made by stephanedarcy simomba
** Login   <simomb_s@epitech.net>
**
** Started on  Tue Oct  7 19:49:57 2014 stephanedarcy simomba
** Last update Sat Jan 10 20:57:45 2015 stephanedarcy simomba
*/

int	my_str_isnum(char *str)
{
  while (*str != '\0')
    {
      if (*str < '0' || *str > '9')
	return (0);
      str = str + 1;
    }
  return (1);
}
