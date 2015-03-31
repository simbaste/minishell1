/*
** my_str_issupper.c for my_str_issuper.c in /home/simomb_s/Piscine_C_J06/ex_13
**
** Made by stephanedarcy simomba
** Login   <simomb_s@epitech.net>
**
** Started on  Tue Oct  7 20:27:55 2014 stephanedarcy simomba
** Last update Sat Jan 10 20:56:47 2015 stephanedarcy simomba
*/

int	my_str_isupper(char *str)
{
  while (*str != '\0')
    {
      if (*str < 'A' || *str > 'Z')
	return (0);
      str = str + 1;
    }
  return (1);
}
