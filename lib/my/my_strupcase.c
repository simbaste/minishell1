/*
** my_strupcase.c for my_strupcase.c in /home/simomb_s/Piscine_C_J06/ex_07
**
** Made by stephanedarcy simomba
** Login   <simomb_s@epitech.net>
**
** Started on  Tue Oct  7 17:46:01 2014 stephanedarcy simomba
** Last update Mon Nov 10 15:59:30 2014 stephanedarcy simomba
*/

char	*my_strupcase(char *str)
{
  while (*str != '\0')
    {
      if (*str >= 97 && *str <= 122)
	{
	  *str = *str - 32;
	}
      str = str + 1;
    }
  return (str);
}
