/*
** my_str_islower.c for my_str_islower.c in /home/simomb_s/Piscine_C_J06/ex_12
**
** Made by stephanedarcy simomba
** Login   <simomb_s@epitech.net>
**
** Started on  Tue Oct  7 20:22:15 2014 stephanedarcy simomba
** Last update Sat Jan 10 20:57:11 2015 stephanedarcy simomba
*/

int	my_str_islower(char *str)
{
  while (*str != '\0')
    {
      if (*str < 97 || *str > 122)
	return (0);
      str = str + 1;
    }
  return (1);
}
