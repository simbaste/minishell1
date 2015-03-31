/*
** my_strcat.c for my_strcat.c in /home/simomb_s
**
** Made by stephanedarcy simomba
** Login   <simomb_s@epitech.net>
**
** Started on  Wed Oct  8 16:38:02 2014 stephanedarcy simomba
** Last update Mon Nov 10 15:52:28 2014 stephanedarcy simomba
*/

char	*my_strcat(char *dest, char *str)
{
  int	i;
  int	j;

  i = 0;
  j = 0;
  while (dest[i] != '\0')
    {
      i = i + 1;
    }
  while (str[j] != '\0')
    {
      dest[i] = str[j];
      j = j + 1;
      i = i + 1;
    }
  return (dest);
}
