/*
** my_strncpy.c for my_strncpy.c in /home/simomb_s/Piscine_C_J06
**
** Made by stephanedarcy simomba
** Login   <simomb_s@epitech.net>
**
** Started on  Mon Oct  6 11:17:58 2014 stephanedarcy simomba
** Last update Sat Jan 10 21:02:20 2015 stephanedarcy simomba
*/

char	*my_strncpy(char *dest, char *src, int n)
{
  int	j;

  j = 0;
  while (src[j] != '\0' && j < n)
  {
      dest[j] = src[j];
      j = j + 1;
    }
  if (j < n)
    dest[j] = '\0';
  return (dest);
}
