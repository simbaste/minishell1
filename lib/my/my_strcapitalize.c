/*
** my_strcapitalize.c for my_strcapitalize.c in /home/simomb_s/Piscine_C_J06/ex_09
**
** Made by stephanedarcy simomba
** Login   <simomb_s@epitech.net>
**
** Started on  Tue Oct  7 18:49:30 2014 stephanedarcy simomba
** Last update Wed Jan 14 17:49:05 2015 stephanedarcy simomba
*/

char	*my_strcapitalize(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      if (i == 0)
	{
	  if (str[i] >= 97 && str[i] <= 122)
	    str[i] = str[i] - 32;
	}
      else if (str[i] >= 65 && str[i] <= 90)
	{
	  str[i] = str[i] + 32;
	}
      i = i + 1;
    }
  return (str);
}
