/*
** my_strlowcase.c for my_strlowcase.c in /home/simomb_s/Piscine_C_J06/ex_08
**
** Made by stephanedarcy simomba
** Login   <simomb_s@epitech.net>
**
** Started on  Tue Oct  7 17:58:24 2014 stephanedarcy simomba
** Last update Mon Nov 10 15:57:07 2014 stephanedarcy simomba
*/

char	*my_strlowcase(char *str)
{
  while (*str != '\0')
    {
      if (*str >= 65 && *str <= 90)
	{
	  *str = *str + 32;
	}
      str = str + 1;
    }
  return (str);
}
