/*
** my_strcpy.c for my_strcpy.c in /home/simomb_s/Piscine_C_J06
**
** Made by stephanedarcy simomba
** Login   <simomb_s@epitech.net>
**
** Started on  Mon Oct  6 09:54:32 2014 stephanedarcy simomba
** Last update Sat Jan 10 20:54:14 2015 stephanedarcy simomba
*/

char	*my_strcpy(char *dest, char *src)
{
  int	i;

  i = 0;
  while (src[i] != '\0')
    {
      dest[i] = src[i];
      i = i + 1;
    }
  dest[i] = '\0';
  return (dest);
}
