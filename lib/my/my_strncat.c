/*
** my_strncat.c for my_strncat.c in /home/simomb_s/Piscine_C_J07
**
** Made by stephanedarcy simomba
** Login   <simomb_s@epitech.net>
**
** Started on  Wed Oct  8 17:25:56 2014 stephanedarcy simomba
** Last update Mon Nov 10 15:57:27 2014 stephanedarcy simomba
*/

char	*my_strncat(char *dest, char *src, int nb)
{
  int	i;
  int	j;

  i = 0;
  j = 0;
  while (dest[i] != '\0')
    {
      i = i + 1;
    }
  while (j < nb)
    {
      dest[i] = src[j];
      j = j + 1;
      i = i + 1;
    }
  return (dest);
}
