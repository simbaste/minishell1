/*
** my_str_isalpha.c for my_str_isalpha.c in /home/simomb_s/Piscine_C_J06/ex_10
**
** Made by stephanedarcy simomba
** Login   <simomb_s@epitech.net>
**
** Started on  Tue Oct  7 19:13:12 2014 stephanedarcy simomba
** Last update Mon Nov 10 16:03:41 2014 stephanedarcy simomba
*/

int	my_str_isalpha(char *str)
{
  while (*str != '\0')
    {
      if ((*str < 'a') && (*str > 'z' || *str < 'A') && (*str > 'Z'))
	{
	  return (0);
	}
      str = str + 1;
    }
  return (1);
}
