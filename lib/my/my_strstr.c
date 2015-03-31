/*
** my_strstr.c for my_strstr.c in /home/simomb_s/Piscine_C_J06/ex_04
**
** Made by stephanedarcy simomba
** Login   <simomb_s@epitech.net>
**
** Started on  Tue Oct  7 08:56:40 2014 stephanedarcy simomba
** Last update Mon Nov 10 15:59:12 2014 stephanedarcy simomba
*/

char	*my_strstr(char *str, char *to_find)
{
  int	i;
  int	j;
  int	okay;

  i = 0;
  while (str[i])
    {
      if (str[i] == to_find[0])
	{
	  j = 0;
	  okay = 1;
	  while (to_find[j])
	    {
	      if (str[i + j] != to_find[j])
		okay = 0;
	      j = j + 1;
	    }
	  if (okay)
	    {
	      return (str);
	    }
	}
      i = i + 1;
    }
  return (0);
}
